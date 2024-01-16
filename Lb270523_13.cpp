//Accept n numbers from users and perform the addition of that numbers
// program 215
// Array 

#include<iostream>
using namespace std ;
class Array
{
  public:   
   int iSize ;
   int *Arr ;

   Array(int iNo)
   {
    cout<<"Inside Constructor ----(2)"<<"\n";
       iSize = iNo ;
       Arr = new int[iSize];
   }
   ~Array()
   {
     cout<<"Inside Destructor ---- (7)"<<"\n";
     delete []Arr;
   }
   void Accept()
   {
      cout<<"Inside Accept method----(3)"<<"\n";
      cout<<"Enter the elements "<<"\n";

      int iCnt = 0;

      for(iCnt = 0;iCnt < iSize;iCnt++)
      {
         cin>>Arr[iCnt];
      }
   }
   void Display()
   {
     cout<<"Inside Display method ----(4)"<<"\n";
      cout<<"Elements of array are "<<"\n";

      int iCnt = 0;

      for(iCnt = 0;iCnt < iSize;iCnt++)
      {
         cout<<Arr[iCnt]<<"\n";
      }
   }
   int Summation()
   {
     cout<<"Inside Summation method -----(5)"<<"\n";
       int iSum = 0;
       int iCnt = 0;

       for(iCnt = 0;iCnt < iSize;iCnt++)
       {
         iSum = iSum + Arr[iCnt];
       }
        return iSum;
   }
};
int main ()
{
     cout<<"Inside Main ----(1)"<<"\n";
     int iNo = 0;
     int iRet = 0;

    cout<<"Enter number of elements : "<<"\n";
    cin>>iNo;

    Array aobj(iNo);

    aobj.Accept();
    aobj.Display();
    iRet = aobj.Summation();

    cout<<"Summation is : "<<iRet<<"\n"; 

    cout<<"End of Main -----(6)"<<"\n";

    return 0;
}