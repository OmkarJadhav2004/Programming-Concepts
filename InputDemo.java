import java.util.*;

class InputDemo
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int No1 = 0, No2 = 0, Ans = 0;
        System .out.println("Enter first number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter Second number :");
        No2 = sobj.nextInt();

        Ans = No1 + No2;

        System.out.println("Addition is : "+Ans);

    }
}

// class InputDemo{
//     public static void main(String Arg[])
//     {
//         Scanner sobj = new Scanner(System.in);

//         float No1 = 0.0f, No2 = 0.0f, Ans = 0.0f;
//         System.out.println("Enter the first Number :");
//         No1 = sobj.nextFloat();

//         System.out.println("Enter the Second Number :");
//         No2 = sobj.nextFloat();

//         Ans = No1 + No2;
//         System.out.println("Addition is : "+Ans);
//     }
// }