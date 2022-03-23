#include <stdio.h>
#include <malloc.h>
#include <complex.h>
#define __STDC_WANT_LIB_EXT1__ 1


struct myArray {
        int length;
        int array[];
};

int main()
{
#ifdef __STDC_NO_COMPLEX
#else
    printf("Complex Supported\n");
#endif

    double complex cx = 1.0 + 3.0*I;
    double _Complex cy = 1.0 - 4.0*I;

    printf("Complex numbers appear as: cx = %.2f + %.2f I     cy=%.2f + %.2f I ", creal(cx), cimag(cx), creal(cy), cimag(cy));

    double complex cz = cx + cy;
    printf("\nSum of cx and cy is : %.2f + %.2fI", creal(cz), cimag(cz));
    return 1;

}