#include <stdio.h>
#include <malloc.h>

struct myArray {
        int length;
        int array[];
};

int main()
{
    int desiredSize;
    printf("Enter the length of your array: ");
    scanf("%d", &desiredSize);
    struct myArray *ptr;

    ptr = malloc( sizeof(struct myArray) + desiredSize * sizeof(int));
    ptr->length=desiredSize;
    for (int i = 0; i < desiredSize; i++) {
        ptr->array[i] = i;
        printf("\n Array element %d : %d", &i, ptr->array[i]);
    }
    


    return 1;

}
