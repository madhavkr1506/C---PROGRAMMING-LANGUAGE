// read and write a character.
// fgetc(fptr)
// fputc('a',fptr)
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("text1.txt","r");
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     fclose(fptr);
// return 0;
// }
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("text1.txt","w");
    fputc('a',fptr);
    fputc('p',fptr);
    fputc('p',fptr);
    fputc('l',fptr);
    fputc('e',fptr);
    fclose(fptr);
return 0;
}