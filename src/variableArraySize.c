#include <stdio.h>

int main()
{

   size_t size = 0;
   printf("Enter the size of the array: ");
   scanf("%zd", &size);
   int array[size];
   int sum=0;
   for (int i=0; i<size; i++) {
       printf("\nEnter Array Element: ");
       scanf("%zd", &array[i]);
       sum = sum + array[i];
   }
   printf("\nThe sum of your array is %d", sum);



    return 1;
}
