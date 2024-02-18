#include<stdio.h>
int main(){
    char *ptr="avinash bhai";         // assign string first way 
    char arr[]="power of a poiter";   // assign string second way
    printf("%s\n",ptr);         // print string first way        
   // printf("%s\n",arr);     
    puts(arr);                  // print string second way
    ptr="new string";
    puts(ptr);
   
// second way for assign string is not re-assign any string 
// were in first way re-assign any string easly use by ptr=new string;

    return 0;
}