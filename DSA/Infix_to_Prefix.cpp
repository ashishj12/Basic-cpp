#include <iostream>
#include <stack>
#include<cstdio>
#include <string>


// Function to convert Infix expression to postfix
string InfixToPostfix(string expression);

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C);

// Function to verify whether a character is alphanumeric chanaracter (letter or numeric digit) or not. 
bool IsOperand(char C);

// Function to verify the precedence of an operator. 
int Prec(char ch);

int main()
{
    string expression; 
    cout << "Enter Infix Expression: ";
    getline(cin, expression);
    string postfix = InfixToPostfix(expression);
    cout << "Output  = " << postfix << endl;
    return 0;
}

// Function to evaluate Postfix expression and return output
stdin InfixToPostfix(string expression)
{
    // Declaring a Stack from Standard template library in C++. 
    stack<char> S;
    string postfix = ""; // Initialize postfix as empty string.
    for(int i = 0;i< expression.length();i++) {

        // Scanning each character from left. 
        // If character is a delimitter, move on. 
        if(expression[i] == ' ' || expression[i] == ',') continue; 

        // If character is operator, pop two elements from stack, perform operation and push the result back. 
        else if(IsOperator(expression[i])) 
        {
            while(!S.empty() && S.top() != '(' && Prec(S.top()) >= Prec(expression[i]))
            {
                postfix+= S.top();
                S.pop();
            }
            S.push(expression[i]);
        }
        // Else if character is an operand
        else if(IsOperand(expression[i]))
        {
            postfix +=expression[i];
        }

        else if (expression[i] == '(') 
        {
            S.push(expression[i]);
        }

        else if(expression[i] == ')') 
        {
            while(!S.empty() && S.top() !=  '(') {
                postfix += S.top();
                S.pop();
            }
            S.pop();
        }
    }

    while(!S.empty()) {
        postfix += S.top();
        S.pop();
    }

    return postfix;
}

bool IsOperand(char C) 
{
    if(C >= '0' && C <= '9') return true;
    if(C >= 'a' && C <= 'z') return true;
    if(C >= 'A' && C <= 'Z') return true;
    return false;
}

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C)
{
   
}