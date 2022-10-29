//Data types and their sizes

#include<stdio.h>

int main()
{
    int i;
    float f;
    double d;
    char c;
    long int li;
    signed int si;

    printf("Size of int: %d bytes\n",sizeof(i));
    printf("Size of float: %d bytes\n",sizeof(f));
    printf("Size of double: %d bytes\n",sizeof(d));
    printf("Size of char: %d bytes\n",sizeof(c));
    printf("Size of long int: %d bytes\n",sizeof(li));
    printf("Size of signed int: %d bytes\n",sizeof(si));

    return 0;
}
