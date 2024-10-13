/*1480. Running Sum of 1d Array
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.*/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int* runningSum(int* nums, int numsSize, int* returnSize){
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    result[0] = nums[0];
    for(int i = 1; i < numsSize; i ++)
    {
        result[i] = result[i - 1] + nums[i];
    }
    *returnSize = numsSize;
    return result;
}
int main()
{
    int numsSize;

    // Nhập số phần tử của mảng
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &numsSize);

    // Cấp phát bộ nhớ cho mảng nums
    int* nums = (int*)malloc(numsSize * sizeof(int));

    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng: \n");
    for (int i = 0; i < numsSize; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int returnSize;
    int* result = runningSum(nums, numsSize, &returnSize);

    // In ra mảng kết quả
    printf("Mảng tổng dồn: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Giải phóng bộ nhớ
    free(result);
    free(nums);

    return 0;
}
