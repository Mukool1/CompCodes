#include <iostream>
using namespace std;
 
void solve()
{
  int n;
  cin >> n;
 
  for (int i = 0; i < n; i++)
  {
    cout << 2 * i + 1 << " ";
  }
  cout << "
";
}
 
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}