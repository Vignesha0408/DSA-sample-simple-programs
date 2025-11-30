import java.net.*;

public
class exp8_UDPClient {
 public
  static void main(String[] args) throws Exception 
  {
    DatagramSocket ss = new DatagramSocket(5000);
    byte[] bf = new byte[1024];
    System.out.println("waiting for msg...");
    while (true) {
      DatagramPacket pk = new DatagramPacket(bf, bf.length);
      ss.receive(pk);
      String msg = new String(pk.getData(), 0, pk.getLength());
      System.out.println("Server says: " + msg);
      if (message.equalsIgnoreCase("exit")) {
        System.out.println("Client stopped.");
        break;
      }
    }
    s.close();
  }
}

