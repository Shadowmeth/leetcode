#include <bits/stdc++.h>

using namespace std;

int findFirst(const vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid;
    int result = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int findLast(const vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid;
    int result = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result = {-1, -1};

    if (nums.empty()) {
        return result;
    }
    
    result[0] = findFirst(nums, target);
    result[1] = findLast(nums, target);

    return result;
}

int main(void)
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    vector<int> result = searchRange(nums, 8);
    std::cout << result[0] << " " << result[1] << std::endl;
}
