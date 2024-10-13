/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/
#include<stdio.h>
#include<stdlib.h>
int* twosum(int* nums, int numsize, int target, int* returnsize)
{
    for(int i = 0; i < numsize; i ++) 
    {
        for(int j = i + 1; j < numsize; j ++)
        {
            if(nums[j] == target - nums[i])
            {
                int* result = malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnsize = 2;
                return result;
            }
        }
    }
}
int main(void)
{
    int *nums, numsize, target, returnsize;
    twosum(nums, numsize, target, &returnsize);
    return 0;
}