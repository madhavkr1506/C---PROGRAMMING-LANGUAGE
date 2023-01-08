// create a string firstname and lastname and store details of user and print all the character using a loop;
#include<stdio.h>
int main(){
    char firstname[]="madhav";
    char lastname[]="kumar";
    printstring(firstname);
    printstring(lastname);

return 0;
}
void printstring(char arr[]){
    for (int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}


