// operations on digits
// program 219

#include<iostream>
using namespace std ;
class Digit
{
  private:   
   int iNo;

  public:
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