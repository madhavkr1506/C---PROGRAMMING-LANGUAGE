// write a program to write all the odd numbers from i to n in a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("odd.txt","w");
    int num;
    printf("enter number upto which you want odd number : ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        if (i % 2 != 0){
            fprintf(fptr,"%d\n",i);
        }
    }
    fclose(fptr);
return 0;
}