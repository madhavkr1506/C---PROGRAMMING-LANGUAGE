// free()
// we use it to free memory that is allocated using malloc and calloc
// free(ptr);
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("enter number = ");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    for (int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    ptr = (int *)calloc(2,sizeof(int));
    for (int i=0;i<2;i++){
        printf("%d\n",ptr[i]);
    }
return 0;
}