/*
Given N string s, print the unique strings in 
lexiographical order
N<=10^5
|S| <= 10000*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    int n; 
    cin>>n;
    for(int i =0;i<n;i++)
    {
        string str;
        cin>> str;
        s.insert(str);
    }
    cout<<"Printing the unique values now";
    for(auto value:s){
        cout<< value<<endl;
    }

    return 0;
}