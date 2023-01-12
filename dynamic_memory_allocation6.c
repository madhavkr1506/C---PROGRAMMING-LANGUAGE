// realloc()
// reallocate (increase or decrease) memory using same pointer and size.
// ptr = realloc(ptr,newSize);
// allocate memory for 5 numbers. then dynamically increase it to 8 numbers.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));
    printf("enter number(5) : ");
    for (int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("enter number(8) : ");
    for (int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<8;i++){
        printf("number %d is %d \n",i,ptr[i]);
    }
return 0;
}