#include<stdio.h>
int main()
{
 int i = 0; 
 while(i < 5) {
  printf("%d\n", i);
  ++i;
 } 

  i = 0;
 while(i < 5) {
  printf("%d\n", i);
  i++;
 }

 int array1D[4] = {1,2,3,4};
int array1Db[] = {1,2,3,4};

int itemsList[] = {1,2,3,4};

for (i = 0; i < 4; ++i) {
   itemsList[i] = itemsList[i+1];
   printf("%d\n", itemsList[i]);
}

int itemsLis[] = {1,2,3,4};

for (i = 0; i < 400; ++i) {
   itemsLis[i+1] = itemsLis[i];
   printf("%d\n", itemsLis[i]);
}



}

