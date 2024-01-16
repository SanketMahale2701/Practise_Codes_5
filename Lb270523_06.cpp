
// Accept two numbwrs from user and print large number
// program 208 
// problems on number

#include<iostream>
using namespace std ;
class Number 
{
    public :
    int iNo1;
    int iNo2;

       Number(int x,int y)
       {
           iNo1 = x;
           iNo2 = y;
       }

       int Maximum()
       {
          if(iNo1 > iNo2)
          {
              return iNo1 ;
          }
          else
          {
              return iNo2 ;
          }
       }
};    
int main ()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
     
    cout<<"Enter frist number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter frist number :"<<"\n";
    cin>>iValue2;

    Number nobj(iValue1,iValue2) ;
    iRet = nobj.Maximum();

    cout<<"Grater number is :"<<iRet<<"\n";
    
    return 0;
}
