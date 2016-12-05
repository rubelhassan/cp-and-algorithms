#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){

    int term1, term2, finale, attd, class1, class2 , class3;

    int tc;

    cin>>tc;

    for(int i=1; i<=tc; i++){
        cin>>term1>>term2>>finale>>attd>>class1>>class2>>class3;

        int mark = term1+term2+finale+attd;

        if(class3 > class2) swap(class3, class2);
        if(class2 > class1) swap(class2, class1);
        if(class3 > class2) swap(class3, class2);

        mark += (class1+class2)/2;

        cout<<"Case "<<i<<": ";
        if(mark>=90){
            cout<<"A"<<endl;
        }else if(mark>=80){
            cout<<"B"<<endl;
        }else if(mark>=70){
            cout<<"C"<<endl;
        }else if(mark>=60){
            cout<<"D"<<endl;
        }else{
            cout<<"F"<<endl;
        }
    }

    return 0;

}
