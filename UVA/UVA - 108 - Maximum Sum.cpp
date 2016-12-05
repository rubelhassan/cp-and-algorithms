/**
* ONLINE JUDGE: UVA-ONLINE      *
* PROBLEM: 108 - Maximum Sum    *
* TYPE: 2D ARRAY SUM            *
* STATUS: ACCEPTED              *
* DATE: 09 FEB 2015             *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,maxSum,sum,leftCol,rightCol;
    while(cin>>n){
        maxSum = -100000000,sum=0;
        int twoD[n][n],rowSum[n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>twoD[i][j];
            }
        }
        for(leftCol=0;leftCol<n;leftCol++){
            for(i=0;i<n;i++) rowSum[i] =0;
            for(rightCol=leftCol;rightCol<n;rightCol++){
               for(i=0;i<n;i++) rowSum[i] =  rowSum[i] + twoD[i][rightCol];
               for(i=0;i<n;i++){
                sum =0;
                for(j=i;j<n;j++){
                    sum = sum+rowSum[j];
                    if(sum>maxSum) maxSum = sum;
                }
               }
            }
        }
        cout<<maxSum<<endl;
    }
}
