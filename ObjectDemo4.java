class Student implements Cloneable
{
    public String Name;
    public int Age;
    public int Marks;

    public Student(String A, int B, int C)
    {
        this.Name = A;
        this.Age = B;
        this.Marks = C;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}

class ObjectDemo4
{
    public static void main(String Arg[])
    {
        try{
        Student sobj = new Student("Omkar", 20, 69);

        Student sobjx = (Student)sobj.clone();

        System.out.println("Name is : "+sobj.Name);
        System.out.println("Age is : "+sobj.Age);
        System.out.println("Marks is : "+sobj.Marks);

        System.out.println("Name is : "+sobjx.Name);
        System.out.println("Age is : "+sobjx.Age);
        System.out.println("Marks is : "+sobjx.Marks);
        }
        catch(Exception obj)
        {
            
        }
    }
}