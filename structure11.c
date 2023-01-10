// enter address (house number, block, city, address) of five people.
#include<stdio.h>
#include<string.h>
typedef struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
} add;
int main(){
    add p1={18,8,"mokama","bihar"};
    add p2={19,9,"rajgir","bihar"};
    add p3={20,10,"patna","bihar"};
    add p4={21,11,"lakhisharye","bihar"};
    add p5={22,12,"jamuii","bihar"};
    printf("city of 1st person : %s\n",p1.city);
    printf("state of 1st person : %s\n",p1.state);
    printf("block of 1st person : %d\n",p1.block);
    printf("house number of 1st person : %d\n",p1.house_no);
    printf("\n");
    printf("city of 2nd person : %s\n",p2.city);
    printf("state of 2nd person : %s\n",p2.state);
    printf("block of 2nd person : %d\n",p2.block);
    printf("house number of 2nd person : %d\n",p2.house_no);
    printf("\n");
    printf("city of 3rd person : %s\n",p3.city);
    printf("state of 3rd person : %s\n",p3.state);
    printf("block of 3rd person : %d\n",p3.block);
    printf("house number of 3rd person : %d\n",p3.house_no);
    printf("\n");
    printf("city of 4th person : %s\n",p4.city);
    printf("state of 4th person : %s\n",p4.state);
    printf("block of 4th person : %d\n",p4.block);
    printf("house number of 4th person : %d\n",p4.house_no);
    printf("\n");
    printf("city of 5th person : %s\n",p5.city);
    printf("state of 5th person : %s\n",p5.state);
    printf("block of 5th person : %d\n",p5.block);
    printf("house number of 5th person : %d\n",p5.house_no);
    printf("\n");
return 0;
}