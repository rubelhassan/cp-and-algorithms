/**
 * rubelhassan
 * 29 Nov 2016
 */
#include<iostream>
#include<string>

using namespace std;

int main(){
    char arr[] = {1, 2, 3, 1, 2, 3, 1, 2, 3,
                  1, 2, 3, 1, 2, 3, 1, 2, 3, 4,
                  1, 2, 3, 1, 2, 3, 4};

    int tc;

    string in;

    cin>>tc;
    cin.ignore();
    for(int i=1; i<=tc; i++){
        getline(cin, in, '\n');
        int sum = 0;

        for(int j=0; j<in.length(); j++){
            if(in[j] == ' '){
                sum += 1;
            }else{
                sum += arr[in[j] - 'a'];
            }
        }

        cout<<"Case #"<<i<<": "<<sum<<endl;
    }

    return 0;
}
