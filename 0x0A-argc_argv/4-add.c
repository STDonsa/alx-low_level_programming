#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program cheks the fuction.
 * @argc: program counts the arguments passed to the function.
 * @argv: gives the value for the argument passed to the function.
 *
 * Return: Returns always success.
 */

int main(int argc, char *argv[])
{
int sum;
int count;
int s;

count = 1;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (count < argc)
{
for (s = 0; argv[count][s] != '\0'; s++)
{
if (!(isdigit(argv[count][s])))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[count]);
count++;
}
printf("%d\n", sum);
return (0);
}
