
/*
   Program 304
   Dingly linear linklist using OOP (C++)

   templete
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

int main()
{
    SinglyLL obj1();

    return 0;
}