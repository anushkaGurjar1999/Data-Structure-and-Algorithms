// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
  public:
   twoStacks(int n=100){size = n; arr = new int[n]; top1 = -1; top2 = size;}
 
   void push1(int x);
   void push2(int x);
   int pop1();
   int pop2();
};

/* The method push to push element into the stack 2 */
void twoStacks :: push1(int x){
    top1++;
    arr[top1] = x;
}
   
/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x){
    top2--;
    arr[top2] = x;
}
   
/* The method pop to pop element from the stack 1 */
//Return the popped element
int twoStacks ::pop1(){
    if(top1 == -1)
        return -1;
    return arr[top1--];
}

/* The method pop to pop element from the stack 2 */
//Return the popped element
int twoStacks :: pop2(){
    if(top2 == size)
        return -1;
    return arr[top2++];
}


/*
Simply update the Top1 or Top2, Where Top1 is the first stack lies in begining of array and similarly Top2 denotes the second stack lies in end of array.
*/
