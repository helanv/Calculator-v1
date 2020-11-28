#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Calculator.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double firstNum = 0.0;
	double secondNum = 0.0;
	double result = 0.0;
	char mathOper = '+';

	cout << "¬ведите ¬ашу операцию: " << endl;

	Calculator c;
	while (true) {
		cin >> firstNum >> mathOper >> secondNum;
		result = c.Calculate(firstNum, mathOper, secondNum);
		cout << result;
	}
	return 0;
}
