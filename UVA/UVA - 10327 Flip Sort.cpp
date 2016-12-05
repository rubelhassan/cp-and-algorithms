/**
 * rubel hassan
 * 12 Nov 2016
 */
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;

    while(cin>>n){
        int total=0;
        bool sorted = false;
        int arr[n];
        for(int i=0;i<n; i++){
            cin>>arr[i];
        }

        if(n==1){
            sorted = true;
            total = 0;
        }

        while(!sorted){
            sorted = true;
            for(int i=0;i<n-1; i++){
                if(arr[i]>arr[i+1]){
                    swap(arr[i], arr[i+1]);
                    sorted = false;
                    total++;
                }
            }
        }

        cout<<"Minimum exchange operations : "<<total<<endl;
    }

    return 0;
}
