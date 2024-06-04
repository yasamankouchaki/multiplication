//Multiplier of arbitrary number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"pleas Enter number:";
    cin>>num;
    for(int i=0;i<=100;i++){
        cout<<'i'<<'*'<<'num'<<'='<<
        (num*i)<<'\n';
    }
    return 0;
}
