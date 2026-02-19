#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string prefix = "";
    if (strs.empty()) {
        return prefix;
    }
    if (strs.size() == 1) {
        return strs[0];
    }
    
    string ref = strs[0];
    for (size_t i = 0; i < ref.length(); i++) {
        for (size_t j = 1; j < strs.size(); j++) {
            if (ref[i] != strs[j][i]) {
                goto unmatched_char;
            }
        }
        prefix += ref[i];
    }
    
 unmatched_char:
    return prefix;
}

int main(void)
{
    vector<string> strs;
    strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs) << endl;
    strs = {"dog","racecar","car"};
    cout << longestCommonPrefix(strs) << endl;
}
