#include <bits/stdc++.h>
#include <cassert>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int i = (int)digits.size() - 1;

    for (; i >= 0; i--) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else if (digits[i] >= 0 && digits[i] < 9) {
            digits[i]++;
            break;
        }
    }

    if (i < 0) {
        // every digit was 9, we have to append a 1 at beginning
        digits.insert(digits.begin(), 1);
    }

    return digits;
}

int main(void)
{
    vector<int> digits_1 = { 1, 2, 3 };
    vector<int> result_1 = plusOne(digits_1);
    for (size_t i = 0; i < result_1.size(); i++) {
        cout << result_1[i] << " ";
    }
    cout << endl;

    vector<int> digits_2 = { 4, 3, 2, 1 };
    vector<int> result_2 = plusOne(digits_2);
    for (size_t i = 0; i < result_2.size(); i++) {
        cout << result_2[i] << " ";
    }
    cout << endl;

    vector<int> digits_3 = { 9, 9, 9, 9 };
    vector<int> result_3 = plusOne(digits_3);
    for (size_t i = 0; i < result_3.size(); i++) {
        cout << result_3[i] << " ";
    }
    cout << endl;
}
