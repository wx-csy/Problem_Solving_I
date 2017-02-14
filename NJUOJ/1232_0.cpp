#include <iostream>
using namespace std;

char str[128];
int n;

int main(){
    int status = 1;
    char c;
    cin>>n;
    for (int i=0; i<=n; i++){
        if (i<n) cin>>c; else c='\n';
        switch (status){
        case 1: {// nothing
            switch (c){
            case 'o': {
                status = 2;
                break;
            }
            default: {
                status = 1;
                cout << c;
            }
            }
            break;
        }
        case 2:{ // o
            switch (c){
            case 'o': {
                status = 2;
                cout << 'o';
                break;
            }
            case 'g': {
                status = 3;
                break;
            }
            default: {
                status = 1;
                cout << 'o' << c;
            }
            }
            break;
        }
        case 3:{ // og
            switch (c){
            case 'o': {
                status = 4;
                break;
            }
            default: {
                status = 1;
                cout << 'o' << 'g' << c;
            }
            }
            break;
        }
        case 4:{ // ***
            switch (c){
            case 'o': {
                status = 2;
                cout << "***";
                break;
            }
            case 'g': {
                status = 5;
                break;
            }
            default: {
                status = 1;
                cout << "***" << c;
            }
            }
            break;
        }
        case 5:{ // ***g
            switch (c){
            case 'o': {
                status = 4;
                break;
            }
            default: {
                status = 1;
                cout << "***" << 'g' << c;
            }
            }
            break;
        }
        }
    }
    return 0;
}
