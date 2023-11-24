int isPowerOfTwo(int n);

int main()
{
    int num=0;
    int x=2;
    printf("Enter number: ");
    scanf(" %d",&num);
    num=isPowerOfTwo(num);
    if (1==num){
        printf("True\n");
    }
    else{
        printf("False\n");

    }


    return 0;
}
int isPowerOfTwo(int n)
{
    if (n<=0){
        return 0;
    }
    else {
        return (n&(n-1))==0;
    }
}
