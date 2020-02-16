#include<iostream>
using namespace std;
bool is_true(string s){
   int open=0, close=0;
   for(int i=0; i< s.length(); i++){
       if(s[i]=='(') open++;
       if(s[i]==')') close++;
       if(close>open) return false;
   }
   return open==close;
}
int main(){
    string s;
    cin >> s;
    cout << (is_true(s) ? "Yes":"No");
    return 0;
}
