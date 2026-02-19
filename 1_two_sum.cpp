#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    for (size_t i = 0; i < nums.size(); i++) {
        for (size_t j = i + 1; j < nums.size(); j++) {
            if (i != j && nums[i] + nums[j] == target) {
                res.push_back(i);
                res.push_back(j);
                goto loop_break;
            }
        }
    }

 loop_break:
    return res;
}


int main(void) {
    vector<int> res;
    
    vector<int> nums = { 2, 7, 11, 15 };
    res = twoSum(nums, 9);
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    nums = { 3, 2, 4 };
    res = twoSum(nums, 6);
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    nums = { 3, 3 };
    res = twoSum(nums, 6);
    cout << "[" << res[0] << ", " << res[1] << "]\n";
}
