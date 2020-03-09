#include<stdio.h>

int main(){

    while(menu()!= 5);


    return 0;

}

int menu()
{
    int op;
    printf("\n\nSelect Link List Operation:\n\n");
    printf("1. Insert\n\n");
    printf("2. Delete\n\n");
    printf("3. Update\n\n");
    printf("4. Search\n\n");
    printf("5. Close\n\n");
    printf("Input operation: ");

    scanf("%d",&op);

    if(op==1){

        insert();
    }
    else if(op==2){
        printf("\n\n *** Delete Operations: *** \n\n");
    }
    else if(op==3){
        printf("\n\n *** Update Operations: *** \n\n");
    }
    else if(op==4){
        printf("\n\n *** Search Operations: *** \n\n");
    }
    else if(op==5){
        printf("\n\n *** Operation Closed *** \n\n");
        return op;
    }

    else{
        printf("\n\n ***Invalid Operations.Try Again*** \n\n");
    }
}


int insert()
{
    int op;
    printf("\n\nSelect Insert Operation:\n\n");
    printf("1. pushfront()\n\n");
    printf("2. pushback()\n\n");
    printf("3. pushafter()\n\n");
    printf("4. pushbefore()\n\n");
    printf("5. pushat()\n\n");
    printf("6. Close\n\n");
    printf("Input operation: ");

    scanf("%d",&op);

    if(op==1){
        printf("\n\n *** Push Front Operation: *** \n\n");
    }
    else if(op==2){
        printf("\n\n *** Push Back Operation: *** \n\n");
    }
    else if(op==3){
        printf("\n\n *** Push After Operation: *** \n\n");
    }
    else if(op==4){
        printf("\n\n *** Push Before Operation: *** \n\n");
    }
    else if(op==5){
        printf("\n\n *** Push At Operation: *** \n\n");
    }
    else if(op==6){
        printf("\n\n *** Operation Closed *** \n\n");

    }

    else{
        printf("\n\n ***Invalid Operations.Try Again*** \n\n");
    }
    return op;

}
