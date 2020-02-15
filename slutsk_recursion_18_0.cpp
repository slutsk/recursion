#include <iostream>
using namespace std;
int arr[10]={0};
int n;
void print_array(){
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << "\n";
}
void rec(int index){
    if(index == n){
        print_array();
        return;
    }
    for(int i = 1; i <= n; i++){
        arr[index] = i;
        rec(index+1);
    }

}

int main(){
    cin >> n;
    rec(0);
    return 0;
}

