#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

string str;
int freq[26]={0};

bool isprime(int x){
    if (x<=1) return false;
    for (int i=2; i*i<=x; i++){
        if (x%i==0) return false;
    }
    return true;
}

int main(){
    int diff;
    cin>>str;
    for (string::iterator it=str.begin(); it!=str.end(); it++){
        freq[*it-'a']++;
    }

    diff=*max_element(freq, freq+26);
    for (int i=0; i<26; i++){
        if (freq[i]==0) freq[i]=INT_MAX;
    }
    diff-=*min_element(freq, freq+26);
    if (isprime(diff)){
        cout<<"Lucky Word"<<endl;
        cout<<diff<<endl;
    } else {
        cout<<"No Answer"<<endl;
        cout<<0<<endl;
    }

    return 0;
}
