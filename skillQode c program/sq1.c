#include<stdio.h>
void main()
{
    int physics,chemistry,maths,total_marks,obtain_marks,percentage;
  
  physics=90;
  chemistry=98;
  maths=95;
  total_marks=300;
  obtain_marks=physics+chemistry+maths;
  percentage=(obtain_marks*100)/300;
  
  printf("obtain marks:%d\n",obtain_marks);
  printf("percentage:%d",percentage);       
}