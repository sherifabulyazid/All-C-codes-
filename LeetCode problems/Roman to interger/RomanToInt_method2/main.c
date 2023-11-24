#include <stdio.h>
#include <stdlib.h>

int romanToInt(char * s);
int retVal(char m);


int main()
{
    char *roman="shrif";
    int num=0;

    printf("Enter roman number:");
    scanf(" %s",&roman);
    num=romanToInt(&roman);
    printf("%d\n",num);
    return 0;
}
int retVal(char m){
    switch(m){
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        return -1;
    }
}

int romanToInt(char * s)
{
    int num=0;
    while(*s != '\0')
    {
        if(retVal(*s) < retVal(*(s+1))){
            num -= retVal(*s);
        }
        else{
            num += retVal(*s);
        }
        s++;
    }
    return num;
}


