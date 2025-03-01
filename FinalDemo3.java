class Demo
{
    public int No1;
    final public int No2;  // const int No2 = 21;

    public Demo(int A, int B)
    {
        No1 = A;
        No2 = B;
    }

}
class FinalDemo3
{
    public static void main(String Arg[])
    {
        Demo obj = new Demo(11,21);
        System.out.println("Value of No1 is : "+obj.No1);
        System.out.println("Value of No2 is : "+obj.No2);

        obj.No1++;
        //obj.No2++;     //error// internally ->// obj.No2 = obj.No2 + 1;

    }
}