#include <unistd.h>

#define quote "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
* main - main function
* 
* Return: should be 1
*/

int main(void)
{
    write(STDERR_FILENO, quote);
    Return (1);
}