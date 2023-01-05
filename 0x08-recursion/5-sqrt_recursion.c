#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursion - returns the natural square root of a number
 * return - always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root_recursion(n, (n / 2) + 1));
	}
}

int square_root_recursion(int n, int trialNum)
{	/* trialNum - potential square root number */

	int trial;
	trial = ((n / trialNum) + 1 + trialNum) / 2;

	if ((n / trialNum) == trialNum && n % trialNum == 0)
	{
		return (trialNum);
	}
	else if (trial == trialNum)
	{
		return (-1);
	}
	else
	{
		return (square_root_recursion(n, trial));
	}
}

