/**
 * rubelhassan
 * 23 Nov 2016
 */

#include<iostream>
#include<string>

using namespace std;

int getSum(string s){
    int sum = 0, a = 1, b=3;

    for(int i=0; i<s.length(); i++){
        if(i == a || i==b ) continue;
        int a = s[i] - '0';
        if(a>4){
            a = a * 2;
            sum += a%10;
            sum += (a/10);
        }else{
            sum += (2*a);
        }
    }

    sum = sum + (s[1] - '0');
    sum = sum + (s[3] - '0');

    return sum;
}


int main(){

    int tc, sum;
    string a, b, c, d;
    cin>>tc;

    while(tc--){
        sum = 0;
        cin>>a>>b>>c>>d;

        sum += getSum(a);
        sum += getSum(b);
        sum += getSum(c);
        sum += getSum(d);

        if(sum%10 == 0) cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;

    }

    return 0;

}
