
/*
   Program 307
   Dingly linear linklist using OOP (C++)

   Insert first function
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

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int No)
{
    PNODE newn = NULL;
    newn = new NODE;  // newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(First == NULL) // LL contains is empty  if(iCount == 0)
    {
       First = newn;
    }
    else              // LL contains at least one node 
    {
      newn -> next = First;
      First = newn;
    }

    iCount++;
}
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
    SinglyLL obj1;
    SinglyLL obj2;

    return 0;
}