// Program 322
// Stack Data structure

#include<iostream>
using namespace std;

typedef class Node
{
    public:

    int data;
    Node *next;

    Node(int iValue)
    {
       data = iValue;
       next = NULL;
    }

}NODE,*PNODE;

class Stack
{
   private:

    int iCount;
    PNODE First;
   
   public:

    Stack();
    ~Stack();

    void Push(int iNo);  // Insert Last
    int Pop();           // Delete Last
    void Display();
    int Count();
};

Stack :: Stack()
{
    First = NULL;
    iCount = NULL;
}
Stack :: ~Stack(){}

void Stack :: Push(int iNo) // Insert Last
{
    PNODE newn = new NODE(iNo);

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

       Temp -> next = newn ;
    }
    iCount++;
}
int Stack :: Pop()  // Delete Last
{
    int Value = 0;

    if(iCount == 0)
    {
        cout<<"Stack is empty \n";
        return -1;
    }
    else if(iCount == 1)
    {
       Value = First->data;
       delete First;
       First = NULL;
    }
    else           // detele First
    {
       PNODE Temp = First;

       while(Temp -> next -> next != NULL)
       {
        Temp = Temp -> next;
       }

       Value = Temp -> next -> data;
       delete Temp -> next;
       Temp -> next = NULL;
    }

    iCount--;
    return Value;
}
void Stack :: Display()
{
  PNODE Temp = First;  
  cout<<"Elements of stack are : \n";
  for(int iCnt = 1;iCnt <= iCount ; iCnt++ )
  {
     cout<<Temp -> data<<"\t";
     Temp = Temp -> next;
  }
  cout<<"\n";
}
int Stack :: Count()
{
    return iCount;
}

int main()
{
    return 0;
}