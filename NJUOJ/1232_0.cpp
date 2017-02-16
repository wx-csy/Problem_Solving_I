#include <iostream>
using namespace std;
char str[128];
int n;
char c;

void nop(){}
void o_c(){cout<<c;}
void o_o(){cout<<'o';}
void o_oc(){cout<<'o'<<c;}
void o_ogc(){cout<<'o'<<'g'<<c;}
void o_s(){cout<<"***";}
void o_sc(){cout<<"***"<<c;}
void o_sgc(){cout<<"***"<<'g'<<c;}

// trans: 0='o', 1='g', 2=else
const int automaton[5][3] =
{
    {1, 0, 0},
    {1, 2, 0},
    {3, 0, 0},
    {1, 4, 0},
    {3, 0, 0}
};
void (*const action[5][3])() =
{
    {nop, o_c, o_c},
    {o_o, nop, o_oc},
    {nop, o_ogc, o_ogc},
    {o_s, nop, o_sc},
    {nop, o_sgc, o_sgc}
};
int main(){
    int state = 0;
    int trans;
    cin>>n;
    for (int i=0; i<=n; i++){
        if (i<n) cin>>c; else c= '\n';
        switch (c){
        case 'o': trans=0; break;
        case 'g': trans=1; break;
        default: trans=2; break;
        }
        action[state][trans]();
        state=automaton[state][trans];
    }
    return 0;
}
