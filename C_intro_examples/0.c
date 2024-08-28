#include<stdio.h>
int main()
{
int i = 0; 
int j = i; 
while(j < 5) {
  printf("%d\n", i);
  j = ++i;
 } 

 i = 0;
 j = i;
 while(j < 5) {
 printf("%d\n", i);
 j = i++;
 }
}


