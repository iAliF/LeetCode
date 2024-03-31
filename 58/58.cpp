class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
                if (c == 0)
                    continue;
                else
                    break;

            c++;
        }

        return c;
    }
};