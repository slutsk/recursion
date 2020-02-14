#include<iostream>
using namespace std;
int C(int n, int m){
   if(n==m or m==0) return 1;
   return C(n-1, m-1) + C(n-1, m);
}
int main(){
    int n, m;
    cin >> n >> m; // n >= m
    cout << C(n, m);
    return 0;
}
