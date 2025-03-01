
class Arithmetic
{
    public int No1;
    public int No2;

    public Arithmetic()
    {
        System.out.println("Inside default constructor");
        No1 = 0;
        No2 = 0;
    }

    public Arithmetic(int A, int B)
    {
        System.out.println("Inside parameterized constructor");
        No1 = A;
        No2 = B;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans =  No1 +  No2;
        return Ans;
    }

    public int Subtraction()
    {
        int Ans = 0;
        Ans =  No1 -  No2;
        return Ans;
    }
}

class Encapsulation
{
    public static void main(String Arr[])
    {
        System.out.println("Inside main function");
        Arithmetic aobj1 = new Arithmetic();    
        Arithmetic aobj2 = new Arithmetic(11,10);
        
        int Ret = 0;

        Ret = aobj2.Addition();
        System.out.println("Addition is : "+Ret);

        Ret = aobj2.Subtraction();
        System.out.println("Subtraction is : "+Ret);

    }
}