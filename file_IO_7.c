// make a program to read 5 integers from a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text1.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("number 1 = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number 2 = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number 3 = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number 4 = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number 5 = %d\n",n);
    fclose(fptr);
return 0;
}