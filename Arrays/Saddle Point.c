#include<stdio.h>
int main()
{
    int i , j ,s , p ,h=0,k, arr[10][10],n;
    printf("Enter the size of the matrix:- ");
    scanf("\n%d",&n);
    printf("\nEnter values:-");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
            {
                
                scanf("\n%d",&arr[i][j]);
            }
    }

    printf("Given Matrix\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
            {
                printf("%d\t",arr[i][j]);

            }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        s=arr[i][0];
        p=0;
        for(j=1;j<n;j++)
        {
            if(arr[i][j]<s)
            {
                s =arr[i][j];
                p=j;
            }

        }
        for(k=0;k<n;k++)
        {
            if(s>=arr[k][p])
                h=s;
            else
                break;
        }
    }
    if(h==s)
        printf("Saddle point element is %d",h);

}
