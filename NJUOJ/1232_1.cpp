#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> v;
int cur = 0;
int top = 0;

int main(){
    string command;
    v.push_back("http://www.acm.org/");
    while (true){
        cin >> command;
        if (command == "QUIT") return 0;
        if (command == "VISIT"){
            cur++;
            if (v.size() <= cur) v.resize(v.size()+10, "");
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
