#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    
    int mid = -1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (target < nums[mid])
            right = mid - 1;
        else if (target > nums[mid])
            left = mid + 1;
        else
            return mid;
    }

    return left;
}

int main(void)
{
    vector<int> nums;
    nums = { 1, 3, 5, 6 };
    
    cout << searchInsert(nums, 5) << endl;

    cout << searchInsert(nums, 2) << endl;

    cout << searchInsert(nums, 7) << endl;

    cout << searchInsert(nums, 0) << endl;
}
