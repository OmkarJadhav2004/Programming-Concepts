class Base
{
    public int A,B;

    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Base Gun");
    }
    public void Sun()
    {
        System.out.println("Inside Base Sun");
    }
    public void Run()
    {
        System.out.println("Inside Base Run");
    }
}

class Derived extends Base 
{
    public int X,Y;

    public void Fun()
    {
        System.out.println("Inside Derived Fun");
    }
    public void Sun()
    {
        System.out.println("Inside Derived Sun");
    }
    public void Mun()
    {
        System.out.println("Inside Derived Mun");
    }
    public void Bun()
    {
        System.out.println("Inside Derived Bun");
    }
}

class RMD
{
    public static void main(String Arg[])
    {
        Base bobj = new Derived();

        bobj.Fun();     //Derived Fun
        bobj.Gun();     //Base Gun
        bobj.Sun();     //Derived Sun
        bobj.Run();     //Base Run
        //bobj.Mun();     //Error
        //bobj.Bun();     //Error
    }
}
// Base bobj = new Base()           //No Casting
// Derived dobj = new Derived()     //No Casting
// Base bobj = new Derived()        //Up Casting
// Derived dobj = new Base()        //Down Casting
