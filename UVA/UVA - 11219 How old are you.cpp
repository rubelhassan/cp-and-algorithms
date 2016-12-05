/**
 * rubel hassan
 * 11 Nov 2016
 */

#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main(){

    int day, mon, year,t;
    int dayy, monn, yearr;
    string temp;
    bool invalid = false;
    bool check = false, same = false;
    cin>>t;
    cin.ignore();


    for(int i=1; i<=t; i++){


        getline(cin, temp, '\n');

        scanf("%d/%d/%d", &day, &mon, &year);
        getline(cin, temp, '\n');

        scanf("%d/%d/%d", &dayy, &monn, &yearr);
        getline(cin, temp, '\n');

        invalid = false;
        check = false;
        same = false;

        int age = 0;


        if(year<yearr){
            invalid = true;
        }else if(year == yearr){
            if(mon < monn){
                invalid = true;
            }else if(mon == monn){
                if(day<dayy) invalid = true;
                else if(day == dayy) same = true;
            }
        }else{
            age = year-yearr;
            if(mon<monn){
                age -= 1;
            }else if(mon==monn && day<dayy){
                age -= 1;
            }
        }

        if(invalid){
            cout<<"Case #"<<i<<": "<<"Invalid birth date"<<endl;
        }else if(same){
            cout<<"Case #"<<i<<": "<<"0"<<endl;
        }else if(age > 130){
            cout<<"Case #"<<i<<": "<<"Check birth date"<<endl;
        }else{
            cout<<"Case #"<<i<<": "<<age<<endl;
        }

    }


}
