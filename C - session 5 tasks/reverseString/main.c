#include <stdio.h>
#include <stdlib.h>

void printArray(char arr[], int n);

int main()
{
    char name[15]="sherif mohamed";
    //gets(name);
    int sz=sizeof(name)/sizeof(name[0]);
    //printf("%d",sz);
    char revname[sz];
    int i=0;
    for(i=0;i<sz;i++)
    {
        revname[i]=name[i];
    }

    for(i=0;i<sz-1;i++)
    {
        name[i]=revname[sz-i-2];
    }
    name[sz-1]='\0';
    printArray(name,sz);

    return 0;
}

void printArray(char arr[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%c",arr[i]);
    }

}
