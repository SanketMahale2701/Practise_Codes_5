package Factorial;

public class Sanket
{    
   public int Factorial(int iValue)
   {
     int iMult = 1;
     for(int iCnt = 1;iCnt <= iValue;iCnt++)
     {
       iMult = iMult * iCnt;
     }
      return iMult;
   }
}

