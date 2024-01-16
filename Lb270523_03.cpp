
// Accept two numbwrs from user and print large number
// program 205 

#include<iostream>
using namespace std ;
class Number 
{
    public :
    int Maximum(int iNo1,int iNo2)
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

    cout<<"Enter frist number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter frist number :"<<"\n";
    cin>>iValue2;
    
    

    iRet = nobj.Maximum(iValue1,iValue2);

    cout<<"Grater number is :"<<iRet<<"\n";
    
    return 0;
}
