#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;
printf("The size of a char: %ld byte(s)\n", sizeof(c));
printf("The size of an int: %ld byte(s)\n", sizeof(i));
printf("The size of a long int: %ld byte(s)\n", sizeof(li));
printf("The size of a long long int: %ld byte(s)\n", sizeof(lli));
printf("The size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
