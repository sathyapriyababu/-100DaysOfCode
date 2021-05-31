/*Steps

By using minmax_element inbuilt function, we can find the range. [0, N]
Then get the difference between sum of first N numbers (Formula : N(N+1)/2) and actually sum of the array (using accumulate function)
For final answer :
If the difference is greater than 0, return difference,
Else check if the minimum element is 0, if yes return maximum number + 1 (Ref. example 2 in the description), else return 0 (as 0 would be missing).
Note : Minmax function return a pair with an iterator pointing to the smallest value in the range [first, last] as first element, and largest as second (minmax.first and minmax.second).
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        auto minmax = minmax_element(nums.begin(), nums.end());
        int diff = (*minmax.second * (*minmax.second + 1))/2 - accumulate(nums.begin(), nums.end(), 0);

        if(diff>0)
            return diff;
        else{
            if(*minmax.first == 0)
                return *minmax.second + 1;
            else
                return 0;
        }

    }
};
