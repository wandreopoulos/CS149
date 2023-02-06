#include<stdio.h>
int main()
{
int i = 0; 
int j = i; 
while(j < 5) {
  printf("%d", i);
  j = i++;
 } 
}
