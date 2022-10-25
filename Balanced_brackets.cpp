//this program checks if the given input has balanced bracket or not
//Checking for balanced brackets is a really essential concept when it comes to solving mathematical equations. 
//The order in which the brackets are opened, must be the same order in which they get closed. 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    int n=s.size();
    stack<char> st;
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '{' or s[i] == '[' or s[i] == '(')
        {
            st.push(s[i]);
            break;
        }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else 
                ans=False;
                break;
        }
        else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else 
                ans=False;
                break;
        }
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='}')
            {
                st.pop();
            }
            else 
                ans=False;
                break;
        }
        
    if(!st.empty())
    {
        return False;
    }
    return ans;
}


int main() {
    string s="[{}]";
    
    if(isValid(s))
    {
        cout<<"the brackets are balanced";
    }
    else
    {
        cout<<"brackets are not balanced";
    }
    return 0;
}
