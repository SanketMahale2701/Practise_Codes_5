// operations on digits
// program 216

#include<iostream>
using namespace std ;
class Digit
{
  public:   
   int iNo;
    
    Digit(int x)
    {
        iNo = x ;
    }
};
int main ()
{
    int iValue = 0;

    cout<<"Enter the number :"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    return 0;
}