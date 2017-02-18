#include <iostream>
#include <algorithm>
using namespace std;

int m;
int remain[128];

int n;
int students[10000];

int main(){
    int ptr;
    int time = 0;
    int* minele;
    int minn;
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> students[i];
    for (int i=0; i<m; i++) remain[i] = students[i];
    ptr = m;
    while (ptr!=n){
        minele = min_element(remain, remain+m);
        minn=*minele;
        time+=minn;
        for (int i=0; i<m; i++){
            remain[i]-=minn;
        }
        *minele = students[ptr];
        ptr++;
    }
    time += *max_element(remain, remain+m);
    cout<<time<<endl;
    return 0;
}
