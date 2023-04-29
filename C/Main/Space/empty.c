#include <stdio.h>
#define SIZE 30

int main (){
    int target= 25;
    int nums[SIZE]={1,2,3,4,5,6,7,8,9,10};
    for (int i=0;i<SIZE;i++)
        nums[i]=i;

    int left = 0, right = SIZE - 1;
    while(left <= right){

    // Prevent (left + right) overflow
    int mid = left + (right - left) / 2;
    printf("l-%d mid-%d r-%d\n",left,mid,right);
    if(nums[mid] == target){ return mid; }
    else if(nums[mid] < target) { left = mid + 1; }
    else { right = mid - 1; }
  }

  // End Condition: left > right
  return -1;

}