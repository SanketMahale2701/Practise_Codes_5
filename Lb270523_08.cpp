// Accept two number of row and number of column from user and print the following pattern
// program 210
/*
    iRow = 4
    iCol = 4

    *   *   *   *   
    *   *   *   *   
    *   *   *   *   
    *   *   *   *   

*/
#include<iostream>
using namespace std ;
void Display(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
             printf("*\t");
        }
        printf("\n");
   }   
}
int main ()
{
    int iNo1 = 0;
    int iNo2 = 0;

    cout<<"Enter number of rows"<<"\n";
    cin>>iNo1;

    cout<<"Enter number of colums"<<"\n";
    cin>>iNo2;

    Display(iNo1,iNo2);

    return 0;
}
