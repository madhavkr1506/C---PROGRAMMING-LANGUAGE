#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text1.txt","r");
    fclose(fptr);
return 0;
}
// best practice : check if a file exists before reading from it.