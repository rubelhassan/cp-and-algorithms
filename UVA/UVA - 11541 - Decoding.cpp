#include<iostream>
#include<string>

using namespace std;


int main(){

    string in;

    int tc;

    cin>>tc;

    for(int i=1; i<=tc; i++){
        cin>>in;
        char c;
        int total = 0, mul=0;
        cout<<"Case "<<i<<": ";
        for(int j=0; j<=in.length(); ){
            if(in[j] >= '0' && in[j] <= '9'){
                while(in[j] >= '0' && in[j] <= '9'){
                    mul = (mul * 10) + (in[j]-'0');
                    j++;
                }
                for(int k=0; k<mul; k++){
                    cout<<c;
                }
                mul = 0;
            }else{
                c = in[j];
                j++;
            }
        }

        cout<<endl;
    }

    return 0;
}
