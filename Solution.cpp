#include "Solution.h"

string Solution::longestPalindrome(string s) {
	string palindrome;
	palindrome.push_back(s[0]);
	int length = s.size();
	int cycle_length = 1;
	int begin = 0;
	int end;
	int left, right;

	while (length > 0) {

		for (int i = 0; i < cycle_length; i++) {
			begin = i;
			end = begin + length - 1;
			left = begin;
			right = end;
			while (left < right) {
				if (s[left] == s[right]) {
					left++;
					right--;
				}
				else break;

				if (right <= left && (end + 1 - begin) > palindrome.size()) {
					palindrome.clear();
					for (int i = begin; i < end + 1; i++) {
						palindrome.push_back(s[i]);
					}
					return palindrome;
				}
			}
		}

		length--;
		cycle_length++;
	}

	return palindrome;
}
