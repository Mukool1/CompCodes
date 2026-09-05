#include <iostream>
#include <vector>
#include <algorithm>
 
void solve()
{
  int n;
  std::cin >> n;
 
  int odd_count = 0;
  int mod0_count = 0;
  int mod2_count = 0;
 
  for (int i = 0; i < n; ++i)
  {
    long long a;
    std::cin >> a;
    if (a % 2 != 0)
    {
      odd_count++;
    }
    else if (a % 4 == 0)
    {
      mod0_count++;
    }
    else
    {
      mod2_count++;
    }
  }
 
  int ans = std::max({odd_count, mod0_count, mod2_count});
  std::cout << ans << "
";
}
 
int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int t;
  std::cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}