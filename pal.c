#include<stdio.h>
main ()
{
    int i,j,x=10,n,r,k,f1,f2,f3;
    printf ("enter n \n");
    scanf ("%d",&n);
    for (i=0;i<=n;i++)
    {
        for (j=1;j<=x-i;j++)
        {
            printf (" ");
        }
        for (r=0;r<=i;r++)
        {
            f1=1;
            for (k=1;k<=i;k++)
            f1=f1*k;
            f2=1;
            for (k=1;k<=r;k++)
            f2=f2*k;
            f3=1;
            for (k=1;k<=i-r;k++)
            f3=f3*k;
            printf ("%3d",f1/(f2*f3));
        }
        printf ("\n");
        x--;
    }
}