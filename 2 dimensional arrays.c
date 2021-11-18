#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[2][5];
   /*Counter variables for the loop*/
   int m, n;
   for(m=0; m<2; m++) {
      for(n=0;n<5;n++) {
         printf("Enter value for disp[%d][%d]:", m, n);
         scanf("%d", &disp[m][n]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(m=0; m<2; m++) {
      for(n=0;n<5;n++) {
         printf("%d ", disp[m][n]);
         if(n==4){
            printf("\n");
         }
      }
   }
   return 0;
}
