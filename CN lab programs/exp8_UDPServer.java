/*
Develop a program on a datagram socket for client/server to display the messages on client 
side, typed at the server side.
*/
import java.net.*;
import java.util.*;
public class exp8_UDPServer {
    public static void main(String[] args) throws Exception
    {
    	Scanner sc = new Scanner(System.in);
    	
        DatagramSocket ds = new DatagramSocket();
        InetAddress a = InetAddress.getByName("localhost");
        
        System.out.println("Type messages");
        while (true) 
        {
            String msg = sc.nextLine();
            byte[] bf = msg.getBytes();
            DatagramPacket pk = new DatagramPacket(bf,bf.length,a,5000);
            ds.send(pk);
            if (msg.equalsIgnoreCase("exit")) 
                break; 
        }
        s.close();
        sc.close();
    }
}
