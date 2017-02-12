#include <iostream>
#include <string>
#include <algorithm>
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

    int operator <(const record& re){
        return s1+s2+s3<re.s1+re.s2+re.s3;
    }
} ;

int n;
record* rcd;
int s1s=0, s2s=0, s3s=0;
int main(){
    cin>>n;
    rcd = new record[n];
    for (int i=0; i<n; i++) {
        cin>>rcd[i];
        s1s+=rcd[i].s1;
        s2s+=rcd[i].s2;
        s3s+=rcd[i].s3;
    }
    cout<<s1s/n<<' '<<s2s/n<<' '<<s3s/n<<endl;
    cout<<*max_element(rcd, rcd+n);

    delete[] rcd;
    return 0;
}
