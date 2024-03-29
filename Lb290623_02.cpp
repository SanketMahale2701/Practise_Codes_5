
/*
   Program 303
   Dingly linear linklist using OOP (C++)

   templete
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
   public:
    PNODE First;    // Characteristics
    int iCount;     // Characteristics
   
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

int main()
{
    SinglyLL obj1();

    return 0;
}