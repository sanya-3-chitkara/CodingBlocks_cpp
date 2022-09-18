#include <bits/stdc++.h>
using namespace std;

void dict(string str, vector<string> &ans, int index, string str2)
{
    if (str[index] == '\0')
    {
        if (str < str2)
            ans.push_back(str);
        return;
    }

    for (int i = index; i < str[i] != '\0'; i++)
    {
        swap(str[index], str[i]);
        dict(str, ans, index + 1, str2);
    }
    // refer all  permutation in notes
}

int main()
{
    string str;
    cin >> str;
    vector<string> ans;
    int index = 0;
    string str2 = str;
    dict(str, ans, index, str2);
    sort(ans.begin(), ans.end());
    for (auto permutation : ans)
    {
        cout << permutation << endl;
    }
    return 0;
}
