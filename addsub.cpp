#include <iostream>

using namespace std;

int main(){
    int n,a,b;
    cin >> a;
    cin >> b;
    n=a+b;
    cout << "Enter 1 to add and 2 to substract ";
    cin >> n;
    if(n==1)
    cout << a+b;
    else if(n==2)
    cout << a-b;

    return 0;
}