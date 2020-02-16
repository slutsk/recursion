#include<iostream>
using namespace std;
int n;
string s = "()";
string brackets(10, ' ');
bool is_true(string str){
   int  b = 0;
   for(int i=0; i< 2*n; i++){
       if(str[i]=='(') b++;
       else b--;
       if(b < 0) return false;
   }
   return b == 0;
}

void print_brackets(){
    for(int i = 0; i < 2*n; i++) cout << brackets[i] << " ";
    cout << endl;
}
void brackets_generator(int index){
    if(index==2*n){
        if(is_true(brackets)) print_brackets();
        return;
    }
    for(int i = 0; i < 2; i++){
        brackets[index] = s[i];
        brackets_generator(index+1);
    }
}

int main(){
    cin >> n;
    brackets_generator(0);
    return 0;
}

