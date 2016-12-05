/**
 * rubelhassan
 * 16 Nov 2016
 */

#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;


int main(){

    map<char, char> table;
    table['A'] = 'A';
    table['E'] = '3';
    table['H'] = 'H';
    table['I'] = 'I';
    table['J'] = 'L';
    table['L'] = 'J';
    table['M'] = 'M';
    table['O'] = 'O';
    table['S'] = '2';
    table['T'] = 'T';
    table['V'] = 'V';
    table['U'] = 'U';
    table['W'] = 'W';
    table['X'] = 'X';
    table['Y'] = 'Y';
    table['Z'] = '5';
    table['1'] = '1';
    table['2'] = 'S';
    table['3'] = 'E';
    table['5'] = 'Z';
    table['8'] = '8';

    string in, rev, mir;

    bool isPal = false, isMir = false;

    while(cin>>in){
        rev = in;
        isPal = false; isMir = false;
        reverse(rev.begin(), rev.end());

        if(in == rev) isPal = true;

        mir = "";
        for(int i=in.length()-1; i>=0; i--){
            map<char, char>::iterator it = table.find(in[i]);
            if(it != table.end()){
                mir += it->second;
            }
        }

        if(in == mir) isMir = true;

        if(isPal && isMir){
            cout<<in<<" -- is a mirrored palindrome."<<endl;
        }else if(isPal && !isMir){
            cout<<in<<" -- is a regular palindrome."<<endl;
        }else if(!isPal && isMir){
            cout<<in<<" -- is a mirrored string."<<endl;
        }else{
            cout<<in<<" -- is not a palindrome."<<endl;
        }

        cout<<endl;
    }
}
