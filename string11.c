// write a function named slice, which takes a string and returns a sliced string from index n to m.
#include<stdio.h>
void slicing(char str[],int n, int m){
    char newstr[100];
    int i;
    int j=0;
    for (i=n;i<=m;i++,j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
} 
int main(){
    char str[]="madhavkumar";
    slicing(str,3,6);
return 0;
}