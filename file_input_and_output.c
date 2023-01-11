// ram  == volatile memory (contents are lost when program are terminated) and hard disk == non volatile memory
// program stored in ram memory and file stored in hard disk memory.
// with the help of c programming language our code can read that file which is stored in hard disk.
// file is a container in a storage device to store data.
// files are used to presist data.
// operation on files : 
// create a file 
// open a file 
// close a file 
// read from a file 
// write in a file 
// types of files : 
// text files : textual data .txt, .c, .java, .py etc.
// binary files : binary data .exe, .mp3, .jpg.
// FILE pointer : FILE is a hidden structure that needs to be created for opening a file.
// a FILE ptr that points to this structure and is used to access the file.
// FILE *fptr;
// opening a file : 
// FILE *fptr;
// fptr = fopen("filename",mode);
// closing a file : 
// fclose(fptr);
// file opening modes : 
// "r" = open a file 
// "rb" = open to read in binary
// "w" = open to write
// "wb" = open to write in binary
// "a" = open to append
