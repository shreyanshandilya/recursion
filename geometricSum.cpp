#include<bits/stdc++.h>
using namespace std;

double geometricSum(int n) {
    if(n==0) return 1;

    double smallAns = geometricSum(n-1);

    return smallAns + 1.0/pow(2,n);
}

int main() {
    int n;
    cin >> n;
    cout << geometricSum(n);
    return 0;
}