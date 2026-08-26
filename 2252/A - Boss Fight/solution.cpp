#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  long long sum = 0;
  map<int, int> freq;
  int max_f = 0;
  int maj_val = 0;
 
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
    freq[a[i]]++;
    if (freq[a[i]] > max_f)
    {
      max_f = freq[a[i]];
      maj_val = a[i];
    }
  }
 
  int others = n - max_f;
  if (max_f <= others + 2)
  {
    cout << sum << "
";
    return;
  }
 
  long long lost_dmg = (long long)(max_f - (others + 2)) * maj_val;
  cout << sum - lost_dmg << "
";
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}