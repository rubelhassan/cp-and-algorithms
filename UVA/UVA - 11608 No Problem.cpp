#include<iostream>

using namespace std;

int main(){
    int in[12], contest[12];

    int tc = 1, i, sum;

    while(cin>>i){
        if(i < 0 ) break;
        sum = i;

        for(int j=0; j<12; j++) cin>>in[j];

        for(int j=0; j<12; j++) cin>>contest[j];

        cout<<"Case "<<tc++<<":"<<endl;

        for(int j=0; j<12; j++){
            if(contest[j] <= sum){
                cout<<"No problem! :D"<<endl;
                sum -= contest[j];
            }else {
                cout<<"No problem. :("<<endl;
            }
            sum = sum + in[j];
        }
    }

    return 0;

}
