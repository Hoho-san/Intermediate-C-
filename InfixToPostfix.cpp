#include<iostream>
#include<stack>
using namespace std;

//Jojo B. Javier
//BSCS 2B
int precedence(char sym) {
    if (sym == '+' || sym == '-') {
        return 1;               //Precedence of + or - is 1
    }else if (sym == '*' || sym == '/') {
        return 2;               //Precedence of * or / is 2
    }else if (sym == '^') {
        return 3;               //Precedence of ^ is 3
    }else {
        return 0;
    }
}
class classinfxpfx{
    public:
    string convertToPostfix(string infx ) {
        stack<char> mystack;
        mystack.push('#');               //add some extra character to avoid underflow
        string pfx = "";                 //initially the postfix string is empty
        
        for(int i=0; i<infx.length(); i++) {
            if (infx[i]>= 'a' && infx[i] <= 'z' || infx[i]>= 'A' && infx[i] <= 'Z') {
                pfx+=infx[i];
            }               //add to postfix when character is letter or number
            else if(infx[i] == '('){
                mystack.push('(');
            }
            else if(infx[i] == '('){
                mystack.push('(');
            }
            else if(infx[i] == ')') {
                while(mystack.top() != '#' && mystack.top() != '(') {
                    pfx += mystack.top();       //store and pop until ( has found
                    mystack.pop();
                }
            mystack.pop();          //remove the '(' from stack
            }else {
                if(precedence(infx[i]) > precedence(mystack.top()))
                    mystack.push(infx[i]);          //push if precedence is high
                else {
                    while(mystack.top() != '#' && precedence(infx[i]) <= precedence(mystack.top())) {
                        pfx += mystack.top();       //store and pop until higher precedence is found
                        mystack.pop();
                    }   
                    mystack.push(infx[i]);
                }
            }
        }

        while(mystack.top() != '#') {
            pfx += mystack.top();        //store and pop until stack is not empty.
            mystack.pop();
        }

        return pfx;
    }
    string showInfix(string getInfx){
        return getInfx;
    }
};

int main() {
    // string infx[5] = {"A+B-C","(A+B)*C","(A+B)*(C-D)","A+((B+C)*(E-F)-G)/(H-I)","A+B*(C+D)-E/F*G+H"};   // don't include white spaces
    string infx[5] = {"xy-zu/*ts+-", "xyz+*wu/-", "xy*z+t-", "xyzw+-*"};
    for(int i = 0; i < 5; i++){
        classinfxpfx num;
        cout << "Infix expression: " << num.showInfix(infx[i]) << "\n";
        cout << "Postfix expression: "<< num.convertToPostfix(infx[i]) << "\n\n";
    }
    
    return 0;
}