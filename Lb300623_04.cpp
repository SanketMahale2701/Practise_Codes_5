//Program 317
// Doubly Linear Linklist using C++
// Template using Class new approch
// pure OOP 
// full template

#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        struct Node *next;
        struct Node *prev;

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
      cout<<"Elements of Linklist are :"<<"\n";

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

   void DoublyCL :: InsertFirst(int iNo)
   {}
   void DoublyCL :: InsertLast(int iNo)
   {}
   void DoublyCL :: InsertAtPos(int iPos,int iNo)
   {}

   void DoublyCL :: DeleteFirst()
   {}
   void DoublyCL :: DeleteLast()
   {}
   void DoublyCL :: DeleteAtPos(int iPos)
   {}

int main()
{
  DoublyCL obj;
  int iRet = 0;

  obj.Display();
  iRet = obj.Count();
  cout<<"Number of Nodes are :"<<iRet;
}