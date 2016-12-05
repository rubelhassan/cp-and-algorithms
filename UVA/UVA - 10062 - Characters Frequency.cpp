/**
 * rubel hassan
 * 21 Nov 2016
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Pair{
    int key;
    int val;
};

bool comp(Pair a, Pair b){
	if( a.val < b.val)
		return true;
    if((a.val == b.val) && (a.key > b.key)) return true;

	return false;
}

int main(){

    int values[96];
    int ascii[96];
    int index;
    for(int i=0; i<96; i++){
        values[i] = 0;
        ascii[i] = i+32;
    }

    bool p = false;

    string s;
    while(getline(cin,s, '\n')){

        if(p) cout<<endl;

        for(int i=0;i<s.length(); i++){
            if(s[i]>=32 && s[i]<=127){
                index = s[i] - 32;
                values[index] += 1;
            }
        }

        vector<Pair> items;

        for(int i=95; i>=0; i--){
            if(values[i] > 0){
                Pair p;
                p.key = ascii[i];
                p.val = values[i];
                items.push_back(p);
            }

            values[i] = 0;
            ascii[i] = i+32;
        }

        sort(items.begin(), items.end(), comp);

        for(vector<Pair>::iterator it = items.begin(); it != items.end(); ++it){
            cout<<it->key<<" "<<it->val<<endl;
        }

        p = true;

    }

    return 0;
}
