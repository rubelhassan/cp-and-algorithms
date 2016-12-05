/**
 * rubelhassan
 * 24 Nov 2016
 */

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    int tc;

    cin>>tc;

    string con, jud, tem;

    bool isSpace;

    cin.ignore();

    for(int i=1; i<=tc; i++){
        getline(cin, con, '\n');
        getline(cin, jud, '\n');

        string tem = "";
        isSpace = false;

        for(int i=0; i<con.length(); i++){
            if(con[i] == ' ') { isSpace = true; continue; }
            tem += con[i];
        }

        if(tem == jud && !isSpace){
            cout<<"Case "<<i<<": Yes"<<endl;
        }else if(tem == jud){
            cout<<"Case "<<i<<": Output Format Error"<<endl;
        }else{
            cout<<"Case "<<i<<": Wrong Answer"<<endl;
        }
    }

    return 0;
}
