#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int up = 0;
    int low = 0;
 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            up++;
        } else {
            low++;
        }
    }
 
    if (up > low) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    }
 
    cout << s << endl;
 
    return 0;
}