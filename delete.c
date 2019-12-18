#include<stdio.h>
#include<string.h>
void main()
{
    int a[100],i,n,loc,c;
    printf("inter No. of elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=1;i<=n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);

    }
    if(n==100)
    {
        printf("overflow");
        return 0;

    }
    else{
            printf("Enter location:\n");
            scanf("%d",&loc);

            for(i=1;n<=loc;i--)
            {
                a[i]=a[i+1];
            }


            n=n-1;
            printf("\nList after Delete:\n");
            for(i=1;i<n;i++)
            {
                printf("\na[%d]: %d",i,a[i]);
            }

    }
}
