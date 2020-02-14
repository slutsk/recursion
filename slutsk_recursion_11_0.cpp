#include<iostream>
using namespace std;
int power(int a, int n){
   if(n == 0) return 1;
   if(n%2) return a*power(a, n-1);
   int k = power(a, n/2);
   return k*k;
}
int main(){
    int a, n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}
