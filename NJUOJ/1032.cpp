#include <iostream>
#include <algorithm>
using namespace std;
int n;
int* a;
int main(){
    while (cin>>n){
        a=new int[n];
        for (int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        for (int i=0; i<n; i++){
            cout<<a[i]<<(i!=n-1?" ":"");
        }
        cout<<endl;
        delete[] a;
    }
    return 0;
}

