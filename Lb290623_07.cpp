
/*
   Program 308
   Dingly linear linklist using OOP (C++)

   Insert last, Display, destructor and Count function.
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
      ~SinglyLL();

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
SinglyLL :: ~SinglyLL()
{
   cout<<"Inside destructure"<<"\n";
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
void SinglyLL :: InsertLast(int No)
{
    PNODE newn = NULL;
    newn = new NODE;  
    newn -> data = No;
    newn -> next = NULL;

    if(First == NULL) 
    {
       First = newn;
    }
    else
    {
       PNODE Temp = First;

        while(Temp -> next != NULL)
        {
          Temp = Temp -> next;
        }

        Temp -> next = newn;
    }

    iCount++;
}
void SinglyLL :: InsertAtPos(int iPos, int iNo)
{}

void SinglyLL :: DeleteFirst()
{}
void SinglyLL :: DeleteLast()
{}
void SinglyLL :: DeleteAtPos(int iPos)
{}

void SinglyLL :: Display()
{
    PNODE Temp = First;
    while(Temp != NULL)
    {
       cout<<"| "<<Temp->data<<" |->";
       Temp = Temp -> next;
    }
    cout<<"| NULL |"<<"\n";
}
int SinglyLL :: Count()
{
    return iCount;
}

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;
    int iRet = 0;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj2.InsertFirst(10);
    obj2.InsertFirst(20);

    obj2.InsertLast(30);

    obj2.Display();
    iRet = obj2.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}