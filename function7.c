#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *i;
    i = (int *)malloc(sizeof(int) * 4);
    printf("%d\t", sizeof(i));
    i = (int *)realloc(i, sizeof(int) * 8);
    printf("%d\t", sizeof(i));
    i = (int *)calloc(2, sizeof(int));
    printf("%d\t", sizeof(i));
}