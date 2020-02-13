#include<iostream>
using namespace std;
bool is_power_of_two(int n){
   if(n==1) return true;
   if(n%2) return false;
   return is_power_of_two(n/2);
}
int main(){
    int n;
    cin >> n;
    cout <<(is_power_of_two(n)? "YES":"NO");
    return 0;
}
