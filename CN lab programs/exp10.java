/*
Develop a program for congestion control using a leaky bucket algorithm. 
*/
import java.util.Scanner;
public class exp10 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
	int bk,or,n,cs=0,i,sent;
	
	
        System.out.print("Enter bucketCapacity,outputRate,n of packets ");
        bk = sc.nextInt();
        or = sc.nextInt();
        n = sc.nextInt();
        int[] packets = new int[n];
        System.out.println("Enter packet sizes :");
        for (i = 0; i < n; i++) 
            packets[i] = sc.nextInt();
       
        for (i = 0; i < n; i++) 
        {
            System.out.println("\nPacket "+(i+1)+" of size "+packets[i]+" arrived.");
            if (packets[i] + cs>bk) 
                System.out.println("Bucket overflow");
             else 
             {
                cs += packets[i];
                System.out.println("Packet added to bucket. Current bucket size: "+cs);
             }
            if (cs > 0) 
            {
                sent = Math.min(or, cs);
                cs =cs - sent;
   		System.out.println("Transmitted "+sent+" packets. Remaining in bucket: " + cs);
            }
        }
        while (cs > 0) 
        {
            sent = Math.min(or, cs);
            cs -= sent;
            System.out.println("Transmitted "+sent+" packets. Remaining in bucket: "+cs);
        }
        System.out.println("\nSimulation complete.");
        sc.close();
    }
}
