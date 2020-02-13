#include<iostream>
using namespace std;
bool is_power_of_two(int n){
   if(n==1) return true;
   return n%2 == 0 and is_power_of_two(n/2);
}
int main(){
    int n;
    cin >> n;
    cout <<(is_power_of_two(n)? "YES":"NO");
    return 0;
}
