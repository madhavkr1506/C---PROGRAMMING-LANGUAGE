// reading from a file : 
// char ch;
// fscanf(fptr,"%c",&ch);
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("text1.txt","r");
//     char ch;
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c \n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c \n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c \n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c \n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c \n",ch);
//     fclose(fptr);
// return 0;
// }

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text1.txt","r");
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("character = %d \n",ch);
    fscanf(fptr,"%d",&ch);
    printf("character = %d \n",ch);
    fscanf(fptr,"%d",&ch);
    printf("character = %d \n",ch);
return 0;
}