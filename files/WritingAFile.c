#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("test.txt", "a+");
    // fprintf(fp, "This is testing for ...\n");
    // fputs("This is testing for ...\n", fp);
    fwrite("c",sizeof("c"),1,fp);
    fclose(fp);
    return 0;
}
