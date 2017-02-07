#include <iostream>

using namespace std;

int n;
int main(){
    cin>>n;
    for (int i=2; i<=n; i++){
        for (int j=2; j*j<=i; j++){
            if (i%j==0) goto cont;
        }
        cout<<i<<endl;
cont:;
    }
    return 0;
}
