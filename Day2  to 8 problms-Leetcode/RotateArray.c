class RotateArray{

    public :
void rotate(int arr[],int k)
    {
       k%=arr.length;
       reverse(arr,0,arr.length-1);
       reverse(arr,0,k-1);
       reverse(arr,k,arr.length-1);

    }
 void reverse(int arr[],int start,int end)
    {while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
         end--;
    }

    }
    void printArray(int arr[],int n)
    {

        for(int i:arr)
     System.out.println(i);
    }
    //System.out.println
}
    void main () {
        int arr[]={1, 2, 3, 4, 5, 6, 7};
        RotateArray s =new RotateArray();
 s.rotate(arr, 2);
 s.printArray(arr, 7);
    }
