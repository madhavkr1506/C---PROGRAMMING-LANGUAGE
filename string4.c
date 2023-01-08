// make a program that inputs user's name and prints its length.
#include<stdio.h>
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("length of string is : %d",countlength(name));
return 0;
}
int countlength(char arr[]){
    int count=0;
    for (int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}