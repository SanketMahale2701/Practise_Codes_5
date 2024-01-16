
/*
   Program 305
   Dingly linear linklist using OOP (C++)

   implimentation of function
*/

#include<iostream>
using namespace std ;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
   private: 
      PNODE First;    // Characteristics
      int iCount;     // Characteristics
    
   public:
      SinglyLL(); 

      void InsertFirst(int No);
      void InsertLast(int iNo);
      void InsertAtPos(int iPos, int iNo);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);

      void Display();
      int Count();
};

// Implmentations of all behaviours

/*
    Return_Value Class_Name :: Function_Name(Parameter_List)
    {
        Function_Body;
    }
*/

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int No)
{}
void SinglyLL :: InsertLast(int iNo)
{}
void SinglyLL :: InsertAtPos(int iPos, int iNo)
{}

void SinglyLL :: DeleteFirst()
{}
void SinglyLL :: DeleteLast()
{}
void SinglyLL :: DeleteAtPos(int iPos)
{}

void SinglyLL :: Display()
{}
int SinglyLL :: Count()
{
    return 0;
}

int main()
{
    SinglyLL obj1();
    SinglyLL obj2();

    return 0;
}