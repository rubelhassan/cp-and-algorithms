#include<bits/stdc++.h>
using namespace std;
string one = "AEHIJLMOSTUVWXYZ12358",
       two = "A3HILJMO2TUVWXY51SEZ8";
string findPalindrome(string it);
string findMirror(string it,int siz);
int main(){
    int t;
    string in,no1,no2,out1,out2;bool isPal = false,isMir = false;
    while(getline(cin,in)){
            out1 = in;
            out2 = in;
            int len = in.length();
            no1 = findPalindrome(out1);
            if(no1 == in){
                isPal = true;
            }
            no2 = findMirror(out2,len);
            if(no2 == in){
                isMir = true;
            }
            if(isPal && isMir){
                cout<<in<<" -- is a mirrored palindrome."<<endl;
            }else if(isPal){
                cout<<in<<" -- is a regular palindrome."<<endl;
            }else if(isMir){
                cout<<in<<" -- is a mirrored string." <<endl;
            }else{
                cout<<in<<" -- is not a palindrome." <<endl;
            }
            isPal = isMir = false;

    }
}
string findPalindrome(string it){
    reverse(it.begin(),it.end());
    cout<<it<<endl;
    return it;
}
string findMirror(string it,int siz){
    for(int i=0;i<siz;i++){
        size_t pos = one.find(it[i]);
        if( pos != string::npos ){
            it[i] = one[pos];
        }

    }
    //reverse(it.begin(),it.end());
    cout<<it<<endl;
    return it;
}
