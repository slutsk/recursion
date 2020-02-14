#include<iostream>
using namespace std;
int sum_elem_arr(int arr[], int n){
   if(n == -1) return 0;
   return arr[n] + sum_elem_arr(arr, n-1);
}
int main(){
    int a[100]={0}, n;
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    cout << sum_elem_arr(a, n-1);
    return 0;
}
