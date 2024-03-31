#include <iostream>
#include <string>

using namespace std;

class Solution {
	public:
		bool isPalindrome(string s) {
			int l = s.length();

			if (!l) return true;

			char c;
			string newStr;

			for (int i = 0; i < l; i++) {
				c = s[i];

				// To Lower case if it's upper case then append
				if (c >= 'A' && c <= 'Z') {
					c = tolower(c);
					newStr += c;
					continue;
				}

				// a-z or 0-9
				if ( (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
					newStr += c;
				}
			}

			s = newStr;
			newStr = string(s.rbegin(), s.rend());

			return s == newStr;
		}
};