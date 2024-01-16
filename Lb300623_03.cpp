//Program 316
// Doubly Linear Linklist using C++
// Template using Class new approch
// pure OOP 


#include<iostream>
using namespace std;
class Linklist
{
   public:

   virtual void InsertFirst(int iNo) = 0;
   virtual void InsertLast(int iNo) = 0;
   virtual void InsertAtPos(int iPos, int iNo) = 0;

   virtual void DeleteFirst() = 0;
   virtual void DeleteLast() = 0;
   virtual void DeleteAtPos(int iPos) = 0;

   virtual void Display() = 0;
   virtual int Count() = 0;
};
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

class DoublyCL : public Linklist
{
   private:

   PNODE First;
   PNODE Last;
   int iCount;

   public:
   
   DoublyCL();
   ~DoublyCL();
   
   void InsertFirst(int iNo);
   void InsertLast(int iNo);
   void InsertAtPos(int iPos,int iNo);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int iPos);
   
   void Display();
   int Count();
};

   DoublyCL :: DoublyCL()
   {}
   DoublyCL :: ~DoublyCL()
   {}

   void DoublyCL :: InsertFirst(int iNo)
   {}
   void DoublyCL :: InsertLast(int iNo)
   {}
   void DoublyCL :: InsertAtPos(int iPos, int iNo)
   {}

   void DoublyCL :: DeleteFirst()
   {}
   void DoublyCL :: DeleteLast()
   {}
   void DoublyCL :: DeleteAtPos(int iPos)
   {}

   void DoublyCL :: Display()
   {}
   int DoublyCL :: Count()
   {
    return iCount;
   }

int main()
{
  DoublyCL obj;
}