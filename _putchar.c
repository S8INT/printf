#include <unistd.h>
/**
 *-putchar: the program is for writing a character.
 *@c : character to be displayed.
 *
 *Return: 1 on success.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
