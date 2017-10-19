#include <stdio.h>

void print(int n)
{
     int i;
     for(i=0;i<n;i++);
       {
        printf("*");
        printf("\n");
       }
}

void print(int n);
int main()
{
    print(3);
    return 0;
}
