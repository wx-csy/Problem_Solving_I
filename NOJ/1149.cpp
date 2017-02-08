#include <iostream>
#include <string>
using namespace std;

struct record{
    string id;
    string name;
    string s1;
    string s2;
    string s3;

    friend istream& operator >> (istream& is, record& rc){
        is>>rc.id>>rc.name>>rc.s1>>rc.s2>>rc.s3;
        return is;
    }

    friend ostream& operator << (ostream& os, const record& rc){
        os<<rc.id<<','<<rc.name<<','<<rc.s1<<','<<rc.s2<<','<<rc.s3<<endl;
        return os;
    }
} rcd;

int n;
int main(){
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>rcd;
        cout<<rcd;
    }
    return 0;
}
