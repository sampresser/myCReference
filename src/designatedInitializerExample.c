#include <stdio.h>
#include <malloc.h>
#include <complex.h>
#include <math.h>
#define __STDC_WANT_LIB_EXT1__ 1


struct point {int x,y};


int main()
{
    struct point pts[5] = { [2].y = 5, [2].x = 6, [0].x = 2};
    int i;
        for (i = 0; i< 5; i++) {
            printf("%d %d\n", pts[i].x, pts[i].y);
        }

}

