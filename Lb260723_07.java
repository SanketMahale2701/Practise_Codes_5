/*  Program530
    Refer Link :- https://docs.oracle.com/javase/8/docs/api/java/util/LinkedList.html
    Add a function of Insert Quere
*/

import java.util.*;

public class Lb260723_07
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

        obj.SelectFrom(); 
        obj.SelectFrom(3);
        obj.SelectFrom("Sagar");
        
        System.out.println("Maximum marks from thr table is : "+obj.Aggregate_Max());
    }
}

///////////////////////////////////////////////////////////////////

class DBMS
{
   public LinkedList <Student> lobj;
   
   public DBMS()
   {
      lobj = new LinkedList<Student>();
   }

   //--------------------------------------------------------------
   public void StartDBMS()
   {
     // Welcome Mathod

     System.out.println("Marvellous DBMS Started Successfully...");
     System.out.println("Table schema created successfully---");
   }

   //--------------------------------------------------------------
   // insert into table student values(______, _______, _______);
   public void InsertIntoTable(String Name, int Age, int Marks)
   {
     Student sobj = new Student(Name, Age, Marks);
     lobj.add(sobj); // Use add readymade function (InsertLast)
   }

   //--------------------------------------------------------------
   // Select * from Student
   public void SelectFrom()
   {
     System.out.println("Records from student table are :");

     for(Student sref : lobj) // for each, sref is a object
     {
        sref.Display();
     }
   }

   //--------------------------------------------------------------
   // select * from student where Rno = 11
   public void SelectFrom( int Rno)   // overloadind
   {
     System.out.println("Records from student where Roll number is : "+Rno);

     for(Student sref : lobj) // for each, sref is a object
     {
        if( sref.RollNo == Rno)
        {
           sref.Display();
           break;
        }
     }
   }

   //--------------------------------------------------------------
   // select * from student where Name = Sagar
   public void SelectFrom( String name)   // overloadind
   {
     System.out.println("Records from student where Name is : "+name);

     for(Student sref : lobj) // for each, sref is a object
     {
        if( sref.Name == name)
        {
           sref.Display();
           break;
        }
     }
   }
   
   //--------------------------------------------------------------
   // select MAX(marks) from student
   public int Aggregate_Max()
   {
    int iMax = 0;
    for(Student sref : lobj) // for each, sref is a object
     {
        if( sref.Marks > iMax)
        {
          iMax = sref.Marks;
        }
     }
     return iMax;
   }
}

///////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////
