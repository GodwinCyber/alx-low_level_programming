#include "lists.h"

void before_main(void) __attribute__((constructor));

/**
 * before_main - write a function that print before
 * the main function is executed
 * @__attibute__((constructor)): This is a GCC attribute
 * that tell the compiler to execute before_main before the main
 * funtion.
 * Return: 0
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
