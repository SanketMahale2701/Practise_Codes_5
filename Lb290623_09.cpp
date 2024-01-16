
/*
   Program 310
   Dingly linear linklist using OOP (C++)

   delete first and last function
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

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)
    {
      return;
    }
    else if(First -> next == NULL)
    { 
      delete First;
      First = NULL;
    }
    else
    {
       PNODE Temp = First; 
       First = First -> next;
       delete Temp;
    }
    iCount--;
}
void SinglyLL :: DeleteLast()
{
    if(First == NULL)
    {
      return;
    }
    else if(First -> next == NULL)
    { 
      delete First;
      First = NULL;
    }
    else
    {
       PNODE Temp = First;
                                        //       +-------+
       while(Temp->next->next != NULL)  //  Temp |  100  | 200  300  400
       {                                //       +-------+
         Temp = Temp -> next;
       }

       delete Temp -> next;
       Temp -> next = NULL;
    }

    iCount--;
}

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

void SinglyLL :: InsertAtPos(int iPos, int iNo)
{
    if((iPos < 1)||(iPos > iCount + 1))
    {
        cout<<"Invalis position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE Temp = First;
        PNODE newn = NULL;

        newn = new NODE;
        newn -> data = iNo;
        newn -> next = NULL;

        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp -> next;
        }

        newn -> next = Temp -> next;
        Temp -> next = newn;

        iCount++;
    }
}
void SinglyLL :: DeleteAtPos(int iPos)
{
    
}

int main()
{
    SinglyLL obj1;
    int iRet = 0;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.InsertAtPos(4,55);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";


    return 0;
}