#include<bits/stdc++.h>
using namespace std;

int sumOfArray1(int a[], int n) {
    if(n==0) return 0;
    return a[0] + sumOfArray1(a+1,n-1);
}

int sumOfArray2(int a[], int n) {
    if(n==0) return 0;
    return a[n-1] + sumOfArray2(a, n-1);
}

int main() {
    int a[] = {1,2};
    cout << sumOfArray2(a,2);
    return 0;
}
