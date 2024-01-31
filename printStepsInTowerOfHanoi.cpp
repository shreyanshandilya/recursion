#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char s, char h, char d) {
    if(n==0) return;
    towerOfHanoi(n-1,s,d,h);
    cout << "Performing " << n << " " << s << " to " << d << endl;
    towerOfHanoi(n-1,h,s,d);  
}

int main() {
    towerOfHanoi(3,'A','B','C');
    return 0;
}