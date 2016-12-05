/**
 * rubel hassan
 * 24 Nov 2016
 */


#include<iostream>
#include<string>

using namespace std;

int main(){

    string real, madrid;

    int n; bool isTrue = false;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>real>>madrid;
        if(real.length() != madrid.length()){
            cout<<"No"<<endl; continue;
        }

        isTrue = true;

        for(int i=0; i<real.length(); i++){
            if(real[i] == madrid[i]) continue;

            if((real[i] == 'a' || real[i] == 'e' || real[i] == 'i' || real[i] == 'o' || real[i] == 'u')
             && (madrid[i] == 'a' || madrid[i] == 'e' || madrid[i] == 'i' || madrid[i] == 'o' || madrid[i] == 'u')){
                continue;
             }else{
                isTrue = false;
                cout<<"No"<<endl;
                break;
             }
        }

        if(isTrue){
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}
