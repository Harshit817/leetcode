class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        long long int l=0,r=0,sum=0,max_fre=0;
        int n=nums.size();
        for(r=0;r<n;r++)
        {
            sum+=nums[r];
            while(l+1<=r and (nums[r]*(r-l+1))>sum+k)
            {
                sum-=nums[l];
                l++;
            }
            max_fre=max(max_fre,r-l+1);
        }
        return max_fre;
    }
};