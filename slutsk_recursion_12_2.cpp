#include<iostream>
using namespace std;
int a[100]={0};    // global
int sum_elem_arr(int n){
   if(n == -1) return 0;
   return a[n] + sum_elem_arr(n-1);
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];
    cout << sum_elem_arr(n-1);
    return 0;
}
