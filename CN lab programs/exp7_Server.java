/*
Using TCP/IP sockets, write a client – server program to make the client send the file name 
and to make the server send back the contents of the requested file if present. 
*/

import java.io.*;
import java.net.*;
public class exp7_Server
{
    public static void main(String[] args)
    {
    
        String line,fn;
        try (ServerSocket ss = new ServerSocket(5000))
        {
            System.out.println("Server started...");
            Socket s = ss.accept();
            System.out.println("connected.");
            
            BufferedReader in = new BufferedReader(new InputStreamReader(s.getInputStream()));
            PrintWriter out = new PrintWriter(s.getOutputStream(), true);
 	    fn = in.readLine();
           
            System.out.println("Requested file: " + fn);
            File f = new File(fn);
            if (f.exists() && f.isFile()) 
            {
                BufferedReader fr = new BufferedReader(new FileReader(f));
                while ((line = fr.readLine()) != null)
                    out.println(line);
                
                fr.close();
                out.println("EOF"); 
            }
             else 
                out.println("File not found!");
            
            s.close();
            System.out.println("Connection closed.");
        }
        catch (Exception e) {
            e.printStackTrace();
        }
    }
}

