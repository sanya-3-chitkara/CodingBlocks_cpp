#include <bits/stdc++.h>
using namespace std;
void generateParenthesis(int n, int open, int close,
      string s, vector<string>& ans)
{
 if (open == n && close == n) {
  ans.push_back(s);
  return;
 }
 if (open < n) {
  generateParenthesis(n, open + 1, close, s + "(",
       ans);
 }
 if (close < open) {
  generateParenthesis(n, open, close + 1, s + ")",
       ans);
 }
}
int main()
{
 int n;
 cin>>n;
 vector<string> ans;
 generateParenthesis(n, 0, 0, "", ans);
 sort(ans.begin(),ans.end(),greater<>());
 for (int i=0; i<ans.size();i++) {
  cout << ans[i] << endl;
 }
 return 0;
}
