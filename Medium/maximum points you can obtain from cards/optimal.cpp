/*Given N cards arranged in a row, each card has an associated score denoted by the cardScore array.
Choose exactly k cards. In each step, a card can be chosen either from the beginning or the end of the row.
The score is the sum of the scores of the chosen cards.
Return the maximum score that can be obtained.

Example 1
Input : cardScore = [1, 2, 3, 4, 5, 6] , k = 3
Output : 15
Explanation : Choosing the rightmost cards will maximize your total score. So optimal cards chosen are the rightmost three cards 4 , 5 , 6.
Th score is 4 + 5 + 6 => 15.*/

#include <iostream>
#include <vector>
using namespace std;
int maxScore(vector<int>& nums , int k){
    int n = nums.size();
    int lsum = 0;
    int rsum = 0; 
    int maxSum = 0;
    for (int i=0; i<k; i++) {
        lsum = lsum + nums[i];
        maxSum = lsum;
    }
    int ridx = n-1;
    for (int i=k-1; i>=0; i--) {
        lsum = lsum - nums[i];
        rsum = rsum + nums[ridx];
        ridx = ridx - 1;
        maxSum = max(maxSum, lsum+rsum);
    }
    return maxSum;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 3;
    cout << maxScore(nums, k);
    return 0;
}