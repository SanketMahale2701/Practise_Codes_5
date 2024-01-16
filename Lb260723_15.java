/* 
    Refer Link :- https://docs.oracle.com/javase/8/docs/api/java/util/LinkedList.html
*/

/////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

public class Lb260723_15
{ 
    public static void main(String Agrs[])
    {
        DBMS obj = new DBMS(); 
        obj.StartDBMS(); 

        /*obj.InsertIntoTable("Rahul",23,89);    
        obj.InsertIntoTable("Sagar",26,98);
        obj.InsertIntoTable("Pooja",20,56);
        obj.InsertIntoTable("Sayali",30,78);
        obj.InsertIntoTable("Tejas",29,68);

        obj.SelectFrom(); 
        obj.SelectFrom(3);
        obj.SelectFrom("Sagar");
        
        System.out.println("Maximum marks from the table is : "+obj.Aggregate_Max());
        System.out.println("Minimum marks from the table is : "+obj.Aggregate_Min());
        System.out.println("Summation of marks from the table is : "+obj.Aggregate_Sum());
        System.out.println("Average of marks from the table is : "+obj.Aggregate_Avg());
    
        obj.DeleteFrom(3);
        obj.SelectFrom();*/
    }
}

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

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
        
        String Query;
        String Tokens[];

        Scanner sobj = new Scanner(System.in);
        int TokensCount = 0;
        
        while(true)
        {
            System.out.print("Marvellous DBMS : ");
            Query = sobj.nextLine();

            Tokens = Query.split(" ");

            TokensCount = Tokens.length;

            if(TokensCount == 1)
            {
                if("exit".equals(Tokens[0]))
                {
                    System.out.println("Thank you for using Marvellous DBMS...");
                    break;
                }
            }
            else if(TokensCount == 2)
            {}
            else if(TokensCount == 3)
            {}
            else if(TokensCount == 4)
            {
                if("select".equals(Tokens[0]))
                {
                SelectFrom();
                }
            }      
            else if(TokensCount == 5)
            {
                if("select".equals(Tokens[0]))
                {  
                    if("MAX".equals(Tokens[1]))
                    {
                        System.out.println("Maximum marks are : "+Aggregate_Max());
                    }
                    else if("MIN".equals(Tokens[1]))
                    {
                        System.out.println("Minimum marks are : "+Aggregate_Min());
                    }
                    else if("AVG".equals(Tokens[1]))
                    {
                        System.out.println("Average marks are : "+Aggregate_Avg());
                    }
                    else if("SUM".equals(Tokens[1]))
                    {
                        System.out.println("Sum of marks are : "+Aggregate_Sum());
                    }
                }
            }
            else if(TokensCount == 6)
            {}      
            else if(TokensCount == 7)
            {
                if("insert".equals(Tokens[0]))
                {
                    InsertIntoTable(Tokens[4], Integer.parseInt(Tokens[5]), Integer.parseInt(Tokens[6]));
                }
                else if("delete".equals(Tokens[0]))
                {
                    DeleteFrom(Integer.parseInt(Tokens[6]));
                }
            }
        }
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
   // Delete from student RollNo = 3

    public void DeleteFrom(int Rno)
    {
        int i = 0; 

        for(Student sref : lobj) 
        {
            if( sref.RollNo == Rno)
            {
                lobj.remove(i);   // use readymade method remove for delete specific Node
                break;
            }
            i++;
        }

    }

   //--------------------------------------------------------------
   // select MAX(marks) from student

    public int Aggregate_Max()
    {
        Student Temp = lobj.get(0);   // use get readymade method for first index deta
        int iMax = Temp.Marks;        // for each, sref is a object
        
        for(Student sref : lobj)      // for each, sref is a object
        {
            if( sref.Marks > iMax)
            {
                iMax = sref.Marks;
            }
        }
        return iMax;
    }

   //--------------------------------------------------------------
   // select MIN(marks) from student

    public int Aggregate_Min()
    {
        Student Temp = lobj.get(0);
        int iMin = Temp.Marks;

        for(Student sref : lobj) // for each, sref is a object
        {
            if( sref.Marks < iMin)
            {
                iMin = sref.Marks;
            }
        }
        return iMin;
    }

   //--------------------------------------------------------------
   // select Sum(marks) from student

    public int Aggregate_Sum()
    {
        int iSum = 0;

        for(Student sref : lobj) // for each, sref is a object
        {
            iSum = iSum + sref.Marks;
        }
        return iSum;
    }

   //--------------------------------------------------------------
   // select Average(marks) from student

    public float Aggregate_Avg()
    {
        int iSum = 0;

        for(Student sref : lobj) // for each, sref is a object
        {
            iSum = iSum + sref.Marks;
        }
        return (iSum / lobj.size());  // size method is works like a length method
    }
   
}

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////