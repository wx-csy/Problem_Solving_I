// method 1

#include <iostream>

using namespace std;

int fib(int i){
    if (i==1 || i==2) return 1;
    return fib(i-1)+fib(i-2);
}

int main(){
    int n;
    cout<<"Please input n: ";
    cin>>n;
    cout<<"f(n)="<<fib(n)<<endl;
    return 0;
}
