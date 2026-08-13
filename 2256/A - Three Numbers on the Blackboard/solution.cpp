#include <iostream>
using namespace std;
 
int findMin(int a, int b, int c)
{
  int fir = min(a, b);
  int sec = min(fir, c);
  return sec;
}
int findMax(int a, int b, int c)
{
  int fir = max(a, b);
  int sec = max(fir, c);
  return sec;
}
 
int secLar(int a, int b, int c)
{
  if (a >= b && a >= c)
    return max(b, c);
  else if (b >= a && b >= c)
    return max(a, c);
  else
    return max(a, b);
}
 
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
      cout << 0 << endl;
      continue;
    }
    if ((a == 0 && b == 0) || (a == 0 && c == 0) || (b == 0 && c == 0))
    {
      cout << 0 << endl;
      continue;
    }
    int fir_mini = findMin(a, b, c);
    int lar = findMax(a, b, c);
    int sec_mini = secLar(a, b, c);
    if ((fir_mini + sec_mini) < lar)
    {
      lar = fir_mini + sec_mini;
    }
    cout << lar - fir_mini << endl;
  }
  return 0;
}