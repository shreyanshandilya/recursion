#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    if(n==0) return;
    print(n-1);
    cout << n << " ";
    return;
}

void printReverse(int n) {
    if(n==0) return;
    cout << n << " ";
    printReverse(n-1);
    return;
}

int main() {
    int n;
    cin >> n;
    print(n);
    cout << endl;
    printReverse(n);
    return 0;
}


