// kadane's algorithm - most optimised approach

// {3, -4, 5, 4, -1, 7, -8}


// LEETCODE NO.53



// int maxSubArray(vector <int> &nums){
//     int currSum = 0; maxSum = 0;

//     for(int val : nums){
//         currSum += val;
//         maxSum = max(currSum, maxSum);

//         if(currSum < 0){
//             currSum = 0;
//         }
//     }
// }