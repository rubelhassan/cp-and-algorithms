#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

    int t, n, x;

    cin>>t;

    for(int ic=1; ic<=t; ic++){
        cin>>n;
        vector<int> vec;
        int i=1;

        while(i*i < n){
            x = n - (i*i);

            if(x%i==0) vec.push_back(x);
            i = i+1;
        }

        reverse(vec.begin(), vec.end());

        cout<<"Case "<<ic<<": ";

        vector<int>::iterator en = vec.end();
        vector<int>::iterator beg = vec.begin();

        for(vector<int>::iterator it =  vec.begin(); it != en; ++it){
            if(it != beg) cout<<" ";
            cout<<*it;
        }

        cout<<endl;
    }
}
