#include <stdlib.h>
#include <unistd.h>


/**
 * multiply_long - multiply_long two strings of digits
 * @num_a: first number
 * @num_b: second number
 * @long_a: first number length
 * @long_b: second number length
 * Return: 98 on error or 0 on success
 */
int multiply_long(char num_a[], char num_b[], long int long_a, long int long_b)
{
	int holder;
	long int a, b, r;
	char *result, *start;

	result = malloc(long_a + long_b + 1);
	if (result == NULL)
	{
		write(1, "Error\n", 6);
		return (98);
	}
	for (a = 0; a < long_a + long_b + 3; a++)
		result[a] = 0;
	for (a = long_a - 1; a >= 0; a--)
		for (b = long_b - 1; b >= 0; b--)
		{
			result[a + b + 1] += ((num_a[a] - '0') *
								  (num_b[b] - '0'));
			for (r = a + b + 1; result[r] > 9;
				 r--)
			{
				holder = result[r] / 10;
				result[r - 1] += holder;
				result[r] %= 10;
			}
		}
	for (a = long_a + long_b - 1; a >= 0; a--)
		result[a] += '0';
	for (start = result; *start == '0' && start[1] != 0; start++)
		long_a--;
	long_a += long_b;
	write(1, start, long_a);
	write(1, "\n", 1);
	free(result);

	return (0);
}


/**
 * main -  multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments list
 * Return: 98 if error, 0 if success
 */
int main(int argc, char *argv[])
{
	long int long_a, long_b;
	char *a, *b;

	if (argc != 3)
	{
		write(1, "Error\n", 6);
		return (98);
	}
	long_a = 0;
	for (a = argv[1]; *a != 0; a++, long_a++)
		if (*a < '0' || *a > '9')
		{
			write(1, "Error\n", 6);
			return (98);
		}
	long_b = 0;
	for (b = argv[2]; *b != 0; b++, long_b++)
		if (*b < '0' || *b > '9')
		{
			write(1, "Error\n", 6);
			return (98);
		}
	if (long_a == 0 || long_b == 0)
	{
		write(1, "Error\n", 6);
		return (98);
	}
	for (a = argv[1]; *a == '0' && a[1] != 0; long_a--)
		a++;
	for (b = argv[2]; *b == '0' && b[1] != 0; long_b--)
		b++;

	return (multiply_long(a, b, long_a, long_b));
}
