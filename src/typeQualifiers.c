#include <stdio.h>
#include <malloc.h>
#include <complex.h>
#include <math.h>
#define __STDC_WANT_LIB_EXT1__ 1

int main()
{
    //const
    const double pi = 3.141592654; //cant be modified
    const float *pf; //pf points to a constant float value
    float * const pt; // pt is a constant pointer
    const float * const ptr; //constant pointer to constant value
    //volatile
    int x;
    int val1 = x;
    //Some random code that doesn't use val1//
    int val2 = x; //used x twice without changing its value,
    //code would temporarily store x in register.
    //volatile, telling compiler to suppress various kinds of optimization
    //prevents the compiler from "caching" variables.
    volatile char *outPort;
    //Restrict
    //type qualifier for pointers
    //  Tells the compiler that a particular pointer is the only reference to the value it points to throughout its scope
    //      The same value is not refernced by any other pointer or variable within that scope.
    //      The pointer is the sole initial means of accessing a data object
    //  Tells compiler it does not need to add additional checks.
    int * restrict restar = (int *) malloc(10*sizeof(int));
return(0);
}

