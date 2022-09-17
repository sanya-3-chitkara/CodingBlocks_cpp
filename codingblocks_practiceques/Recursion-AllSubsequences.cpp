#include <bits/stdc++.h>
using namespace std;

void subSequences(string str, vector<string> &ans, int index, string output)
{
    if (index >= str.length())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    subSequences(str, ans, index + 1, output);
    // include
    char ele = str[index];
    output += ele;
    subSequences(str, ans, index + 1, output);
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        vector<string> ans;
        int index = 0;
        subSequences(str, ans, index, "");
        sort(ans.begin(), ans.end());
        for (auto subsequence : ans)
        {
            cout << subsequence << endl;
        }
       
    }

    return 0;
}
