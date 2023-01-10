// #include<stdio.h>
// #include<string.h>
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main(){
//     struct student s1={111,9.9,"madhav kumar"};
//     s1.roll=222;
//     printf("student roll number : %d\n",s1.roll);

//     // printinfo(s1);
// return 0;
// }
// void printinfo(struct student s1){                              here change is not allowed because parameter is just copy of main function.
//     printf("details of a student : \n");
//     printf("student name : %s\n",s1.name);
//     printf("student roll number : %d\n",s1.roll);
//     printf("student cgpa : %.2f\n",s1.cgpa);
//     // s1.roll=222;
// }
// change in main function is available