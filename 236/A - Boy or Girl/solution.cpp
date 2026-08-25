#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
int main()
{
  string s;
  if (cin >> s)
  {
    set<char> unique_chars(s.begin(), s.end());
 
    if (unique_chars.size() % 2 == 0)
    {
      cout << "CHAT WITH HER!
";
    }
    else
    {
      cout << "IGNORE HIM!
";
    }
  }
  return 0;
}