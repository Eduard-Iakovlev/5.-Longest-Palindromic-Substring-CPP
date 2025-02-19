#include <iostream>
#include <string>
#include "OutputSolution.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	int example = 0;
	string s, expected;
	
	OutputSolution outputSolution;
	
	example++;
	s = "babad";
	expected = "bab";
	outputSolution.setOutput(example, s, expected);
	outputSolution.print();

	example++;
	s = "cbbd";
	expected = "bb";
	outputSolution.setOutput(example, s, expected);
	outputSolution.print();

}
