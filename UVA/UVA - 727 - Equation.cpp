/**
 * 727 - Equation
 * Rubel Hassan
 * Accepted
 */
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int getPriority(char op){
    if(op == '-' || op =='+') return 1;
    if(op == '/' || op == '*') return 2;
    if(op == '(') return 3;
    return 0;
}

bool isOperator(char op){
    if(op == '*' || op == '/' || op == '-' ||
       op == '+' || op == '(')
    return true;

    return false;
}

int main(){

    bool start = true;
    int test;
    string s;
    cin>>test;
    cin.ignore();
    cin.ignore();

    while(test--){
        stack<char>exprStack;

        if(start){ start = false;}
        else {
            cout<<endl;
        }

        char in, chars[50];
        int incr = 0;

        while(true){
            getline(cin, s, '\n');
            if(s.length() == 0) { break;}
            chars[incr] = s[0];
            incr++;
        }

        for(int j=0;j<incr;j++){
            if(isOperator(chars[j])){
                while(!exprStack.empty() && (getPriority(chars[j]) <= getPriority(exprStack.top()) ) &&
                      exprStack.top() != '('){
                    cout<<exprStack.top();
                    exprStack.pop();
                }

                exprStack.push(chars[j]);


            }else if(chars[j] == ')'){
                while(!exprStack.empty() && exprStack.top() != '('){
                    cout<<exprStack.top();
                    exprStack.pop();
                }
                if(!exprStack.empty())
                    exprStack.pop();
            }else{
                cout<<chars[j];
            }
        }

        while(!exprStack.empty()){
            cout<<exprStack.top();
            exprStack.pop();
        }

        cout<<endl;
    }

    return 0;
}


