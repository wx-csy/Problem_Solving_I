#include <iostream>
#include <algorithm>
using namespace std;

int arr[20];
int main(){
    for (int i=0; i<20; i++) cin>>arr[i];
    for (int i=0; i<20; i++)
        for (int j=0; j<20; j++)
            if (i!=j && arr[i]%arr[j]==0){
                cout<<arr[i]<<endl;
                break;
            }
    return 0;
}
