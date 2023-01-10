// make a structure to store bank employee information of a abc bank. also, make an alias for it.

#include<stdio.h>
#include<string.h>
typedef struct bank_employee{
    int account_no;
    float salary;
    char name[100];
}bnke;
int main(){
    bnke e1;
    e1.account_no = 1234;
    e1.salary = 1000000.00;
    strcpy(e1.name,"madhav");

    printf("employee name = %s \n",e1.name);
    printf("employee account_no = %d \n",e1.account_no);
    printf("employee salary = %.2f \n",e1.salary);

    bnke e2;
    e2.account_no = 1235;
    e2.salary = 2000000.00;
    strcpy(e2.name,"kishan");

    printf("employee name = %s \n",e2.name);
    printf("employee account_no = %d \n",e2.account_no);
    printf("employee salary = %.2f \n",e2.salary);
return 0;
}