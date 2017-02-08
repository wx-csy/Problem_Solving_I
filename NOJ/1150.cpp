#include <iostream>
#include <string>
using namespace std;

struct record{
    string id;
    string name;
    int s1;
    int s2;
    int s3;

    friend istream& operator >> (istream& is, record& rc){
        is>>rc.id>>rc.name>>rc.s1>>rc.s2>>rc.s3;
        return is;
    }

    friend ostream& operator << (ostream& os, const record& rc){
        os<<rc.id<<' '<<rc.name<<' '<<rc.s1<<' '<<rc.s2<<' '<<rc.s3<<endl;
        return os;
    }
} ;

int n;
record* rcd;
int main(){
    cin>>n;
    rcd = new record[n];
    for (int i=0; i<n; i++) cin>>rcd[i];


    delete[] rcd;
    return 0;
}
