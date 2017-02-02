#include <iostream>
#include <iomanip>
using namespace std;

double fact(double x){
    if (x<=1.0) return 1.0;
    return x*fact(x-1);
}

int main(){
	double a=0;
	for (int i=1;i<=30;i++)
        a+=fact(i);
    cout<<scientific<<setprecision(2)<<a;
	return 0;
}
