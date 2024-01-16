//Program 320
// Doubly Linear Linklist using C++
// Insert at position and Delete at position

#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        Node *next;
        Node *prev;

    Node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }    

    Node(int Value)
    {
        data = Value;
        next = NULL;
        prev = NULL;
    }    

}NODE,*PNODE;

class Linklist
{
   public:
   
   PNODE First;
   int iCount;
 
   Linklist()
   {
      First = NULL;
      iCount = 0;
   }
   virtual void InsertFirst(int iNo) = 0;
   virtual void InsertLast(int iNo) = 0;
   virtual void InsertAtPos(int iPos,int iNo) = 0;
  
   virtual void DeleteFirst() = 0;
   virtual void DeleteLast() = 0;
   virtual void DeleteAtPos(int iPos) = 0;
   
   void Display()
   {
      PNODE Temp = First;
      cout<<"\n Elements of Linklist are :"<<"\n";

      for(int iCnt = 1;iCnt <= iCount;iCnt++)
      {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp -> next;
      }
      cout<<"NULL"<<"\n";
   }
   virtual int Count()
   {
     return iCount;
   }
};

class DoublyCL : public Linklist
{
   private:
    PNODE Last;
   
   public:
   
   DoublyCL();
   ~DoublyCL();
   
   void InsertFirst(int iNo);
   void InsertLast(int iNo);
   void InsertAtPos(int iPos,int iNo);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int iPos);
   
};

   DoublyCL :: DoublyCL()
   {
     Last = NULL;
   }
   DoublyCL :: ~DoublyCL()
   {}

   void DoublyCL :: InsertFirst(int iNo)  //---------
   {
     PNODE newn = new NODE(iNo);

    if((First == NULL)||(Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
       newn -> next = First;
       First -> prev = newn;
       First = newn;

    }
    Last->next = First;
    First->prev = Last;

    iCount++;

   }
   void DoublyCL :: InsertLast(int iNo)
   {
    PNODE newn = new NODE(iNo);

    if((First == NULL)||(Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = Last->next;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
   }
   void DoublyCL :: InsertAtPos(int iPos,int iNo)
   {
    if((iPos < 1)||(iPos > iCount + 1))
    {
        cout<<"Invalid position"<<"\n";
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
      PNODE newn = new NODE(iNo);
      PNODE Temp = First;

      for(int iCnt = 1;iCnt < iPos -1;iCnt++)
      {
        Temp = Temp -> next;
      }
      newn -> next = Temp -> next;
      Temp -> next -> prev = newn;

      Temp -> next = newn;
      newn -> prev = Temp;
      
      iCount++;
    
    }
   }
   void DoublyCL :: DeleteFirst()
   {
        if(iCount == 0)
        {
            return;
        }
        else if ( iCount == 1 )
        {
            delete First;
            First = NULL;
            Last = NULL;
        }
        else
        {
            First = First -> next;
            delete Last -> next;   // delete First -> prev
            Last -> next  = First;
            First -> prev = Last;
        }
        iCount--;
   }
   void DoublyCL :: DeleteLast()
   {
       if(iCount == 0)
        {
            return;
        }
        else if ( iCount == 1 )
        {
            delete First;
            First = NULL;
            Last = NULL;
        }
        else
        { 
            Last = Last -> prev;
            delete First -> prev;  //delete Last -> next
            Last -> next  = First;
            First -> prev = Last;
        }
        
        iCount--;
   }
   void DoublyCL :: DeleteAtPos(int iPos)
   {
     if((iPos < 1)||(iPos > iCount))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }
    if(iPos == 1)
    {
        DeleteLast();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
      PNODE Temp = First;

      for(int iCnt = 1;iCnt < iPos -1;iCnt++)
      {
        Temp = Temp -> next;
      }

      Temp -> next = Temp -> next -> next;
      delete Temp -> next -> prev;
      Temp -> next -> prev = Temp;
      
      iCount --;
    }
   }

int main()
{
  DoublyCL obj;
  int iRet = 0;

  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);

  obj.InsertLast(101);
  obj.InsertLast(111);

  obj.InsertAtPos(4,55);

  obj.Display();
  iRet = obj.Count();
  cout<<"Number of Nodes are :"<<iRet;

  obj.DeleteAtPos(4);

  obj.Display();
  iRet = obj.Count();
  cout<<"Number of Nodes are :"<<iRet;

  obj.DeleteFirst();
  obj.DeleteLast();

  obj.Display();
  iRet = obj.Count();
  cout<<"Number of Nodes are :"<<iRet;

}