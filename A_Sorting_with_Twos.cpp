#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
void combin(int ind,string s,vector<string> &v,vector<string>& a,string digits)
{
    if(s.size()==digits.size())
    {
        v.push_back(s);
        return;
    }
    for (auto &&ch : a[digits[ind]])
    {
        s+=ch;
        combin(ind+1,s,v,a,digits);
        s.pop_back();
    }
    
    
}
    vector<string> letterCombinations(string digits) {
       vector<string>a(10);
        a[2]="abc";
        a[3]="def";
        a[4]="ghi";
        a[5]="jkl";
        a[6]="mno";
        a[7]="pqrs";
        a[8]="tuv";
        a[9]="wxyz";
        vector<string>v;
        combin(0,"",v,a,digits);
        return v;
    }
};