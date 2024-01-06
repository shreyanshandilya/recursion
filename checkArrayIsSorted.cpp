#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n) {
    if(n==0 || n==1) {
        return true;
    }
    if(a[0]>a[1]) return false;
    return isSorted(a+1,n-1);
}

bool isSorted2(int a[], int n) {
    if(n==0 || n==1) {
        return true;
    }
    if(a[n-2]>a[n-1]) return false;
    return isSorted(a, n-1);
}

int main() {
    int a[] = {1,2,4,3};
    cout << isSorted2(a,4);
}