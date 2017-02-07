#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int n;
string str;
int main(){
    getline(cin, str);
    n=atoi(str.c_str());
    for (int i=0;i<n;i++){
        getline(cin, str);
        cout<<str<<endl<<endl;
    }
    while(cin>>str) cout<<str<<endl<<endl;
    return 0;
}
