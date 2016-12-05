/**
 * rubelhassan
 * 17 Nov 2017
 */


#include<iostream>
#include<string>

using namespace std;

int main(){
    int t, n, i, counter, p;
    string ins;
    cin>>t;

    while(t--){
        cin>>n;
        p=0;
        int arr[n];
        counter = 0;
        for(int j=0; j<n; j++){
            cin>>ins;
            if(ins=="LEFT"){
                arr[counter++] = -1;
                p--;
            }else if(ins=="RIGHT"){
                arr[counter++] = 1;
                p++;
            }else{
                cin>>ins;
                cin>>i;
                p += arr[i-1];
                arr[counter++] = arr[i-1];
            }
        }
        cout<<p<<endl;
    }
}
