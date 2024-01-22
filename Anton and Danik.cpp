#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << (count(s.begin(), s.end(), 'A') > n / 2 ? "Anton" : count(s.begin(), s.end(), 'D') > n / 2 ? "Danik" : "Friendship");
}