#include <stdio.h>
/**
<<<<<<< HEAD
*main - Entry point
*Return: Always 0 (sucess)
=======
* main - Entry point 
* Return: Always 0 (Success)
>>>>>>> 13926ffc0d9c21f5b0c95c2cd7368af895da17b8
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: $lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return(0);
}
