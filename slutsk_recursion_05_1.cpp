#include<iostream>
using namespace std;
int sum_of_digits(int n){
    if(n == 0) return 0;
    return n%10 + sum_of_digits(n/10);
}
int main(){
    int a;
    cin >> a ;
    cout << sum_of_digits(a);
    return 0;
}
