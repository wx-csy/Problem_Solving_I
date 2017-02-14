#include <iostream>
#include <map>
using namespace std;

map<long long, int> m;
int n;
int main(){
    long long x;
    map<long long, int>::iterator it;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        it=m.find(x);
        if (it!=m.end()){
            it->second++;
        } else {
            m[x]++;
        }
    }
    for (it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<' '<<it->second<<endl;
    }
    return 0;
}
