import java.net.*;
import java.io.*;
class Server
{
    public static void main(String main[]) throws Exception
    {
        System.out.println("Server application is Running...");

        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("Server is waiting for the client at the port number 2100");

        
        Socket sobj = ssobj.accept();   //Accept the request from client
        System.out.println("Connection Established with the Client");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1,str2;
        System.out.println("Marvellous Chat Messanger Application Started....");
        while((str1 = br1.readLine()) != null)
        {
            System.out.println("Client says : "+str1);
            System.out.println("Enter the message for client : ");
            str2 = br2.readLine();
            ps.println(str2);

        }
        System.out.println("Thank you for using Marvellous chat application...");

    }
}