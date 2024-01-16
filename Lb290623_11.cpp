
/*
   Program 312
   Dingly linear linklist using OOP (C++)

   Manu driven code
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
    if((iPos < 1)||(iPos > iCount ))
    {
        cout<<"Invalis position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE Temp = First;    
        PNODE TempX = NULL;

        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp -> next;
        }
        
        TempX = Temp -> next;
        Temp -> next = Temp -> next -> next;
        delete TempX;

        iCount--;
    }
}

int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;

    cout<<"My LinkedList Application \n";

    while(1)   // unconditional loop
    {
        cout<<"------------------------------------------------------------------"<<"\n";
        cout<<"Please enter your choice : \n\n";
        cout<<"1 : Insert node at first position"<<"\n";
        cout<<"2 : Insert node at last position"<<"\n";
        cout<<"3 : Insert node at given position position"<<"\n";
        cout<<"4 : Delete node at first position"<<"\n";
        cout<<"5 : Delete node at last position"<<"\n";
        cout<<"6 : Delete node at given position position"<<"\n";
        cout<<"7 : Display the elements of linklist"<<"\n";
        cout<<"8 : Count the number of nodes from linklist"<<"\n";
        cout<<"9 : Terminate the application "<<"\n";
        cout<<"------------------------------------------------------------------"<<"\n";
        cin>>iChoice;
       
        switch(iChoice)
        {
            case 1:
            cout<<"Enter the value that you want to insert at first position"<<"\n";
            cin>>iValue;
            obj.InsertFirst(iValue);
            break; 

            case 2:
            cout<<"Enter the value that you want to insert at last position"<<"\n";
            cin>>iValue;
            obj.InsertLast(iValue);
            break; 

            case 3:
            cout<<"Enter the value that you want to insert"<<"\n";
            cin>>iValue;

            cout<<"Enter the position"<<"\n";
            cin>>iPos;
            obj.InsertAtPos(iPos,iValue);
            break; 
            
            case 4:
            obj.DeleteFirst();
            break; 

            case 5:
            obj.DeleteLast();
            break; 

            case 6:
            cout<<"Enter the position"<<"\n";
            cin>>iPos;
            obj.DeleteAtPos(iPos);
            break; 

            case 7:
            obj.Display();
            break; 

            case 8:
            cout<<"Number of nodes are :"<<obj.Count()<<"\n";
            break; 

            case 9:
            cout<<"Thank you for using the application "<<"\n";
            return 0;

            default:
            cout<<"Invalid choice"<<"\n";
            break;
        }

    }

    return 0;
}