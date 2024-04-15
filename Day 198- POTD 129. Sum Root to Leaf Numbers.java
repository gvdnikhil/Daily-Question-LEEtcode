
class Solution {


    // public  void check(TreeNode root, int sum, ArrayList<Integer> res)
    // {
      
    //     if (root ==null) return;
   
    // if (root.left ==null && root.right == null) {
    //      sum = sum * 10 + root.val;
    //     res.add(sum);
    //     sum -= root.val;
    //     return;
    // }
    //      sum = sum * 10 + root.val;
    //     check(root.left,sum,res);
    //     check(root.right,sum,res);


    // }


    // public int sumNumbers(TreeNode root) {
    //     ArrayList<Integer> res = new ArrayList<Integer>();
    //     int sum =0;
    //     check(root,sum, res);
    //     int ans =0;
    //     for ( int i=0;i<res.size();i++)
    //     {
    //         System.out.print(res.get(i)+ " ");
    //         ans += res.get(i);
    //     }
    //     return ans;
        
    // }




    // More Optimised

    // using o(n) O(1)
public int check(TreeNode root,int sum)
{
    if (root == null) return 0;
    sum= sum*10+ root.val;
    if (root.left ==null && root.right == null) return sum;
    return check(root.left,sum) + check(root.right,sum);
}


      public int sumNumbers(TreeNode root) {
       
        return check(root,0);
        
    }
}
