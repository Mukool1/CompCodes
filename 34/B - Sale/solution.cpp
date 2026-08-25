#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int m, n;
  cin >> m >> n;
  vector<int> tvs(m);
  for (int i = 0; i < m; i++)
  {
    cin >> tvs[i];
  }
  sort(tvs.begin(), tvs.end());
  int profit = 0;
  for (int i : tvs)
  {
    if (i < 0 && n > 0)
    {
      profit -= i;
      n--;
    }
  }
  cout << profit << endl;
  return 0;
}