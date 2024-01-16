// Program 323
// Stack Data structure with manue driven

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
    iCount = 0;
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
  if(iCount == 0)  // (First == NULL)
  {
    cout<<"Nothing to display as stack is empty \n";
    return;
  }   

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
    int iChoise = 1;
    int iValue = 0;
    int iRet = 0;
    Stack obj;

    cout<<"----------------------------------------------------------------------\n";
    cout<<"Dynamic implimentaton of Stack \n";
    cout<<"----------------------------------------------------------------------\n";

    while(iChoise != 0)
    {
      cout<<"----------------------------------------------------------------------\n";
      cout<<"1 : Push elements into stack \n";
      cout<<"2 : Pop elements from the Stack \n";
      cout<<"3 : Display the elements from stack \n";
      cout<<"4 : Count Number of elements from stack \n";
      cout<<"0 : Terminate the application\n";
      cout<<"----------------------------------------------------------------------\n"; 

      cout<<"Please enter the option \n"; 
      cin>>iChoise;

      switch(iChoise)
      {
        case 1:
        cout<<" Enter the element that you want to Push in the stack \n";
        cin>>iValue;
        obj.Push(iValue);
        break;

        case 2:
        iRet = obj.Pop();
        if(iRet != -1)
        {
          cout<<"Poped element from stack is : "<<iRet<<"\n";
        }
        break;

        case 3:
        obj.Display();
        break;

        case 4:
        iRet = obj.Count();
        cout<<"Number of elements are :"<<iRet<<"\n";
        break;

        case 0:
        cout<<"Thank you for using the application \n";
        break;
        
        default:
        cout<<" Please enter the valid option \n";
        break;
      } // End of switch 

    }// End of while
    return 0;
}// End of main