class Solution {
    public boolean containsDuplicate(int[] nums) {
      HashSet h2 = new HashSet<>();
      for(int num : nums) {
        if(h2.contains(num)) {
            return true;
        }
        h2.add(num);
      }
      return false;
    }
}
