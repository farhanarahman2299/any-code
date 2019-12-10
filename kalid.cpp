#include<bits/stdc++.h>

int main()
{
    float ax[100], ay[100], diff[100][100], nr=1.0, dr=1.0,x,p,h,yp;
    int n,i,j,k;

    printf("\nEnter the value of n:\n");
    scanf("%d",&n);

    printf("\nEnter the values in form x,y:\n");
    for (i=0;i<n;i++)
        scanf("%f %f",&ax[i],&ay[i]);

    printf("\nEnter the value of x for which the value of y is wanted: \n");
    scanf("%f",&x);

    h=ax[1]-ax[0];

    //now making the difference table
    //calculating the 1st order of differences
    for (i=0;i<n-1;i++)
        diff[i][1] = ay[i+1]-ay[i];

    //now calculating the second and higher order differences
    for (j=2;j<=n-1;j++)
        for(i=0;i<=n-j;i++)
        diff[i][j] = diff[i+1][j-1] - diff[i][j-1];

    //now finding x0
    //i=0;
    //while (!(ax[i]>x))
        //i++;

    //now ax[i] is x0 and ay[i] is y0
    i--;
    p = (x-ax[0])/h;
    yp = ay[0];

    //now carrying out interpolation
    for (k=1;k<=n-1;k++)
    {
        nr *=p-k+1;
        dr *=k;
        yp +=(nr/dr)*diff[i][k];
    }
    printf("\nWhen x = %6.1f, corresponding y = %6.2f\n",x,yp);
}
