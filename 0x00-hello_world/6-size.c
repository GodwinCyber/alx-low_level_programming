#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char:  %lu byte(s)\n", "\n"sizeof(char));
	printf("size of an int:  %lu byte(s)\n",  "\n"(int)sizeof(int));
	printf("size of a long int:  %lu byte(s)\n",  "\n"(int)sizeof(long int));
	printf("size of a long long int:  %lu byte(s)\n", "\n"(int)sizeof(long long int));
	printf("size of a float:  %lu byte(s)\n", "\n"(int)sizeof(float));
	return (0);
}
