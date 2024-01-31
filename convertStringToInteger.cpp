#include<bits/stdc++.h>
using namespace std;

int length(char input[]) {
    if(input[0]=='\0') return 0;
    return 1+length(input+1);
}

int convertStringToInteger(char str[], int n) {
    if(n==0) return 0;
    int prev = convertStringToInteger(str, n-1);
    int q = str[n-1]-'0';
    return prev*10 +q;
}

int main() {
    char a[] = "1234";
    int n = length(a);
    cout << convertStringToInteger(a, n);
    return 0;
}