#include<stdio.h>
/**
 * main - entry point
 *
 * Return: alwaysreturn 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue
}
putchar (a);
return (0);
}