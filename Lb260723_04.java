/*  Program527
    Refer Link :- https://docs.oracle.com/javase/8/docs/api/java/util/LinkedList.html
    Add a function of Insert Quere
*/

import java.util.*;

public class Lb260723_04
{ 
    public static void main(String Agrs[])
    {
       DBMS obj = new DBMS(); 
       obj.StartDBMS();

        obj.InsertIntoTable("Rahul",23,89);    
        obj.InsertIntoTable("Sagar",26,98);
        obj.InsertIntoTable("Pooja",20,56);
        obj.InsertIntoTable("Sayali",30,78);
        obj.InsertIntoTable("Tejas",29,68);
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

   // insert into table student values(______, _______, _______);
   public void InsertIntoTable(String Name, int Age, int Marks)
   {
     Student sobj = new Student(Name, Age, Marks);
     lobj.add(sobj); // Use add readymade function (InsertLast)
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