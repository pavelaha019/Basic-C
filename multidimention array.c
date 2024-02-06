// MULTIDIMENTION ARRAY
// #include<stdio.h>
// int main()
// {
//     int arr[2][3]= {{1,2,3},{4,5,6}};
//     printf("arr is %d\n", arr[0][0]);
//     printf("arr is %d",arr[1][2]);
//  return 0;
// }

//ARRAY INDEX CHANGE 
// #include<stdio.h>
// int main()
// {
//      int arr[2][3]= {{1,2,3},{4,5,6}};
//     arr[0][1] = 5;
//     arr[1][1] = 8;

//      printf("arr is %d\n", arr[0][1]);
//      printf("arr is %d",arr[1][1]);
// return 0;
// }

//MULTIDIMENTION ARRAY AND LOOP

#include<stdio.h>
int main()
    {    
         int arr[2][3]= {{1,2,3},{4,5,6}};

         for ( int i = 0;  i < 2; i++)
         {
             for (int j = 0; j < 3; j++)
             {
                printf("%d  ",arr[i][j]);
             }
             printf("\n");
         }
         return 0;
    }