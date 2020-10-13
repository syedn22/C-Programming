#include <stdio.h>
    void main()
    {
      int a=1,b=1,d=1;
      printf("%d,%d,%d",++a + ++a+a++, a++ + ++b, ++d + d++ + a++);
    }