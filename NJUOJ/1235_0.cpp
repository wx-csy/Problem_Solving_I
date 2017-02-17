#include <iostream>
using namespace std;

int stage[1024][1024];
int n, m;

int rowcnt[1024]={0}, colcnt[1024]={0};
int upfirst[1024], downfirst[1024];
int leftfirst[1024], rightfirst[1024];
int cnt = 0;

int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for (int i=0; i<n; i++)
        for (int j=0;j<m; j++){
            cin>>stage[i][j];
            if (stage[i][j]){
                rowcnt[i]++;
                colcnt[j]++;
            }
        }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (stage[i][j]){
                leftfirst[i]=j;
                break;
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=m-1; j>=0; j--){
            if (stage[i][j]){
                rightfirst[i]=j;
                break;
            }
        }
    }
    for (int j=0; j<m; j++){
        for (int i=0; i<n; i++){
            if (stage[i][j]){
                upfirst[j]=i;
                break;
            }
        }
    }
    for (int j=0; j<m; j++){
        for (int i=n-1; i>=0; i--){
            if (stage[i][j]){
                downfirst[j]=i;
                break;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (rowcnt[i] == 0) continue;
        cnt+=(m-rowcnt[i]-leftfirst[i])+(m-rowcnt[i]-(m-1-rightfirst[i]));
    }
    for (int j=0; j<m; j++){
        if (colcnt[j] == 0) continue;
        cnt+=(n-colcnt[j]-upfirst[j])+(n-colcnt[j]-(n-1-downfirst[j]));
    }
    cout<<cnt<<endl;
    return 0;
}
