// hamhanded.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "hamhanded.h"
#include <cctype>

// TODO: This is an example of a library function
int hhAdd(int a, int b)
{
	return a + b;
}

int hhCalc(const char* str)
{
	char c;
	int a = 0;
	int b = 0;
	char op = NULL;
	bool isSign = false;
	while (0 != (c = *str++))
	{
		if (isSign == true)
		{
			isSign == false;

			if (op == '+') {
				a = a + b;
				b = 0;
				isSign == false;
			}else if (op == '-') {
				a = a - b;
				b = 0;
			} else if (isSign == true && op == '*') {
				a = a * b;
				b = 0;
			} else if (isSign == true && op == '/') {
				a = a / b;
				b = 0;
			}
		}
		if (c == '+' || c == '-' || c == '*' || c == '/') {
			op = c;
			continue;
		}
		if (!isdigit(c))
		{
			continue;
		}

		if (op == '+' || op == '-' || op == '*' || op == '/') {
			b = b * 10 + (c - '0');
			isSign = true;
			continue;
		}

		a = a * 10 + (c - '0');
	}
	if (op == '+') {
		return a + b;
	}
	else if (op == '-') {
		return a - b;
	}
	else if (op == '*') {
		return a * b;
	}
	else if (op == '/') {
		return a / b;
	}
	else {
		return -1;
	}
}
