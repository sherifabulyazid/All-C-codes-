#include <stdio.h>
#include <stdlib.h>

int romanToInt(char * s);

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

int romanToInt(char * s)
{
    int num=0;
    while(*s != '\0')
    {
         switch (*s)
        {
        case 'I':
            num+=1;
            break;
        case 'V':
            if(*(s-1)=='I'){num+=3;}
            else{num+=5;}

            break;
        case 'X':
            if(*(s-1)=='I'){num+=8;}
            else{num+=10;}
            break;
        case 'L':
            if(*(s-1)=='X'){num+=30;}
            else{num+=50;}
            break;
        case 'C':
            if(*(s-1)=='X'){num+=80;}
            else{num+=100;}
            break;
        case 'D':
            if(*(s-1)=='C'){num+=300;}
            else{num+=500;}
            break;
        case 'M':
            if(*(s-1)=='C'){num+=800;}
            else{num+=1000;}
            break;
        default:
            break;
        }
        s++;



    }
    return num;
}


