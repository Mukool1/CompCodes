#include <iostream>
#include <string>
#include <vector>
 
void solve()
{
  int n, k;
  std::cin >> n >> k;
  std::string s;
  std::cin >> s;
 
  int tnhoj = 0;
  for (int i = 0; i < n; i += k)
  {
    bool anhoj = true;
 
    for (int j = 0; j < k; ++j)
    {
      if (s[i + j] == '0')
      {
        anhoj = false;
      }
    }
 
    if (anhoj)
    {
      tnhoj++;
    }
  }
 
  std::cout << tnhoj << "
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