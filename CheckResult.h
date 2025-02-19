#pragma once
#include <string>

using namespace std;

class CheckResult{
public:
	CheckResult() = default;
	CheckResult(string expected, string result);

	bool check();

private:
	string expected, result;
};

