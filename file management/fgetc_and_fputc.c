#include<stdio.h>
int main(){
   
     FILE *ptr;
    // fgetc demo for reading a file
    // ptr=fopen("getc demo file.txt","r");
    // char c;
    // printf("the value of character is:%c\n",fgetc(ptr));
    // printf("the value of character is:%c\n",fgetc(ptr));
    // printf("the value of character is:%c\n",fgetc(ptr));
    // printf("the value of character is:%c\n",fgetc(ptr));
    // printf("the value of character is:%c\n",fgetc(ptr));
    // printf("the value of character is:%c\n",fgetc(ptr));
    // fclose(ptr);
     
     ptr=fopen("putc demo file.txt","w");
     fputc('c',ptr);
     fputc('a',ptr);
     fputc('t',ptr);
     fclose(ptr);

    
    return 0;
}