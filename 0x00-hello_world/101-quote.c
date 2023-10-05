#include <stdio.h>
#include <unistd.h>
/**
 * main - Enrty point
 *
 * Description: print aqoute using write function
 *      write(int fd.const void *buf.size_t count)
 *
 * Return: 1 (not success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
