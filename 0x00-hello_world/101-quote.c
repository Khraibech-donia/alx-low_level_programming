#include <unistd.h>

/**
 * main - Entry point
 *
 * description: print with write function
 *
 * return 1 (success)
 */
int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
