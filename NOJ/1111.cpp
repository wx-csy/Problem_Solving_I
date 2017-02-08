#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int  a=0, b=0, d=0, o=0;
string str;
int main(){
	getline(cin, str);
	for (const char* c=str.c_str(); *c!=0; c++){
        if (isalpha(*c)) a++;
        else if(*c==' ') b++;
        else if(isdigit(*c)) d++;
        else o++;
	}
    cout<<a<<' '<<d<<' '<<b<<' '<<o;
	return 0;
}
