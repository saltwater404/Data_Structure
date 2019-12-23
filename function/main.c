#include<stdio.h>

void hello();
void sum();
void even_odd(int a);
int factor(int n);

int main() {
   int a,n;
   hello();
   sum();
   even_odd(5);
   factor(10);
}

void sum() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Addition of two number is : %d\n", num1+num2 );
}
void hello(){
    printf("Hello world\n");
}

void even_odd(int a){

    if(a%2==0)
    {
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
int factor(int n){
    int i,count=0;
    for( i=1;i<=n;i++){
        if(n%i==0){
            count++;
            printf("%d ",i);
        }
    }
    printf("\n%d",count);
}


