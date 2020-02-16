#include<iostream>
using namespace std;
int n;
int arr[100];
void print_arr(int index){
    cout << n << " = " << arr[0];
    for(int i = 1; i < index; i++) cout <<" + " << arr[i];
    cout << endl;
}
void rec(int index, int sum, int L){
   if(sum == n) {print_arr(index); return;}
   for(int i = L; i <= n - sum; i++){
       arr[index] = i;
       rec(index + 1, sum + i, i);
   }

}

int main(){
    cin >> n;
    rec(0, 0, 1);
    return 0;
}
