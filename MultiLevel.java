class Base
{
    public int A,B;

    public Base ()
    {
        System.out.println("Inside Base Constructor");
    }
    
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base 
{
    public int X,Y;
    
    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}

class Derivedx extends Derived 
{
    public int P, Q;

    public Derivedx()
    {
        System.out.println("Inside Derivedx Constructor");
    }

    public void Sun()
    {
        System.out.println("Inside Derivedx Sun");
    }
}
class MultiLevel
{
    public static void main(String Arg[])
    {
        System.out.println("Inside main method");
        Derivedx dobj = new Derivedx();

        dobj.Fun();
        dobj.Gun();
        dobj.Sun();
    }
}