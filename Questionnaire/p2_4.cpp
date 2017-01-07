// method 4

#include <iostream>

using namespace std;

struct mat{
    int a11, a12, a21, a22;
};

mat mmult(mat mat1, mat mat2){
    mat result;
    result.a11=mat1.a11*mat2.a11+mat1.a12*mat2.a21;
    result.a12=mat1.a11*mat2.a12+mat1.a12*mat2.a22;
    result.a21=mat1.a21*mat2.a11+mat1.a22*mat2.a12;
    result.a22=mat1.a21*mat2.a12+mat1.a22*mat2.a22;
    return result;
}

mat pow(int n){
    mat x,result;
    x.a11=1;
    x.a12=1;
    x.a21=1;
    x.a22=0;
    result=x;
    result.a22=1;

    while(n!=0)
    {
        if(n&1)
            result=mmult(result,x);
        x=mmult(x,x);
        n>>=1;
    }
    return result;
}

int main(){
    int n;
    cout<<"Please input n: ";
    cin>>n;
    cout<<"f(n)=";
    if (n==1 || n==2)
        cout<<1<<endl;
    else
        cout<<pow(n-2).a11<<endl;
    return 0;
}
