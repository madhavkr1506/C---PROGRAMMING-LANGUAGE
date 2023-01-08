// salting;
// find the salted form of a password entered by the user if the salt is "123" and added at the end.
#include<stdio.h>
int main(){
    char password[100];
    scanf("%s",&password);
    salting(password);
return 0;
}
void salting(char password[]){
    char salt[]="123";
    char newpassword[200];
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    puts(newpassword);
}