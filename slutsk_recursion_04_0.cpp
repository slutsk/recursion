#include<iostream>
using namespace std;
int sum(int n, int m){
    if(m == 0) return n;
    return sum(n+1, m-1);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
    return 0;
}
