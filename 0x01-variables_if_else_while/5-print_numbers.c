/**
 * main - print single digit numbers
 *
 * Return: 0 on success
 */
#include<stdio.h>
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
