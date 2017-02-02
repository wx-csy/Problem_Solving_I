#include <iostream>
#include <cctype>
using namespace std;

char str[100];

int main(){
    int cnt=0;
    int ptr;
    int num1;
    int symb;
    int num2;
    int ans;
    while (cin>>str){
        ptr=num1=num2=ans=0;
        while (isdigit(str[ptr])){
            num1=num1*10+str[ptr]-'0';
            ptr++;
        }
        if (str[ptr]=='+') symb=1;
        if (str[ptr]=='-') symb=-1;
        ptr++;
        while (isdigit(str[ptr])){
            num2=num2*10+str[ptr]-'0';
            ptr++;
        }
        ptr++;
        if (str[ptr]=='?') continue;
        while (isdigit(str[ptr])){
            ans=ans*10+str[ptr]-'0';
            ptr++;
        }
        if (num1+symb*num2==ans) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
