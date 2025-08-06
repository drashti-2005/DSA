import java.util.*;
class Solution {
    public int[] plusOne(int[] digits) {
        
        for (int i = digits.length - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        int[] result = new int[digits.length + 1];
        result[0] = 1;
        return result;

    }

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        Solution sol= new Solution();
        
        System.out.println("enter the size of array:");
        int n= sc.nextInt();
        int[] A=new int[n];
        for(int j=0; j<n; j++){
            A[j]=sc.nextInt();

        }
        int[] fix = sol.plusOne(A);

        System.out.println(Arrays.toString(fix));

    }
}