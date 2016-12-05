/**
 * 514 - Rails
 * Rubel Hassan
 * Accepted
 */

#include<iostream>
#include<stack>
#include<fstream>

using namespace std;

int main(){

    int n, in;

    //ofstream fout("out.txt");

    while(cin>>n && n!=0){

        while(cin>>in && in!=0){
            stack<int> station;
            int rails[n];
            bool ans = true;
            rails[0] = in;
            for(int i=0; i<n-1; i++){
                cin>>in;
                rails[i+1] = in;
            }
            int cur = 1;
            for(int i=0; i<n; i++){

                if(ans){
                    if(cur < rails[i]){
                        for(;cur<rails[i]; cur++)
                            station.push(cur);
                        cur++;
                    }else if(cur == rails[i]){
                        cur++;
                    }else{
                        if(station.top() != rails[i]){
                            ans = false;
                        }else{
                            station.pop();
                        }

                    }
                }
            }

            if(ans) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        }
        cout<<endl;
    }

    return 0;
}
