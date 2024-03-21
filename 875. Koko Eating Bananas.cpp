int minEatingSpeed(vector<int>& piles, int h) {

       std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

        int s= 1,e=0;
        for (auto i:piles)
        {
            e= max(e,i);
            
        }
        int ans=0;
    //cout<< s<<" "<<e;
        while (s<=e)
        {
            int mid = s+ (e-s)/2;
          long  int sum =0;
            for ( auto i:piles)
            {
                if (i%mid == 0) sum += i/mid;
                else sum += (i/mid)+1;
            }
            if ( sum <=h)
            {
                ans = mid;
                e= mid-1;
            }
            else  s= mid+1;

        }
        return ans;
    }
