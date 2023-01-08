// write a function that print nameste if user is indian and bonjour if user is french
#include<stdio.h>
void indian(){
    printf("namaste \n");
}
void french(){
    printf("bonjour \n");
}
int main(){
    char ch;
    printf("enter character : ");
    scanf("%c",&ch);
    if (ch=='i'){
        indian();
    }
    else if (ch=='f'){
        french();
    }
    else{
        printf("enter valid credentials!");
    }
return 0;
}