#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double pi=atan(1)*4.0;
int main(){
    double a;
    for (int i=1; i<10; i++){
        a=i*i*pi;
        if (40 <= a && a <= 90){
            cout<<"r="<<i;
            cout<<" area=";
            cout<<fixed<<setprecision(2)<<a<<endl;
        }
    }
    return 0;
}
