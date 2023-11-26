#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *test;
    int i;
    i = 0;
    test = (int*) malloc(4 * 9); //sizeof(int) = 4
    while (i < 9)
    {
        test[i] = i;
        i++;
    }
    
    i = 0;
    while (i < 9)
    {
        printf("%d  ", *(test + i));
        i++;
    }
  
    free(test);
    return 0;
}