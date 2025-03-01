class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running "+Thread.currentThread().getName());
        System.out.println("Thread Priority is  "+Thread.currentThread().getPriority());
    }
}

class ThreadDemo8
{
    public static void main(String A[])
    {
        Demo dobj1 = new Demo();
        Thread tobj1 = new Thread(dobj1);
        tobj1.setName("PPA");
        tobj1.setPriority(1);
        tobj1.start();
    }
}