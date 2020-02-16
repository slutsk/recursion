#include<iostream>
using namespace std;
int n;
string brackets(20, ' ');
void print_brackets(){
    for(int i = 0; i < 2*n; i++) cout << brackets[i];
    cout << endl;
}
void brackets_generator(int index, int balance){
    if(index == 2*n){
        if(balance ==0) print_brackets();
        return;
    }
    brackets[index] = '(';
    brackets_generator(index+1, balance+1);
    if(balance == 0 || balance > n) return;
    brackets[index] = ')';
    brackets_generator(index+1, balance-1);

}

int main(){
    cin >> n;
    brackets_generator(0, 0);
    return 0;
}
