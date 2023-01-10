#include<stdio.h>
#include<string.h>
typedef struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
} add;
int main(){
    add p[5];
    printf("enter informayion of 1st person : ");
    scanf("%d",&p[0].house_no);
    scanf("%d",&p[0].block);
    scanf("%s",&p[0].city);
    scanf("%s",&p[0].state);
    printf("enter informayion of 2nd person : ");
    scanf("%d",&p[1].house_no);
    scanf("%d",&p[1].block);
    scanf("%s",&p[1].city);
    scanf("%s",&p[1].state);
    printf("enter informayion of 3rd person : ");
    scanf("%d",&p[2].house_no);
    scanf("%d",&p[2].block);
    scanf("%s",&p[2].city);
    scanf("%s",&p[2].state);
    printf("enter informayion of 4th person : ");
    scanf("%d",&p[3].house_no);
    scanf("%d",&p[3].block);
    scanf("%s",&p[3].city);
    scanf("%s",&p[3].state);
    printf("enter informayion of 5th person : ");
    scanf("%d",&p[4].house_no);
    scanf("%d",&p[4].block);
    scanf("%s",&p[4].city);
    scanf("%s",&p[4].state);

    printaddress(p[0]);
    printaddress(p[1]);
    printaddress(p[2]);
    printaddress(p[3]);
    printaddress(p[4]);
return 0;
}
void printaddress(add p){
    printf("address is : %d, %d, %s, %s \n",p.house_no,p.block,p.city,p.state);
}