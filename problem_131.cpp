class Solution {
public:
    bool check_palindrome(string v)
    {
      int i=0,j=v.size()-1;
       while(i<=j)
            {
              if(v[i]==v[j])
                {
                    i++;
                    j--;
                }
                else 
                {
                    return false;
                }
            }
            return true;
    }
    void helper(string s,vector<string> v,vector<vector<string>>&output)
    {
        if(s.size()==0)
        {
           output.push_back(v);
        }
        for(int i=1;i<=s.size();i++)
        {
            string temp1="";
            temp1=s.substr(0,i);
            if(check_palindrome(temp1))
            {
                v.push_back(temp1);
                helper(s.substr(i),v,output);
                v.pop_back();
            }
            
        } 
    }
    vector<vector<string>> partition(string s) {
        vector<string>v;
        vector<vector<string>>output;
        helper(s,v,output);
        return output;
    }
};