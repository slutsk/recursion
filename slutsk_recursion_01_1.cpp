#include <iostream>
using namespace std;
string print_hello(int k){
    if(k == 0) return "";
    return "Hello!\n" + print_hello(k-1);
}

int main() {
   int n;
   cin >> n;
   cout << print_hello(n);
}
