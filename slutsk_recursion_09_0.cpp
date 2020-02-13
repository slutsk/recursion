#include<iostream>
using namespace std;
void print_the_digits(string s, int pos){
   if( pos == s.length() ) return;
   cout << s[pos] << ' ';
   print_the_digits(s, pos+1);
}
int main(){
    string str;
    cin >> str;
    print_the_digits(str, 0);
    return 0;
}
