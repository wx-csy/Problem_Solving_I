#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char a[128]={0};
char b[128]={0};
int la, lb;
char ans[128]={0};

int compare(){
    if (la<lb) return 1;
    if (la>lb) return 3;
    for (int i=la-1; i>=0; i--){
        if (a[i]<b[i]) return 1;
        if (a[i]>b[i]) return 3;
    }
    return 2;
}

void borrow(int i){
    if (a[i]==0){
        borrow(i+1);
        a[i]=9;
    } else {
        a[i]--;
    }
}

void sub(int i, int x){
    if (a[i]<x){
        borrow(i+1);
        a[i]=a[i]+10-x;
    } else {
        a[i]-=x;
    }
}

int main(){
    cin >> a >> b;
    la = strlen(a);
    lb = strlen(b);
    for (int i=0; (i+1)*2 <= la; i++)
        swap(a[i], a[la-i-1]);
    for (int i=0; (i+1)*2 <= lb; i++)
        swap(b[i], b[lb-i-1]);
    for (int i=0; i<la; i++)
        a[i]-='0';
    for (int i=0; i<lb; i++)
        b[i]-='0';

    switch (compare()){
    case 1:{ //less
        cout<<'-';
        for (int i=0; i<128; i++)
            swap(a[i], b[i]);
        swap(la, lb);
        break;
    }
    case 2:{ //equal
        cout<<0<<endl;
        break;
    }
    case 3:{ //greater
        break;
    }
    }
    for (int i=lb-1; i>=0; i--){
        sub(i, b[i]);
    }
    int t=la-1;
    while (a[t]==0) t--;
    for (; t>=0; t--)
        cout<<(char)('0'+a[t]);
    cout<<endl;
    return 0;
}
