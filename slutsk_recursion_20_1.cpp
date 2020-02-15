#include <iostream>
using namespace std;
int arr[10];
bool yOn[10]={false};
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
    for(int i = 0; i < n; i++){
        if(yOn[i] == true) continue;
        yOn[i] = true;
        arr[index] = i+1;
        rec(index+1);
        yOn[i] = false;
    }
}

int main(){
    cin >> n;
    rec(0);
    return 0;
}

