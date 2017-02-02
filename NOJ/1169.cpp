#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n=0;
vector<int> arr;

void loaddata(){
    int x;
    while (cin>>x){
        n++;
        arr.push_back(x);
    }
}

int main(){
    loaddata();
    sort(arr.begin(), arr.end());
    for (vector<int>::iterator vit=arr.begin(); vit!=arr.end(); vit++)
        cout<<*vit<<' ';
    return 0;
}
