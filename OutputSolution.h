#pragma once
#include <string>

using namespace std;

class OutputSolution{
public:
	OutputSolution() = default;
	
	void setOutput(int example, string s, string expected);
	void run();
	void print();
	void printCheck();

private:
	int example;
	string s, expected, result;
};

