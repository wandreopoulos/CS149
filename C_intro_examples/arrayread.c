#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }

     //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }



    int arr[5] = {1};
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);



    int array2D[2][4] = {1,2,3,4,5,6,7,8}; /* (i) */
int array2Db[][4] = {1,2,3,4,5,6,7,8}; /* (ii) */
int array2Dc[2][] = {1,2,3,4,5,6,7,8}; /* (iii) */
int array2Dd[][] = {1,2,3,4,5,6,7,8}; /* (iv) */

   return 0;
}

