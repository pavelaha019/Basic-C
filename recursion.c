/*Recursion is The process in which a function calls itself directly or indirectly is called recursion
and the corresponding function is called a recursive function*/
// #include<stdio.h>

// int sum(int n);

// int sum(int n)
// {
//     if (n!=0)
//     {
//         return n + sum(n-1);
//     }
//     else 
//     {
//         return n;
//     }
    
// }

// int main()
// {
//     int num,result;

//     printf("Enter a integer number : ");
//     scanf("%d",&num);

//     result = sum(num);
    
//     printf("%d",result);
//     return 0;
// }


//Programming task:
#include<stdio.h>


int factorial(int n);
int main() {


	int num;
	printf("Enter any number to find its factorial = ");
	scanf("%d",&num);
	int result = factorial(num);
	printf("Factorial = %d",result);
	return 0;

}

int factorial(int n) {

	if (n > 0) {
		return n * factorial(n - 1);
	} 
       else {
		return 1;
	}
}

