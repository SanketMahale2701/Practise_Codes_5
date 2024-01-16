/*  Program526

   use the collection of java (Linklist, vector, Queue, Stack) Ready made functions
   One Node = information of one Student

   eg. +----------------+    +-----------------+    +------------------+
       | "Amit", 23, 89 | -> | "Sagar", 24, 91 | -> | "Akshay", 22, 81 |  ---------
       +----------------+    +-----------------+    +------------------+
       We use the ready made function of linklist

       Refer Link :- https://docs.oracle.com/javase/8/docs/api/java/util/LinkedList.html
*/

import java.util.*;

public class Lb260723_03
{
    public static void main(String Agrs[])
    {
       DBMS obj = new DBMS(); 
       obj.StartDBMS();
    }
}

class DBMS
{
   public LinkedList <Student> lobj;
   
   public DBMS()
   {
      lobj = new LinkedList<Student>();
   }

   public void StartDBMS()
   {
     // Welcome Mathod

     System.out.println("Marvellous DBMS Started Successfully...");
     System.out.println("Table schema created successfully---");
   }
}

class Student
{
    // Columns of tables

    public int RollNo;
    public String Name;
    public int Age;
    public int Marks; 

    public static int Generator;  // static veriable

    static                  // Static block
    {
        Generator = 0;
    }

    public Student( String str, int x, int y)
    {
        this.RollNo = ++Generator;
        this.Name = str;
        this.Age = x; 
        this.Marks = y;
    }
    public void Display()
    {
        System.out.println(this.RollNo +" "+this.Name+" "+this.Age+" "+this.Marks);
    }
}