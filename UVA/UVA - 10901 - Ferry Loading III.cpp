#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

struct Pair{
    int time;
    string from;
};

bool comp(Pair A, Pair B){
	if( A.time != B.time )
		return A.time < B.time;
	return false;
}

int main(){
    int cases, n, t, m;

    int timer = 0, tim;
    string fro;

    cin>>cases;

    while(cases--){
        cin>>n>>t>>m;
        queue<Pair> carsFirst;
        queue<Pair> carsSecond;
        vector<Pair> vFirst;
        vector<Pair> vSecond;
        string side = "left";
        timer = 0;
        for(int i = 0; i<m; i++){
            cin>>tim;
            cin>>fro;

            Pair p;
            p.time = tim;
            p.from = fro;
            if(fro == "left")
                vFirst.push_back(p);
            else vSecond.push_back(p);
        }

        sort(vFirst.begin(), vFirst.end(), comp);
        sort(vSecond.begin(), vSecond.end(), comp);
        for(int i=0;i<vFirst.size(); i++)
            carsFirst.push(vFirst[i]);

        for(int i=0;i<vSecond.size(); i++)
            carsSecond.push(vSecond[i]);

        while(!carsFirst.empty() || !carsSecond.empty()){

            if(side == "left" && !carsFirst.empty()){
                Pair p = carsFirst.front();

                timer += max(0, p.time - timer);

                if(p.from != side){
                    timer += t;
                    side = p.from;
                }

                int counter = 0;
                while(!carsFirst.empty() && p.time <= timer && counter <= n && p.from == side){
                    carsFirst.pop();
                    counter++;
                    cout<<timer+t<<endl;
                    if(carsFirst.empty()) break;
                    p = carsFirst.front();
                }
            }else if(side == "right" &&!carsSecond.empty()){
                Pair p = carsSecond.front();

                timer += max(0, p.time - timer);

                if(p.from != side){
                    timer += t;
                    side = p.from;
                }

                int counter = 0;
                while(!carsSecond.empty() && p.time <= timer && counter <= n && p.from == side){
                    carsSecond.pop();
                    counter++;
                    cout<<timer+t<<endl;
                    if(carsSecond.empty()) break;
                    p = carsSecond.front();
                }
            }


            timer += t;

            if(side == "left")
                side = "right";
            else side = "left";

        } // inner while

        if(cases > 0)cout<<endl;
    }

    return 0;
}

