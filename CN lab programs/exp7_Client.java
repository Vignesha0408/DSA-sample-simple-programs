import java.io.*;
import java.net.*;
public class exp7_Client {
    public static void main(String[] args)
    {
	String fn;String line;
	
        try (Socket s = new Socket("localhost", 5000)) 
        {
         
         BufferedReader in = new BufferedReader(new InputStreamReader(s.getInputStream()));
         PrintWriter out = new PrintWriter(s.getOutputStream(), true);
         BufferedReader cmd = new BufferedReader(new InputStreamReader(System.in));
            System.out.print("Enter file name: ");
            fn = cmd.readLine();
            out.println(fn);

            System.out.println("\nFile contents :\n");
            
            while ((line = in.readLine()) != null) 
            {
                if (line.equals("EOF")) break;
                System.out.println(line);
            }
            s.close();
        } 
        catch (Exception e){ 
            e.printStackTrace();}
        
    }
}
