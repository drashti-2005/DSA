class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}
    TreeNode(int val) { 
        this.val = val; 
    }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        return build(nums, 0, nums.length - 1);
    }

    private TreeNode build(int[] nums, int left, int right) {
        if (left > right) return null;

        int mid = (left + right) / 2; 
        TreeNode node = new TreeNode(nums[mid]);

        node.left = build(nums, left, mid - 1);   
        node.right = build(nums, mid + 1, right); 

        return node;
    }
}

public class Main {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5, 6};

        Solution sol = new Solution();
        TreeNode root = sol.sortedArrayToBST(nums);

        
    }

    
}
