#include <stdio.h>
#include <stdlib.h>

int main()
{

   int TypeOfSort;
   printf("enter your type of sort \n\n 1=> for Quick Sort\n 2=> for Insertion Sort\n 3=> for Merge Sort \n 4=> for exit\n");

   scanf("%d",&TypeOfSort);

   switch(TypeOfSort) {
      case 1 :
         printf("Quick Sort\n" );
         break;
      case 2 :
          printf("Insertion Sort\n" );
          break;
      case 3 :
         printf("Merge Sort\n" );
         break;
      case 4 :
         return 0;
         break;

      default :
         printf("Invalid choice\n" );
   }

   printf("Your TypeOfSort is  %d\n", TypeOfSort );
    return 0;
}
