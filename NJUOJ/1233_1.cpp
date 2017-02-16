#include <iostream>
#include <string>
using namespace std;

typedef unsigned int uint;
const uint ZEROx = 22<<20;
const uint ZEROy = 80<<20;

int round;
bool world[22][80];
bool nworld[22][80];

inline bool World(uint x, uint y){
    return world[x%22][y%80];
}

void loadData(){
    string str;
    cin>>round;
    getline(cin, str);
    for (int i=0; i<22; i++){
        getline(cin, str);
        for (int j=0; j<80; j++){
            world[i][j] = (str[j]=='*');
        }
    }
}

void printAnswer(){
    for (int i=0; i<22; i++){
        for (int j=0; j<80; j++)
            cout<<(world[i][j]?'*':' ');
        cout<<endl;
    }
}

int main(){
    int cnt;
    loadData();
    while (round){
        round--;
        for (uint i=ZEROx; i<ZEROx+22; i++){
            for (uint j=ZEROy; j<ZEROy+80; j++){
                cnt=0;
                if (World(i-1, j)) cnt++;
                if (World(i+1, j)) cnt++;
                if (World(i, j-1)) cnt++;
                if (World(i, j+1)) cnt++;
                if (World(i-1, j-1)) cnt++;
                if (World(i-1, j+1)) cnt++;
                if (World(i+1, j-1)) cnt++;
                if (World(i+1, j+1)) cnt++;
                if (World(i, j)){
                    nworld[i%22][j%80] = (cnt==2 || cnt==3);
                } else {
                    nworld[i%22][j%80] = (cnt==3);
                }
            }
        }
        swap(world, nworld);
    }
    printAnswer();
    return 0;
}
