#include <stdio.h>

void print_array(int a[],int start,int end);
void print_array_rev(int a[],int start,int end);

int main()
{
    
    int a[100] = {1,2,3,4,5,6,7,8,9,10};
    int b[100];
    int i,x,y,z,max,min;
    int len=10,
        flag=0,
        index=-1;

    for(i=0; i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    a[10] = 100;
    len++;
    for(i=0; i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    a[5] = 50;
    for(i=0; i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");


    scanf("%d",&x);
    for(i=0; i<len;i++){
       if(a[i]==x){
        flag=1;
        index = i;
        break;
       }
    }

    if(flag==1)
        printf("%d \n",index);
    else
        printf("Not Found \n");

    scanf("%d",&y);
    for(i=len-1; i>=3;i--){
       a[i+1] = a[i];
    }
    a[3] = y;
    len++;
    for(i=0; i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    scanf("%d",&z);
    for(i=z; i<len;i++){
        a[i] = a[i+1];
    }
    len--;
    for(i=0; i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=0; i<len;i++){
        b[i] = a[i];
    }

    max = a[0];
    for(i=1;i<len;i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    printf("%d \n",max);

    min = a[0];
    for(i=1;i<len;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("%d \n",min);

    print_array(a,0,len-1);
    printf("\n");

    print_array_rev(a,0,len-1);
    return 0;
}

void print_array(int a[],int start,int end){
    if(start>end) return;
    printf("%d ",a[start]);
    start++;
    print_array(a,start,end);
}
void print_array_rev(int a[],int start,int end){
    if(end<start) return;
    printf("%d ",a[end]);
    end--;
    print_array_rev(a,start,end);
}
