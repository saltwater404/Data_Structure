#include<stdio.h>
int main()
{
    char a;
    FILE *fp;
    a=getc(fp);
    putc(a,stdout);
    a=getc(fp);
    putc(a,stdout);
    return 0;
}

