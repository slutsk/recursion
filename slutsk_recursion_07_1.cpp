#include<iostream>
using namespace std;
bool is_palindrome(string s, int start, int finish){
   if( start>=finish ) return true;
   return s[start] == s[finish] && is_palindrome(s, start+1, finish-1);
}
int main(){
    string s;
    cin >> s;
    cout <<(is_palindrome(s, 0, s.length()-1) ? "YES":"NO");
    return 0;
}
