#include <bits/stdc++.h>
using namespace std;

void dict(string str, int index, vector<string> &ans, string str2)
{
    if (str[index] == '\0')
    {
        if (str > str2)
            ans.push_back(str);
    }

    for (int i = index; str[i] != '\0'; i++)
    {
        swap(str[index], str[i]);
        dict(str, index + 1, ans, str2);
    }
}

int main()
{
    string str;
    cin >> str;
    string str2 = str;
    vector<string> ans;
    dict(str, 0, ans, str2);
    sort(ans.begin(), ans.end());
    for (auto permutation : ans)
    {
        cout << permutation << endl;
    }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }
    return 0;
}
