// writing to a file : 
// char ch = 'a';
// fprintf(fptr,"%c",ch);
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text1.txt","w");
    fprintf(fptr,"%c",'m');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c",'o');
    fclose(fptr);
return 0;
}
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("text1.txt","a");
//     fprintf(fptr,"%c",'m');
//     fprintf(fptr,"%c",'a');
//     fprintf(fptr,"%c",'n');
//     fprintf(fptr,"%c",'g');
//     fprintf(fptr,"%c",'o');
//     fclose(fptr);
// return 0;
// }