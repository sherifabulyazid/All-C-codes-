#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num_type=isPalindrome(151);


    if (num_type==1)
    {
        printf("number is palindrome\n");
    }
    else if (num_type==0)
    {
        printf("number is not palindrome\n");
    }
    else{
        printf("error");
    }

    return 0;
}
int isPalindrome(int num)
{
    if(num<0||(num!=0&&(num%10)==0))
    {
        return 0;
    }
    else
    {
        int reminder=0;
        int r=0;
        while(num>reminder)
        {
            r=num%10;
            reminder=reminder*10+r;
            num=num/10;

        }
        return (reminder==num||reminder==num*10+r);
    }
}

