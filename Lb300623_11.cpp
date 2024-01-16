// Program 324
// Queue Data structure with manue driven

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

class Queue
{
   private:

    int iCount;
    PNODE First;
   
   public:

    Queue();
    ~Queue();

    void EnQueue(int iNo);  // Insert Last
    int DeQueue();           // Delete First
    void Display();
    int Count();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}
Queue :: ~Queue(){}

void Queue :: EnQueue(int iNo) // Insert Last
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
int Queue :: DeQueue()  // Delete First
{
    int Value = 0;

    if(iCount == 0)
    {
        cout<<"Queue is empty \n";
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

       Value = First -> data;
       First = First -> next;
       delete Temp;
    }

    iCount--;
    return Value;
}
void Queue :: Display()
{
  if(iCount == 0)  // (First == NULL)
  {
    cout<<"Nothing to display as Queue is empty \n";
    return;
  }   

  PNODE Temp = First;  
  cout<<"Elements of Queue are : \n";
  for(int iCnt = 1;iCnt <= iCount ; iCnt++ )
  {
     cout<<Temp -> data<<"\t";
     Temp = Temp -> next;
  }
  cout<<"\n";
}
int Queue :: Count()
{
    return iCount;
}

int main()
{
    int iChoise = 1;
    int iValue = 0;
    int iRet = 0;
    Queue obj;

    cout<<"----------------------------------------------------------------------\n";
    cout<<"Dynamic implimentaton of Queue \n";
    cout<<"----------------------------------------------------------------------\n";

    while(iChoise != 0)
    {
      cout<<"----------------------------------------------------------------------\n";
      cout<<"1 : Insert element into Queue \n";
      cout<<"2 : Remove element from the Queue  \n";
      cout<<"3 : Display elements from Queue \n";
      cout<<"4 : Count Number of elements from Queue \n";
      cout<<"0 : Terminate the application\n";
      cout<<"----------------------------------------------------------------------\n"; 

      cout<<"Please enter the option \n"; 
      cin>>iChoise;

      switch(iChoise)
      {
        case 1:
        cout<<" Enter the element that you want to Push in the stack \n";
        cin>>iValue;
        obj.EnQueue(iValue);
        break;

        case 2:
        iRet = obj.DeQueue();
        if(iRet != -1)
        {
          cout<<"Remove element from Queue is : "<<iRet<<"\n";
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