#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int k, n, w;
  cin >> k >> n >> w;
 
  long long sum = k * (w * (w + 1)) / 2;
  if ((n - sum) >= 0)
    cout << 0 << endl;
  else
    cout << abs(n - sum) << endl;
 
  return 0;
}