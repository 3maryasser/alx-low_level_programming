#include <stdio.h>

/*
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */


int main(void)

{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{

		if (letter != 'e' && letter != 'q')

			putchar(letter);

	}

	putchar('\n');

	return (0);

}
