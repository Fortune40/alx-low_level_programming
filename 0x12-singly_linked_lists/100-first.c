#include "lists.h"

/**
 * print_after_main - prints string before main function is executed.
 **/
void print_after_main(void) __attribute__((constructor));

void print_after_main(void)
{
  printf("You're beat! and yet, you must allow,\n");
  printf("I bore my house upon my back!\n");
}
