#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    int maxm = max({a, b, c});
    int mini = min({a, b, c});
    int mid = (a + b + c) - maxm - mini;
    if (a == b || b == c || a == c)
      cout << 0 << endl;
    else
      cout << min((maxm - mid), (mid - mini)) << endl;
  }
  return 0;
}