<h1>JAVA SOLUTION</h1>

<code>
class Solution {
    public boolean containsDuplicate(int[] nums) {
      HashSet<Integer> h2 = new HashSet<>();4
      for(int num : nums) {
        if(h2.contains(num)) {
            return true;
        }
        h2.add(num);
      }
      return false;
    }
}</code>
