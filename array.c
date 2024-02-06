//#include<stdio.h>
// int main()
// {
// int marks[5],i,sum = 0,avg = 0;
// printf("Enter the marks of 5 sub : ");

// for ( i = 0; i < 5; i++)
// {
//     scanf("%d",&marks[i]);
//      sum = sum+ marks[i];
// }
//    printf("the sum is : %d\n",sum);
//     avg = sum/5;

// printf("avg is : %d\n",avg);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//  char a[4],c;
 
//  for ( c = 0; c < 4; c++)
//  {
//     scanf("%c",&a[c]);
//  }
//  for ( c = 0; c < 4; c++)
//  {
//   printf("%c\n",a[c]);
//  }
// return 0;
// }

#include<stdio.h>

int main(){
int n,i,a[100],sum=0;
 float avg;


  printf("Enter the number of integer want to add = ");
  scanf("%d",&n);
  printf("Enter the numbers = ",n);
   
   for (i = 1; i <= n; i++)
   {
      scanf("%d",&a[i]); 
      sum=sum+a[i];
   }
  printf("%d\n",sum);
  
  avg=sum/n;
  printf("Avg is %f",avg);

    return 0;
}
