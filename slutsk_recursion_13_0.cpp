#include<iostream>
using namespace std;
void numbers(int n){
   if(n == 0) return;
   numbers(n-1);
   cout << n << ' ';
}
int main(){
    int n;
    cin >> n;
    numbers(n);
    return 0;
}
