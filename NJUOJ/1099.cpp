#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct edge{
    int u, v, w;

    int operator < (const edge& e) const {
        return w<e.w;
    }
};

vector<edge> v;

long long sum;

int n, m;
int ufs[1000000];

int u_find(int x){
    if (ufs[x]==x) return x;
    return ufs[x]=u_find(ufs[x]);
}

int u_union(int x, int y){
    int px,py;
    if ((px=u_find(x))==(py=u_find(y))){
        return false;
    } else {
        ufs[px]=py;
        return true;
    }
}

void work(){
    int done=0;
    edge e;
    v.clear();
    sum=0;
    cin>>n>>m;
    for (int i=1; i<=n; i++) ufs[i]=i;
    for (int i=0; i<m; i++){
        cin>>e.u>>e.v>>e.w;
        v.push_back(e);
    }
    sort(v.begin(), v.end());
    for (vector<edge>::iterator it=v.begin(); it!=v.end(); it++){
        if (u_union(it->u, it->v)){
            sum+=it->w;
            done++;
            if (done==n-1) break;
        }
    }
    cout<<sum<<endl;
}

int main(){
    int ccase;
    cin >> ccase;
    for (int i=0; i<ccase; i++)
        work();
    return 0;
}
