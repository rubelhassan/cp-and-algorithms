#include<iostream>
#include<string>
#include<cstdio>

using namespace std;


int main(){
    long long in, div;

    int tc=0;

    while(cin>>in){
        tc++;
        printf("%4.d. ", tc);

        if(in==0) {
            cout<<0<<endl;
            continue;
        }

        div = 100000000000000;
        bool prev = false;
        if(in/div > 0){
            cout<<in/div<<" kuti";
            in = in%div;
            prev = true;
            div = div/100;
        }else{
            div = div/100;
        }

        if(in/div > 0){
            if(prev) cout<<" ";
            cout<<in/div<<" lakh";
            in = in%div;
            prev = true;
            div = div/100;
        }else{
            div = div/100;
        }

        if(in/div > 0){
            if(prev) cout<<" ";
            cout<<in/div<<" hajar";
            in = in%div;
            prev = true;
            div = div/10;
        }else{
            div = div/10;
        }

        if(in/div > 0){
            if(prev) cout<<" ";
            cout<<in/div<<" shata";
            in = in%div;
            prev = true;
            div = div/100;
        }else{
            div = div/100;
        }

        if(in/div > 0){
            if(prev) cout<<" ";
            cout<<in/div<<" kuti";
            in = in%div;
            prev = true;
            div = div/100;
        }else{
            if(prev) cout<<" kuti";
            div = div/100;
        }

        if(in/div > 0){
            if(prev) cout<<" ";
            cout<<in/div<<" lakh";
            in = in%div;
            prev = true;
            div = div/100;
        }else{
            div = div/100;
        }

        if(in/div > 0){
            if(prev) cout<<" ";
            cout<<in/div<<" hajar";
            in = in%div;
            prev = true;
            div = div/10;
        }else{
            div = div/10;
        }

        if(in/div > 0){
            if(prev) cout<<" ";
            cout<<in/div<<" shata";
            in = in%div;
            prev = true;
            div = div/100;
        }else{
            div = div/100;
        }

        if(in/div > 0){
            if(prev) cout<<" ";
            cout<<in/div;
            in = in%div;
            prev = true;
            div = div/100;
        }

        cout<<endl;
    }

    return 0;

}
