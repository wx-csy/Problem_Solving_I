// method 3

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout<<"Please input n: ";
    cin>>n;
    double fn;
    fn=(pow((1.0d+sqrt(5.0d))/2.0d,n)-pow((1.0d-sqrt(5.0d))/2.0d,n))/sqrt(5.0d);
    cout<<"f(n)="<<int(fn+0.5d)<<endl;
    return 0;
}
