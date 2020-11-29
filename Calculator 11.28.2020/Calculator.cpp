#include "Calculator.h"
#include <iostream>

double Calculator::Calculate(double firstNum, char mathOper, double secondNum, char mathOper2, double thirdNum)
{
	double sum = firstNum + secondNum;
	double minusSum = firstNum - secondNum;
	double divideSum = firstNum / secondNum;
	double multipleSum = firstNum * secondNum;

	if (secondNum == 0 || thirdNum == 0) {
		std::cout << "������� �� 0 ���������";
	}
	else {

	switch (mathOper2) {
	case '+':
		return sum + thirdNum;
		break;
	case '-':
		return minusSum - thirdNum;
		break;
	case '/':
	case ':':
		if (mathOper == '+') {
			return firstNum + (secondNum / thirdNum);
		}
		else if (mathOper == '-') {
			return firstNum - (secondNum / thirdNum);
		}
		else if (mathOper == '*') {
			return (firstNum * secondNum) / thirdNum;
		}
		else if (mathOper == '/') {
			return (firstNum / secondNum) / thirdNum;
		}
		break;
	case '*':
		if (mathOper == '+') {
			return firstNum + (secondNum * thirdNum);
		}
		else if (mathOper == '-') {
			return firstNum - (secondNum * thirdNum);
		}
		else if (mathOper == '*') {
			return (firstNum * secondNum) * thirdNum;
		}
		else if (mathOper == '/') {
			return (firstNum / secondNum) * thirdNum;
		}
		break;
	default:
		return 0;
		break;
	}
	}
}
