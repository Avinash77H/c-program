#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("getc demo file.txt","r");
    char c;
    c=fgetc(ptr);
    while(c!=EOF){  // EOFmeans end of file
        printf("%c",c);
        c=fgetc(ptr);
    }
    return 0;
}