class Main {
    public static void main (String[] args) {

     int[] arr = {1, 2, 3, 4, 5, 6, 7};
      Main s =new Main();
    s.rotate(arr, 2);
    s.printArray(arr, 7);
  }
  public void rotate(int[] nums, int k) {
    k %= nums.length;
    reverse(nums, 0, nums.length - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nums.length - 1);
  }
  public void reverse(int[] nums, int start, int end) {
    while (start < end) {
      int temp = nums[start];
      nums[start] = nums[end];
      nums[end] = temp;
      start++;
      end--;
    }
  }
 public void printArray(int[] arr,int n)
  {
for(int x : arr )
System.out.println(x);

  }


}
