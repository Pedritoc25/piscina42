

#include <stdlib.h>
#include <unistd.h>

 int main()
 {
   int argc;
   char **argv;
   char *clues; 
   char value;

   
   
   
   conditions(argc, argv);
   
   return (0);
 }

int conditions(int argc, char const *argv[])
{
   char *clues;
   int i;

   clues = (char*) malloc(4 * argc);

   while (argv != "\0")
   {
      if (argv != " ")
      {
         clues[i] = argv[i]+ '0';
         i++;
      }
      argv++;
   }

   write(1, &clues, argc);
   free(clues);
   return (0);
}