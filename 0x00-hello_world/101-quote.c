#include <stdio.h>
#include <unistd.h>
/**
 * main - To print to standard error
 * Descritpion: A program that prints output to standard error
 * Return: 1
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
