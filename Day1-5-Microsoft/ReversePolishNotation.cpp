//LeetCode - 150. Evaluate Reverse Polish Notation
//You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string c:tokens){
            if(c=="+"){
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2+num1);
            }
            else if(c=="-"){
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2-num1);
            }
            else if(c=="*"){
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2*num1);
            }
            else if(c=="/"){
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                s.push(num2/num1);
            }
            else
                s.push(stoi(c));
        }
        return s.top();
    }
};
