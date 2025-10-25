#include<iostream>
using namespace std;
int main() {
    int sec,days,hours,min;
    cout<<"Enter sec:";
    cin>>sec;
    if (sec>=86400) {
        days=sec/86400;
        cout<<"days:"<<days<<endl;

    }else if (sec>=3600) {
        hours=sec/3600;
        cout<<"hours:"<<hours<<endl;
    }else if (sec>=60) {
        min=sec/60;
        cout<<"min:"<<min<<endl;
        
    }
}
