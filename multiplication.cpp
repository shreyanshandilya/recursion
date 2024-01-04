#include<bits/stdc++.h>
using namespace std;

int multiply(int a, int n) {
    if(n==0) return 0;
    return a + multiply(a,n-1);
}

int main() {
    int a;
    cin >> a;
    int n;
    cin >> n;
    cout << multiply(a,n);
    return 0;
}