#include<bits/stdc++.h>
using namespace std;

int numberOfSteps(int n) {
    if(n==0 || n==1) return 1;
    if(n==2) return 2;
    return numberOfSteps(n-1) + numberOfSteps(n-2) + numberOfSteps(n-3);
}

int main() {
    int n;
    cin >> n;
    cout << numberOfSteps(n);
    return 0;
}

