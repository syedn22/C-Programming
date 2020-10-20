#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num[2];
   FILE *fptr;

   if ((fptr = fopen("program.bin", "rb")) == NULL)
   {
      printf("Error! opening file");
      exit(1);
   }

   fseek(fptr, 0L, SEEK_SET);

   while(fread(&num, sizeof(struct threeNum), 2, fptr))
   {      
      printf("n1: %d\tn2: %d\tn3: %d\n", num[0].n1, num[0].n2, num[0].n3);
      printf("n1: %d\tn2: %d\tn3: %d\n", num[1].n1, num[1].n2, num[1].n3);
      printf("2\n");
   }

   fclose(fptr);
   return 0;
}