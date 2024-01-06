#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int a[], int s, int e) {
    if(s>e) return true;
    if(a[s]==a[e]) return checkPalindrome(a,s+1,e-1);
    return false;
}

int main() {
    int a[] = {1,2,0,1};
    cout << checkPalindrome(a,0,3);
    return 0;
}