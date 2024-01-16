// operations on digits
// program 217
// Accept number from user and return the addition of digits

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
    int SumDigits()
    {
        int iDigit = 0;
        int iSum = 0 ;

        while (iNo != 0)
        {
            iDigit = iNo % 10 ;
            iSum = iSum + iDigit ;
            iNo = iNo / 10 ;
        }

        return iSum;
    }
};
int main ()
{
    int iValue = 0;
    int iRet = 0 ;

    cout<<"Enter the number :"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.SumDigits();

    cout<<"Summation is :"<<iRet<<"\n";

    return 0;
}