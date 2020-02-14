#include<iostream>
using namespace std;
int sum_elem_arr(int arr[], int s, int n){
   if(n == -1) return s;
   return sum_elem_arr(arr, s+arr[n], n-1);
}
int main(){
    int a[100]={0}, n;
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    cout << sum_elem_arr(a, 0, n-1);
    return 0;
}
