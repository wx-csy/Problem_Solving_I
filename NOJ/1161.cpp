#include <iostream>
#include <algorithm>

using namespace std;

int a[6], b[8];
int r[8];
int main(){
    for (int i=0; i<6; i++) cin>>a[i];
    for (int i=0; i<8; i++) cin>>b[i];
    sort(a,a+6); sort(b,b+8);
    int* k=set_intersection(a,a+6,b,b+8,r);
    for (int *j=r; j!=k; j++) cout<<*j<<endl;
    return 0;
}
