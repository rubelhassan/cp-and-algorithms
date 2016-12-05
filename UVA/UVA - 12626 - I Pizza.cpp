/**
 * rubelhassan
 * 20 Nov 2016
 */

#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main(){
    int arr[6];
    string in;
    int t;

    cin>>t;

    while(t--){
        cin>>in;
        for(int i=0; i<6; i++) arr[i] = 0;
        for(int i=0; i<in.length(); i++){
            if(in[i] == 'A') {
                arr[0]++;
            }else if(in[i] == 'G'){
                arr[1]++;
            }else if(in[i] == 'I'){
                arr[2]++;
            }else if(in[i] == 'M'){
                arr[3]++;
            }else if(in[i] == 'R'){
                 arr[4]++;
            }else if(in[i] == 'T') arr[5]++;
        }

        int le = INT_MAX, counter=0;

        for(int i=0; i<6; i++) {
            if(i==4) continue;
            if(i==0) continue;
            if(arr[i]<=le) {
                le = arr[i];
            }
        }

        while(le > 0 && arr[0] >=3 && arr[4]>=2 ){
            le -=1;
            arr[0] -= 3;
            arr[4] -=2;
            counter++;
        }

        cout<<counter<<endl;
    }
}
