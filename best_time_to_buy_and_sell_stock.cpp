#include <bits/stdc++.h>

using namespace std;

/*

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

*/
int maxProfit(vector<int> &prices) {
    if (prices.empty()) {
        return 0;
    }
    
    int max_profit = numeric_limits<int>::min();
    int cheapest = numeric_limits<int>::max();

    for (int i = 0; i < prices.size(); i++) {
        cheapest = min(prices[i], cheapest);
        /* see if this new cheapest yields us a better profit? */
        int profit = prices[i] - cheapest;
        if (i > 0) {
            max_profit = max(profit, max_profit);
        }
    }

    return max_profit < 0 ? 0 : max_profit;
}

int main(void)
{
    vector<int> prices;
    
    prices = { 7, 1, 5, 3, 6, 4 };
    cout << maxProfit(prices) << endl;

    prices = { 7, 6, 4, 3, 1 };
    cout << maxProfit(prices) << endl;
}
