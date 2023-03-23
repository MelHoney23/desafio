#include <stdio.h>

int main()
{
   int age;
   printf("tell me you age\n");
   scanf("%i", &age);

   if (age <= 5)
   printf("baby\n");
   else if (age >5 && age <= 10)
   printf("child\n");
   else if (age >10 && age <= 10)
   printf("young\n");
   else if(age < 19 && age <= 50)
   printf("adult\n");
   else 
   printf("old\n");

   return 0; 
}