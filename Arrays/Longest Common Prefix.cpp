#include <algorithm>
#include <string>
#include <vector>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int minL = strs[0].length();
        for(int i = 0; i < strs.size(); i++) {
            minL = min(minL, (int)strs[i].length());
        }
        for(int i = 0; i < minL; i++) {
            for(int j = 0; j < strs.size() - 1; j++) {
                if(strs[j][i] != strs[j+1][i]) {
                    return s;
                }
            }
            s += strs[0][i];
        }

        return s;
    }
};
