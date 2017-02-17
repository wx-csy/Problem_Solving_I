#include <iostream>
#include <vector>
#include <string>
using namespace std;

string v[256];
int cur = 0;
int top = 0;

int main(){
    string command;
    v[0]="http://www.acm.org/";
    ios::sync_with_stdio(false);
    while (true){
        cin >> command;
        if (command == "QUIT") return 0;
        if (command == "VISIT"){
            cur++;
            cin >> v[cur];
            cout << v[cur] << endl;
            top = cur;
        }
        if (command == "BACK"){
            if (cur <= 0){
                cout << "Ignored" << endl;
            } else {
                cur--;
                cout << v[cur] << endl;
            }
        }
        if (command == "FORWARD"){
            if (cur >= top){
                cout << "Ignored" << endl;
            } else {
                cur++;
                cout << v[cur] << endl;
            }
        }
    }
    return 0;
}
