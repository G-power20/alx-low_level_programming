#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Rrturn: On the success1.
 * On error,-1 is returned, and error is set appropriately.
 */
int __putchar(char c)
{
	return (write(1, &c, 1));
}
