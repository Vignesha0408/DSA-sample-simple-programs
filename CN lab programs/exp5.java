/*
Develop a program to implement a sliding window protocol in the data link layer.
*/

import java.util.Scanner;
public class exp5 
{
public static void main(String[] args) 
{
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter total frames to send: ");
        int tf = sc.nextInt();
        System.out.print("Enter the window size: ");
        int ws = sc.nextInt();
        int sent=0,finw;String ack; 
        
        while (sent < tf) 
        {
            finw = Math.min(ws,tf-sent);
            System.out.println("\nSending Frames:");
            for (int i = 0; i < finw; i++)
                System.out.println("Sent Frame " + (sent + i));
                
            int i = 0;
            while (i<finw) 
            {   
            	System.out.print("Is ACK received? for Frame :" + (sent + i) + "  (y/n): ");
                ack = sc.next();
                if (ack.equals("y")) 
                    System.out.println("ACK received for Frame "+( sent+ i++ ));
                else 
                {   System.out.println("Resending.." + (sent + i));
                    break; 
                }
            }
            sent =sent+ i;
        }
        System.out.println("\nAll frames sent successfully.");
        sc.close();
}
}
