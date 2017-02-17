#include <iostream>
#include <cstdio> // using sprintf

using namespace std;

int c, m, n, p;
char str[100];
int cnt;

int main(){
    cin >> c;
    while (c--){
        cin >> m >> n >> p;
        cnt=0;
        for (int i=m; i<=n; i++){
            sprintf(str, "%d", i);
            for (int j=0; str[j]!=0; j++){
                if (str[j]==p+'0') cnt++;
            }
        }
        cout << cnt <<endl;
    }
    return 0;
}
