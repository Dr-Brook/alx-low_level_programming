#include <stdio.h>

/**
 * description: function that takes a pointer to an int as parameter and updates the value it points to to 98
 * 
 * Return: 0
 **/
int main()
{
	int x = 42;
	reset_to_98(&x);
	printf("x is now %d\n", x);
	return 0;
}
