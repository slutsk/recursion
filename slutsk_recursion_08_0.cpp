#include<iostream>
using namespace std;
void print_the_digits(int n){
   if( n==0 ) return;
   print_the_digits(n/10);
   cout << n%10 << ' ';
}
int main(){
    int n;
    cin >> n;
    print_the_digits(n);
    return 0;
}
