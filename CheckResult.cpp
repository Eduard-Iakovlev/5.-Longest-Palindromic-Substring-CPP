#include "CheckResult.h"
#include <iostream>

CheckResult::CheckResult(string expected, string result) : expected(expected), result(result){}

bool CheckResult::check(){
	if (expected == result) { return true; }
	else { return false; }
}
