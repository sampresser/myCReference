#include <stdio.h>
#include <math.h>





int toDecimal(long long binary) {
    int decimal=0, i=0, remainder;

    while (binary!=0) {
        remainder = binary % 10;
        binary /=10;
        decimal += remainder * pow(2,i);
        i++;
    }
    return decimal;
}
long long toBinary(int decimal) {
        long long binary = 0;
        int i=1, remainder;
        while (decimal != 0) {
            remainder = decimal % 2;
            decimal /= 2;
            binary += remainder * i;
            i = i * 10;
        }
        return binary;
}
int main()
{
    long long bin;
    printf("Enter a binary number to be converted:  ");
    scanf("%lld", &bin);
    printf("\nYour converted decimal value is %d", toDecimal(bin));
    int dec;
    printf("\nEnter a decimal number to be converted:  ");
    scanf("%d", &dec);
    printf("\nYour converted decimal value is %lld", toBinary(dec));
return(0);
}

