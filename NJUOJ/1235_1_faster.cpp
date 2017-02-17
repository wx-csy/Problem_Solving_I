#include <iostream>
#include <cstdio> // using sprintf

using namespace std;

int cnt0(int n){
    if (n==-1) return 0;
    char str[100];
    int ans=0;
    int dc;
    int ptr;
    int modular = 1;
    ptr = dc = sprintf(str, "%d", n);
    for (int i=0; i<dc; i++){
        ptr--;
        str[ptr]-='0';
        if (str[ptr]==0) ans+=(n/(modular*10)-1)*modular+n%modular+1;
        if (str[ptr]>0) ans+=(n/(modular*10)-1)*modular+modular;
        modular*=10;
    }
    return ans+1;
}

int cnt(int n, int p){
    if (p==0) return cnt0(n);
    if (n==-1) return 0;
    char str[100];
    int ans=0;
    int dc;
    int ptr;
    int modular = 1;
    ptr = dc = sprintf(str, "%d", n);
    for (int i=0; i<dc; i++){
        ptr--;
        str[ptr]-='0';
        if (str[ptr]<p) ans+=n/(modular*10)*modular;
        if (str[ptr]==p) ans+=n/(modular*10)*modular+n%modular+1;
        if (str[ptr]>p) ans+=n/(modular*10)*modular+modular;
        modular*=10;
    }
    return ans;
}

int main(){
    int c, m, n, p;
    cin >> c;
    while (c--){
        cin >> m >> n >> p;
        cout << cnt(n, p) - cnt(m-1, p) <<endl;
    }
    return 0;
}
