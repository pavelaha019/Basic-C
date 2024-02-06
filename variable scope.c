// LOCAL VARIABLE SCOPE
//#include<stdio.h>

// int addNumbers(int n1,int n2)
// {
//     int result = n1+n2;
//     return result;
// }
// int main()
// {
//     int sum= addNumbers(5,5);
//     printf("Result = %d",sum);
//     return 0;
// }
//GLOBEL VARIABLE 

#include<stdio.h>

int result;

int addNumbers(int n1,int n2)
{
    int result = n1+n2;
     printf("Result = %d",result);
   
};
int main()
{
   addNumbers(5,5);
   
    return 0;
}