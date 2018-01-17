#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	// Replace this line with your code (have fun!).
	// start with smallest
	// start with loop all the way to 1
	int smallest = 0;
	if (a < b) {
		smallest = a;
	}
	else {
		smallest = b;
	}

	for (int i = 1; i <= smallest; i++) {
		if ((a % smallest == 0) && (b % smallest == 0))
		{
			return smallest;
		}
	}
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	// Replace this line with your code (challenge: do this with recursion!).
	if (n <= 1) {
		return n;
	}
	else {
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
	return 0;
}
