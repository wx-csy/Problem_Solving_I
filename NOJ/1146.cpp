#include <iostream>
#include <cstring>
using namespace std;

bool* arr;
int n;
int c=0;
int main(){
    cin>>n;
    int i=0;
    int p=0;
    arr=new bool[n];
    memset(arr, false, sizeof(bool)*n);
    while (c<n-1){
        while (arr[p%n]!=false) p++;
        i++;
        if (i%3==0){
            arr[p%n]=true;
            c++;
        }
        p++;
    }
    for (i=0; i<n; i++){
        if (arr[i]==false){
            cout<<i+1;
            break;
        }
    }
    delete[] arr;
	return 0;
}
