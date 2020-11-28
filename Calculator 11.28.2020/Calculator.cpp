#include "Calculator.h"
#include <iostream>

double Calculator::Calculate(double firstNum, char mathOper, double secondNum)
{
	switch (mathOper) {
	case '+':
		return firstNum + secondNum;
	case '-':
		return firstNum - secondNum;
	case '/':
	case ':':
		if (secondNum != 0) {
			return firstNum / secondNum;
		}
		else {
			std::cout << "������� �� 0 ���������";
		}
	case '*':
		return firstNum * secondNum;
	default:
		return 0;
	}
}
