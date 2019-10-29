class Solution {
public:
    int evalRPN(vector<string>& s) {
        int i,n=s.size(),x;
        vector<int> v;
        for(i=0;i<n;i++)
        {
            if(s[i]=="+"||(s[i]=="-")||(s[i]=="*")||(s[i]=="/"))
                {
                    int a=v.back();
                    v.pop_back();
                    int b=v.back();
                    v.pop_back();
                    if(s[i]=="+")
                    v.push_back(a+b);
                    else if(s[i]=="-")
                    v.push_back(b-a);
                    else if(s[i]=="*")
                    v.push_back(a*b);
                    else if(s[i]=="/")
                    {
                        if(a!=0)
                        v.push_back(b/a);
                        
                    }
                }
                else
                {
                    istringstream ss(s[i]);
                    ss>>x;
                    v.push_back(x);
                }
        }
        return v.back();
    }
};
