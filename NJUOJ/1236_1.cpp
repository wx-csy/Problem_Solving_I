#include <iostream>
using namespace std;

int n;
int coe[128];
void printbody(int x){
    if (x==0) return;
    if (x==1) {
        cout<<"x";
        return;
    }
    if (x>=2){
        cout<<"x^"<<x;
    }
}
int main(){
    int ptr=0;
    cin>>n;
    for (int i=0; i<=n; i++) cin>>coe[i];
    while (coe[ptr]==0 && ptr<=n) ptr++;
    if (ptr>n){
        cout<<0<<endl;
        return 0;
    }
    if (coe[ptr]==1) {
    } else if (coe[ptr]==-1) {
        cout<<'-';
    } else cout<<coe[ptr];
    printbody(n-ptr);
    ptr++;
    while (ptr<=n){
        while (coe[ptr]==0 && ptr<=n) ptr++;
        if (ptr>n){
            cout<<endl;
            return 0;
        }
        if (coe[ptr]==1){
            cout<<'+';
        } else if (coe[ptr]==-1){
            cout<<'-';
        } else if (coe[ptr]>0){
            cout<<'+'<<coe[ptr];
        } else {
            cout<<coe[ptr];
        }
        if (ptr==n && (coe[ptr]==1 || coe[ptr]==-1)){
            cout<<1;
        } else printbody(n-ptr);
        ptr++;
    }
    cout<<endl;
    return 0;
}
