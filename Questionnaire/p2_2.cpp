// method 2

#include <iostream>

using namespace std;

int fib[100];

int main(){
    int n;
    cout<<"Please input n: ";
    cin>>n;
    fib[1]=fib[2]=1;
    for (int i=3;i<=n;i++)
        fib[i]=fib[i-1]+fib[i-2];
    cout<<"f(n)="<<fib[n]<<endl;
    return 0;
}
