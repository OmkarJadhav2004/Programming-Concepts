
abstract class Arithmetic
{
    abstract public int Addition(int A, int B);     //virtual int Addition(int A, int B)=0;
    abstract public int Subtraction(int A, int B);
    public int Multiplication(int A, int B)
    {
        return A*B;
    }
}

class Marvellous extends Arithmetic 
{
    public int Addition(int A, int B)
    {
        return A+B;
    }

    public int Subtraction(int A, int B)
    {
        return A-B;
    }
}

class AbstractDemo
{
    public static void main(String Arg[])
    {
        Marvellous mobj = new Marvellous();  //hyat () kahich nahi denar karan constructor nahi na 

        System.out.println(mobj.Addition(11,10));
        System.out.println(mobj.Subtraction(11,10));
        System.out.println(mobj.Multiplication(11,10));
    }
}