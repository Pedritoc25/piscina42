#include<unistd.h>
#include<stdio.h>

int main (int argc, char *argv[])
{
    
    int i;
    i = 0;
    argv = (int*) malloc(4 * argc); //sizeof(int) = 4
    while (i < argc)
    {
        argv[i] = i;
        i++;
    }
    
    i = 0;
    while (i < argc)
    {
        printf("%d  ", *(argv + i));
        i++;
    }
  
    free(argv);
    return (0);
}