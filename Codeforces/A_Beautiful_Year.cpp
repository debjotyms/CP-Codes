#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int year;
    cin>>year;
    int a,b,c,d;
 
    while(true){
        year++;
        a = year/1000;
        b = year/100%10;
        c = year/10%10;
        d = year%10;
 
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout<<year;
    return 0;
}