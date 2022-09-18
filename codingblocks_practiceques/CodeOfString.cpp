#include <bits/stdc++.h>
using namespace std;
#define ll long long int

char codes[] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void codeOfString(ll n, string str, vector<string> &ans)
{
    if (n <= 0)
    {
        ans.push_back(str);
        return;
    }

    ll t1 = n % 10, t2 = n % 100;
    codeOfString(n / 10, codes[t1] + str, ans);
    if (t2 >= 10 && t2 <= 26)
        codeOfString(n / 100, codes[t2] + str, ans);
}

int main()
{
    ll n;
    cin >> n;
    string str = "";
    vector<string> ans;
    codeOfString(n, str, ans);
    sort(ans.begin(), ans.end());
    cout << "[";
    int j = 0;
    for (auto code : ans)
    {
        cout << code;
        j++;
        if (j < ans.size())
            cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}
