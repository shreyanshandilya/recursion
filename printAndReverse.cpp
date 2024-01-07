#include<bits/stdc++.h>
using namespace std;

void print(char a[]) {
    if(a[0]=='\0') return;
    cout << a[0];
    print(a+1);
}

void printReverse(char a[]) {
    if(a[0]=='\0') return;
    printReverse(a+1);
    cout << a[0];
}

int main() {
    char input[] = "z";
    print(input);
    return 0;
}