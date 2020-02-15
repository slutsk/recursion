#include <iostream>
using namespace std;
void hon(int n, int start, int finish){
    if(n==0) {return;}
    int tmp = 6 - start - finish;
    hon(n-1, start, tmp);
    cout << start << " --> " << finish <<"\n";
    hon(n-1, tmp, finish);
}

int main(){
    int n;
    cin >> n;
    hon(n, 1, 3);
    return 0;
}

