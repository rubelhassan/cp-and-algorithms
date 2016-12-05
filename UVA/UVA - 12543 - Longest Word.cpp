/**
 * rubelhassan
 * 20 Nov 2016
 */

#include<iostream>
#include<string>

using namespace std;

bool isAlpha(char a){
    if(a>=65&&a<=90) return true;
    if(a>=97&&a<=122) return true;
    if(a == '-') return true;
    return false;
}
int main(){

    string in, best="";
    int cur = 0, temp=0;

    while(cin>>in){
        if(in == "E-N-D") break;
        temp = 0;
        for(int i=0; i<in.length(); i++){
            if(isAlpha(in[i])) temp++;
        }

        if(temp > cur) {
            best=in;
            cur = temp;
        }
    }

    for(int i=0; i<best.length(); i++){
            if(isAlpha(best[i])) cout<<(char)tolower(best[i]);
        }

    cout<<endl;

    return 0;
}

