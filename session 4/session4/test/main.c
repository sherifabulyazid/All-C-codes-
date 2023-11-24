#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num= 0x11223344;
    char *ptr= &num;

    if (*ptr==0x44)
    {
        printf("little indian\n");
    }
    else if (*ptr==0x11)
    {
        printf("big indian\n");
    }
    else
    {
         printf("error\n");
    }

    return 0;
}
