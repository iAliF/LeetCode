#include <iostream>
#include <map>

using namespace std;

map<char, int> m {
	{'I', 1},
	{'V', 5},
	{'X', 10},
	{'L', 50},
	{'C', 100},
	{'D', 500},
	{'M', 1000},
};

class Solution {
	public:
		int romanToInt(string s) {
			int sum = 0;
			int length = s.length();

			for (int i = 0; i < length; i++) {
				int c = m[s[i]];

				sum += ( (i < length - 1) && c < m[s[i + 1]] ) ? -c : c;
			}

			return sum;
		}
};