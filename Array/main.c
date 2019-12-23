#include <stdio.h>

int main()
{
    int a[100],i=0,n,b[100],c,flag;
    printf("Insert The Array Element Size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[i] = a[i];
    }
    printf("\nThe Elements Of A Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nB Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    while(scanf("%d",&c)!=EOF)
    {
        flag=0;
        for(i=0;i<n;i++){
            if(a[i]==c)
            {
                flag = 1;
            }
        }
        if(flag==1){
            printf("Found");
        }
        else{
            printf("Item Not Found");
        }
    }
}

