#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int convertBinaryToDecimal(long long b); 
int main() 
{
 char input; 
 int num; 
 for (;;)
 {
  printf ("�п�ܼҦ�(�Q�i��d,�G�i��b,�Q���i��h:");
  scanf ("%c",&input);
  if (input==100)  
  {
   printf ("�п�J�Q�i���"); 
   scanf ("%d",&num);  
   char s[10]; 
   itoa(num, s, 2);
   printf ("�Q�i�%d�ഫ���G�i��%s\n",num,s);
   printf ("�Q�i�%d�ഫ���Q�i��%o\n",num,num); 
   printf ("�Q�i�%d�ഫ���Q���i��%x\n",num,num);
   break;
  }
  else if (input==98)  
  {
   long long b;
   printf ("�п�J�G�i���"); 
   scanf ("%lld",&b); 
   printf ("�G�i�%d�ഫ���Q�i��%d\n",b,convertBinaryToDecimal(b));
   printf ("�G�i�%d�ഫ���K�i��%o\n",b,convertBinaryToDecimal(b));
   printf ("�G�i�%d�ഫ���Q���i��%x\n",b,convertBinaryToDecimal(b));
   break;
  }
  else if (input==104) 
  {
   printf ("�п�J�Q���i���");
   scanf ("%x",&num);
   char s[10];  
   itoa(num, s, 2);
   printf ("�Q���i�%d�ഫ���G�i��%s\n",num,s);
   printf ("�Q���i�%d�ഫ���K�i��%o\n",num,num);
   printf ("�Q���i�%d�ഫ���Q�i��%d\n",num,num);
   break;
  }
  else
  printf ("��J���~�A�Э��s��J");
 }
 
 system ("pause");
 return 0; 
}
int convertBinaryToDecimal(long long b)
{
    int decimalNumber = 0, i = 0, remainder;
    while (b!=0)
    {
        remainder = b%10;
        b /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
