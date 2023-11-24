#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_type=isPalindrome(-126);


    if (num_type==1)
    {
        printf("number is palindrome\n");
    }
    else
    {
        printf("number is not palindrome\n");
    }

    return 0;
}

int isPalindrome(int x){
    if(x<0 || x!=0 && x%10 ==0 ) return 0;
    int check=0;
    while(x>check){
        check = check*10 + x%10;
        x/=10;
    }
    return (x==check || x==check/10);
}
