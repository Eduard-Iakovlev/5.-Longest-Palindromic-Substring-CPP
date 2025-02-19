#include "OutputSolution.h"
#include "Solution.h"
#include <iostream>
#include "CheckResult.h"

void OutputSolution::setOutput(int example, string s, string expected){
	this->example = example;
	this->s = s;
	this->expected = expected;
}

void OutputSolution::run(){
	result = Solution().longestPalindrome(s);
}

void OutputSolution::print(){
	cout << "============ Тест " << example << " ============" << endl;
	cout << "Входные данные: " << s << endl;
	cout << "Ожидаемый результат: " << expected << endl;
	run();
	cout << "Полученный результат: " << result << endl;
	cout << "============ Проверка ============" << endl;
	printCheck();
	cout << "=================================\n" << endl;
}

void OutputSolution::printCheck() {
	CheckResult check(expected, result);
	if (check.check()) { cout << "Тест пройден" << endl; }
	else { cout << "Тест не пройден" << endl; }
}


