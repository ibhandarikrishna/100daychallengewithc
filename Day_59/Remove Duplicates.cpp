public int removeDuplicates(int[] nums) {
        int count = 0;
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=Integer.MAX_VALUE;
                count=count+1;
            }
        }
        System.out.println(count);
        Arrays.sort(nums);
        return nums.length-count;
    }
