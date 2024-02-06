//MEMORY LOCALTION IN POINTER
// #include<stdio.h>
// int main()
// {
//     int age = 25;

//     printf("%p",&age);

//     int* ptr = &age;

//     printf("\n%p",ptr);

//     return 0;
// }

//ACCESS VALUE USING POINTER

// #include<stdio.h>
// int main()
// {
//     int age = 25;

//     printf("%p",&age);

//     int* ptr = &age;

//     printf("Address : %p\n",ptr);

//     printf("Value : %d",*ptr);

//     return 0;
// }

//CHANGE THE VALUE USING POINTER 

#include<stdio.h>
int main()
{
    int age = 25;

    // printf("%p",&age);

    int* ptr = &age;

    // printf("Address : %p\n",ptr);

    *ptr = 31;

    printf("Value : %d",*ptr);

    return 0;
}