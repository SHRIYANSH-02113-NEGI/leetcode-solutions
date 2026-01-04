class Solution {
    public int subarraySum(int[] nums, int k) {
        int count = 0;
        int sum = 0;
        Map<Integer, Integer> mp = new HashMap<>();
        mp.put(0, 1);
        for (int a = 0; a < nums.length; a++){
            sum += nums[a];
            if (mp.containsKey(sum - k)) {
                count += mp.get(sum - k);
            }
            mp.put(sum, mp.getOrDefault(sum, 0) + 1);
        }
        return count;
    }
}
