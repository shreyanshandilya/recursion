#include<bits/stdc++.h>
using namespace std;

int toh(int n) {
    if(n==0) return 0;
    return toh(n-1) + 1 + toh(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << toh(n);
    return 0;
}

