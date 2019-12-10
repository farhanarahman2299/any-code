#include<stdio.h>
int n;
void tower(int n,char a,char b,char c)
{
    if(n==1)
    {

        printf("\n%c------> %c",a,c);
    }
    else
    {
        tower(n-1,a,b,c);
        printf("\n%c------> %c",a,c);
        tower(n-1,b,a,c);
    }
}
int main()
{
    printf("\nEnter Number of desk: ");
    scanf("%d",&n);
    tower(n,'p','q','r');
    return 0;
}
