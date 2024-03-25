I have learn  new tecnnique to solve theese type of quesions by modifying the array given

class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List <Integer> res = new ArrayList<Integer> ();
        for ( int i =0;i<nums.length;i++)
        {
            int ind = Math.abs(nums[i])-1;
            if ( nums[ind] <0)
            // It has already occured once so add to the array list
            {
                res.add(ind+1);
            }

            else 
            {
                // if not occured yet , Make it negative to mark it has occured once
                nums[ind] = -nums[ind];
            }
        }
        return res;
    }
}
