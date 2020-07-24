/*
 * Author : Anushka Gurjar
 * Date   : July 2020
 * flags  : C
*/


#include<bits/stdc++.h>
using namespace std;

// Problem Statement: https://leetcode.com/problems/shuffle-the-array/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    
    int *result = (int*) malloc (numsSize * sizeof(int));
    
    int i = 0;
    int j = n;
    int pos = 0;
    
    while(i < n){
        result[pos] = nums[i];
        pos += 1;
        
        result[pos] = nums[j];
        pos += 1;
        
        i++, j++;
    }
    
    *returnSize = numsSize;
    
    return result;
}


