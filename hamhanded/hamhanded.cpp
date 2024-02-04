// hamhanded.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "hamhanded.h"
#include <cctype>
#include <cstdint>

// TODO: This is an example of a library function
int hhAdd(int a, int b)
{
	return a + b;
}

enum class MathOperations: uint8_t
{
	None =0,
	Add,
	Sub,
	Mul,
	Div,
	Sin,
	AddFunction,

};

long double hhCalcAddFloat(const char* str)
{
	long double nubmers[128];
	MathOperations operations[128];
	bool signs[128];
	int idx = 0;
}

long double hhCalcFloat(const char* str)
{
	long double nubmersCell[128] = {0};
	long double nubmersAfter[128] = { 0 };
	MathOperations operations[128] = { MathOperations::None };
	bool signs[128] = { false };
	int idx = 0;

}

int hhCalc(const char* str)
{
	int nubmers[128];
	MathOperations operations[128];
	bool signs[128];
	int idx = 0;

	char c;
	int a = 0;
	int b = 0;
	char op = NULL;
	bool isSign = false;
	while (0 != (c = *str++))
	{
		if (signs[idx] == true)
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

		auto f = 1 & 2 && 4 + 5 == 7;
		
		auto b = 0b10001;
		auto b = 0b10001;

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
