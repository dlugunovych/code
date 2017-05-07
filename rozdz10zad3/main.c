#include <stdio.h>
#include <stdlib.h>
int BiggestValue (int tArray[], int dSizeOfArray);

int main()
{
    int tSourceArray[5] = {1,20,3,9,32};
    printf("%d", BiggestValue(tSourceArray, 5));
    return 0;
}

int BiggestValue (int tArray[], int dSizeOfArray)
{
   int dBiggestDigit = 0;
   int temp;
   for (int i = 0; i < dSizeOfArray; i++)
   {
      if (tArray[i]>dBiggestDigit)
      {
         dBiggestDigit = tArray[i];
         temp = i;
      }
   }
   return temp+1;
}
