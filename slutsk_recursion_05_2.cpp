#include<iostream>
using namespace std;
int sum_of_digits(int index, string s){
    if( index == s.length() ) return 0;
    return s[index] - '0' + sum_of_digits(index+1, s);
}
int main(){
    string s;
    cin >> s;
    cout << sum_of_digits(0, s);
    return 0;
}
