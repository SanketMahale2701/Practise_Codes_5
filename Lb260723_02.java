//   Program525

import java.util.*;

public class Lb260723_02
{
    public static void main(String Agrs[])
    {
      Student sobj1 = new Student("Amit", 23, 89);
      Student sobj2 = new Student("Sagar", 24, 91);
     
      sobj1.Display();
      sobj2.Display();
      
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

    static                  // Ststic block
    {
        Generator = 0;      // its a name
    }

    public Student(String str, int x, int y)
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