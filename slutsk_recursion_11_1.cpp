#include <bits/stdc++.h>
using namespace std;
long long rec(int a, int n){
    if(n==0) return 1;
    long long k = rec(a, n/2);
    return n%2 ? a*k*k: k*k;
}
int main(){
   int a, b;
   cin >> a >> b;
   cout << rec(a, b);
}
