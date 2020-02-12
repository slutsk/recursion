#include<iostream>
using namespace std;
long long fact(int n){
    if(n==0 or n==1) return 1;
    return n * fact(n-1);
}
int main(){
    int k;
    cin >> k;
    cout << fact(k);
    return 0;
}
