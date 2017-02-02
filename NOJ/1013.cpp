#include <iostream>
using namespace std;

char str[1000];
int num[1000];
int n;
int temp;

int main(){
    while(true){
        cin>>str;
        if(str[0]=='0' && str[1]==0) break;
        for (int i=0;str[i]!=0;i++){
            num[i]=str[i]-'0';
            n=i;
        }
        n++;
        temp=0;
        for (int i=0;i<n;i++){
            temp=(temp*10+num[i])%17;
        }
        cout<<(temp==0?1:0)<<endl;
    }
    return 0;
}
