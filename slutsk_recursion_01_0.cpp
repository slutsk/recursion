#include <iostream>
using namespace std;
void print_hello(int k){
    if(k == 0) return;
    cout << "Hello!" << "\n";
    print_hello(k-1);
}

int main() {
   int n;
   cin >> n;
   print_hello(n);
}
