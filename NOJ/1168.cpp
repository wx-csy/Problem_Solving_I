#include <iostream>
using namespace std;

int n;
int* arr;
int* temp;

void loaddata(){
    cin>>n;
    arr=new int[n];
    temp=new int[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
}

void mergesort(int l, int r){
    if (l >= r) return;
    int mid=(l+r)/2;
    int i, j, c;
    mergesort(l, mid);
    mergesort(mid+1, r);
    i=l; j=mid+1;
    c=0;
    while (i<=mid && j<=r){
        if (arr[i]<arr[j]){
            temp[c]=arr[i];
            i++;
        } else {
            temp[c]=arr[j];
            j++;
        }
        c++;
    }
    while (i<=mid){
        temp[c]=arr[i];
        i++; c++;
    }
    while (j<=r){
        temp[c]=arr[j];
        j++; c++;
    }
    for (int p=0; p<c; p++)
        arr[l+p]=temp[p];
    return;
}


int main(){
    loaddata();
    mergesort(0, n-1);
    for (int i=0; i<n; i++){
        cout<<arr[i];
        if (i!=n-1) cout<<' ';
    }
    return 0;
}
