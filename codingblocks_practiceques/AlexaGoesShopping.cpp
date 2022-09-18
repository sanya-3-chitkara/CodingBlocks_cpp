#include <bits/stdc++.h>
using namespace std;

void shop(vector<int> prices, int n, int a, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a % prices[i]) == 0)
            count++;
    }
    if (count >= k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int val;
    int n;
    cin >> n;
    vector<int> prices;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        prices.push_back(val);
    }
    int queries, a, k;
    cin >> queries;
    while (queries--)
    {
        cin >> a >> k;
        shop(prices, n, a, k);
    }

    return 0;
}
