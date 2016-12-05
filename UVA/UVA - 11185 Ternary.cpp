/**
 * rubel hassan
 * 11 Nov 2016
 */

#include<iostream>
#include<string>
#include <sstream>

using namespace std;

string intToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

string ternary(long long int n){
    if(n==0) return "0";
    if(n==1) return "1";
    if(n==2) return "2";
    return ternary(n/3) + intToString(n%3);
}


int main(){
    long long int n;
    while(cin>>n && n>=0){
        cout<<ternary(n)<<endl;
    }
}
