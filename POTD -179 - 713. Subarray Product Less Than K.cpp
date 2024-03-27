   int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int r=0,l=0,count =0,p=1;
        int n = nums.size();
     
        while(r<n)
        {
            p*= nums[r];
            if (p>=k) // This step here slides the window when the product is strictly not less than the mentioned k in the question 
            {
            while (p>=k&& l<=r) //  This looop here does the wor k of reducing the window size after every iteratiion  by 1 unnit by decreasing the size of l.
                {
                    p/= nums[l];
                    l++;
                }
            }
            
            count += r-l+1; // THese are the nummber of subarrays that can be formed with a window from [l to r]
            r++;
        }
        return count;
        
    }

// i havr used the sliding window method to solve the problem.
T
