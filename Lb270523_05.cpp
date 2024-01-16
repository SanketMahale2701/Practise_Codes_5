
// Accept two numbwrs from user and print large number
// program 207 

#include<iostream>
using namespace std ;
class Number 
{
    public :
    int iNo1;
    int iNo2;

       void Accept()
       {
           cout<<"Enter frist number :"<<"\n";
           cin>>iNo1;
    
           cout<<"Enter frist number :"<<"\n";
           cin>>iNo2;
           
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

    Number nobj ;
    
    nobj.Accept();
     
    iRet = nobj.Maximum();

    cout<<"Grater number is :"<<iRet<<"\n";
    
    return 0;
}
