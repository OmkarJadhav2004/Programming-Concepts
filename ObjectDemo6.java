class ObjectDemo6
{
    public static void main(String Arg[])
    {
        String s1 = "Marvellous";   // in literal pool
        String s2 = new String("Marvellous"); // in heap memory

        if(s1 == s2) //comparing hashcode which is not possible
        {
            System.out.println("Strings are equal");
        }
        else 
        {
            System.out.println("Strings are different");
        }
        if(s1.equals(s2))
        {
            System.out.println("Strings are equal");
        }
        else{
            System.out.println("Strings are different");
        }
    }
}