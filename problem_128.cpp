class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        // unordered_map<int,int>um;
        // for(int i=0;i<nums.size();i++)
        // {
        //     um[nums[i]]++;
        // }
        // int global_max=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //    long long temp=nums[i];
        //    int temp_sum=1;
        //    while(um.find(temp+1)!=um.end())
        //    {
        //      temp_sum++;
        //      temp++;
        //    }
        //    if(global_max<temp_sum)
        //    {
        //      global_max=temp_sum;
        //    }
        //    if(global_max==nums.size())
        //    {
        //        break;
        //    }
        // }
        // return global_max;
        vector<int>temp=nums;
        if(nums.size()==0)
        {
          return 0;
        }
        sort(temp.begin(),temp.end());
        int global_max=0,local_max=1;
        for(int i=0;i<temp.size()-1;i++)
        {
          if(temp[i]+1==temp[i+1])
          {
             local_max++;
          }
          else if(temp[i]==temp[i+1])
          {
            continue;
          }
          else
          {
            local_max=1;
          }
          if(global_max<local_max)
          {
            global_max=local_max;
          }
        }
         if(global_max<local_max)
        {
          global_max=local_max;
        }
        return global_max;
    }
};