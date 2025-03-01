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

class Derivedx extends Base
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
class Hierarchical
{
    public static void main(String Arg[])
    {
       Derived dobj1 = new Derived();
       Derivedx dobj2 = new Derivedx();

       dobj1.Fun();
       dobj1.Gun();

       dobj2.Fun();
       dobj2.Sun();
    }
}