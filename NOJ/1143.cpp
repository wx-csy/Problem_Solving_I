#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string strs[3];
int main(){
    getline(cin,strs[0]);
    getline(cin,strs[1]);
    getline(cin,strs[2]);
    sort(strs,strs+3);
    cout<<strs[0]<<endl;
    cout<<strs[1]<<endl;
    cout<<strs[2]<<endl;
	return 0;
}
