#include "BigInteger.h"

int main()
{
    char s[101];
    struct BigInteger a,b,c;
    while(1)
    {
        printf("Enter data\n");
        fgets(s,100,stdin);
        a=initialize(s);
        printf("Enter data\n");
        fgets(s,100,stdin);
        b=initialize(s);
        c=mod(a,b);// Change function here
        printf("\na\t");
        display(a);

        printf("\nb\t");
        display(b);

        printf("\nOutput is :\n");
        display(c);
        dump(a);
        dump(b);
        dump(c);
    }
    
}

/*
 gcc -c -g BigInteger.c  ;  gcc -c -g BigInteger_main.c  ; gcc -o dev_out BigInteger_main.o BigInteger.o
 ./dev_out.exe
*/