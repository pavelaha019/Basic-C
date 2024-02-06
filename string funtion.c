// STRLEN FUNCTION USE FOR FIND A LENGTH OF A STRING
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]= "Paval Ahammed";
//     printf("%s",str); 
//     printf("\nLENGTH is = %zu",strlen(str));  
//   return 0;
// }

//STRCPY FUNCTION USE FOR COPY A STRING 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]= "Paval Ahammed";
//     char noobPlayer[strlen(str)] ;

//   //strcpy(destination string ,source string (where we want to copy))
//     strcpy(noobPlayer, str);

//     printf("%s", noobPlayer); 
   
//   return 0;
// }

 // STRCAT FUNTCION USE FOR JOIN TWO STRING TOGETHER 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]= "Paval Ahammed ";
//     char noobPlayer[] = "NooB Player" ;

//   //strcat(first string array,second string array)
//     strcat(str,noobPlayer);

//     printf("%s", str); 
   
//   return 0;
//}

// STRCMP FUNCTION USE FOR COMPARE TWO FUNCTION 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]= "Paval Ahammed ";
//     char noobPlayer[] = "Paval Ahammed nijum" ;

//                  //strcmp(first string array,second string array)
//    //int result for return number in result if it is same than return 0 or else it will give an ingerger number
//    int result = strcmp(str,noobPlayer);

//     printf("%d", result); 
   
//   return 0;
// }

// and for no value 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]= "Paval Ahammed nijum";
//     char noobPlayer[] = "Paval Ahammed nijum" ;

//                  //strcmp(first string array,second string array)
//    //int result for return number in result if it is same than return 0 or else it will give an ingerger number
//    int result = strcmp(str, noobPlayer);

//     printf("%d", result); 
   
//   return 0;
// }

/*Create a Program to compare two strings and print the larger string.*/
#include <stdio.h>
#include <string.h>
int main() {
    char string1[40];
    char string2[40];
    int lengthOfString1;
    int lengthOfString2;
    
    printf("Please enter string 1: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Please enter string 2: ");
    fgets(string2, sizeof(string1), stdin);
    
    lengthOfString1 = strlen(string1);
    lengthOfString2 = strlen(string2);
    
    if(lengthOfString1 > lengthOfString2){
        printf("%s", string1);
        printf("\nLENGTH is = %u",strlen(string1));  
    }
    else if(lengthOfString2 > lengthOfString1){
        printf("%s", string2);
          printf("\nLENGTH is = %u",strlen(string2)); 
    }
    else{
        printf("Both characters has the same length.");
    }
    
    return 0;
}