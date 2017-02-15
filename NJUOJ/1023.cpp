#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
using namespace std;

#define NO_PARENT INT_MIN
struct point{
    bool visited;
    int parent;
};

map<int, int> _id;
int ncnt=0;
struct {
    int operator [](int x){
        if (_id.find(x) != _id.end()){
            return _id[x];
        } else {
            return _id[x]=ncnt++;
        }
    }
} id;

bool cond1 = true;
bool cond2 = true;

vector<int>* edge;
typedef vector<int>::iterator vit;
int* parent;

int depth(int x){
    int t=1;
    for (vit it=edge[x].begin(); it!=edge[x].end(); it++){
        t=max(t, depth(*it)+1);
    }
    return t;
}

int main(){
    int n;
    int x, y;
    cin>>n;
    edge = new vector<int>[2*n];
    parent = new int[2*n];
    fill(parent, parent+2*n, NO_PARENT);
    for (int i=0; i<n; i++){
        cin>>x>>y;
        x=id[x];
        y=id[y];
        if (parent[y]!=NO_PARENT && parent[y]!=x)
            cond2=false;
        parent[y]=x;
        edge[x].push_back(y);
    }
    int cnt=0, root;
    for (int i=0; i<ncnt; i++){
        if (parent[i]==NO_PARENT) cnt++, root=i;
    }
    if (cnt==0 || cnt>1) cond1 = false;
    if (cond1 && cond2){
        cout<<"tree "<<depth(root);
    } else if (!cond1){
        cout<<"not tree 1"<<endl;
    } else{
        cout<<"not tree 2"<<endl;
    }
    delete[] parent;
    delete[] edge;
    return 0;
}
