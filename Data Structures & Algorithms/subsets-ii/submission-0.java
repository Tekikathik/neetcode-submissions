class Solution {
    static void generate(int[] nums,int idx,List<List<Integer>> li,ArrayList<Integer> list){
        li.add(new ArrayList(list));
        for(int i=idx;i<nums.length;i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            list.add(nums[i]);
            generate(nums,i+1,li,list);
            list.remove(list.size()-1);
        }

    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> li = new ArrayList<>();
        ArrayList<Integer> list = new ArrayList<>();
        generate(nums,0,li,list);
        return li;
    }
}
