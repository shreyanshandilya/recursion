#include<bits/stdc++.h>
using namespace std;

int length(char a[]) {
    if(a[0]=='\0') {
        return 0;
    }
    return 1 + length(a+1);
}

int main() {
    char a[] = "a";
    cout << length(a);
    return 0;
}