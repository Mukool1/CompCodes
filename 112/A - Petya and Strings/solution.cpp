#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  string a, b;
  getline(cin, a);
  getline(cin, b);
  bool found = false;
  for (int i = 0; i < a.size(); i++)
  {
    if ((tolower(a[i]) - 'a') > tolower(b[i]) - 'a')
    {
      found = true;
      cout << "1
";
      break;
    }
    else if ((tolower(a[i]) - 'a') < tolower(b[i]) - 'a')
    {
      cout << "-1
";
      found = true;
      break;
    }
  }
  if (!found)
  {
    cout << "0
";
  }
 
  return 0;
}