#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    printf("Enter number of rows");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=(n+1)-i&&j<=(n-1)+i&&k)
            {
                printf(" * ");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }

        }
        printf("\n");
    }
    return 0;

}
