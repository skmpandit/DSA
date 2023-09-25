/*  You have three stacks of cylinders where each cylinder has the same diameter, but they may vary in height.
You can change the height of a stack by removing and discarding its topmost cylinder any number of times.

Find the maximum possible height of the stacks such that all of the stacks are exactly the same height.
This means you must remove zero or more cylinders from the top of zero or more of the three stacks
until they are all the same height, then return the height. */



#include<bits/stdc++.h>
using namespace std;

int equalStack(int h1[], int h1Size, int h2[], int h2Size, int h3[], int h3Size) {
    int maxHeight = 0;
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;
    
    int st1TotalHeight = 0, st2TotalHeight = 0, st3TotalHeight = 0;
    for(int i = h1Size -1; i >= 0; i-- ) {
        st1TotalHeight += h1[i];
        st1.push(st1TotalHeight);
    }
    for(int i = h2Size -1; i >=0; i-- ) {
        st2TotalHeight += h2[i];
        st2.push(st2TotalHeight);
    }
    for(int i = h3Size -1; i >=0; i-- ) {
        st3TotalHeight += h3[i];
        st3.push(st3TotalHeight);
    }

    while (!st1.empty() & !st2.empty() & !st3.empty())  // Run a loop untill every stack has at-least one element
    {
        int stack1Height = st1.top();
        int stack2Height = st2.top();
        int stack3Height = st3.top();

        if(stack1Height == stack2Height && stack2Height == stack3Height) {      // If all stack has same height just return the height
            maxHeight = st1.top();
            return maxHeight;
            break;
        }
        if(stack1Height >= stack2Height && stack1Height >= stack3Height) {      // Else find the stack with maximum height and remove the block
            st1.pop();
        } else if(stack2Height >= stack1Height && stack2Height >= stack3Height) {
            st2.pop();
        } else if(stack3Height >= stack1Height && stack3Height >= stack2Height) {
            st3.pop();
        }
    }
    
}

 
int main() {
    int h1[] = {3,2,1,1,1};
    int h2[] = {4,3,2};
    int h3[] = {1,1,4,1};
    int h1Size = sizeof(h1)/sizeof(h1[0]);
    int h2Size = sizeof(h2)/sizeof(h2[0]);
    int h3Size = sizeof(h3)/sizeof(h3[0]);
    int equal = equalStack(h1, h1Size, h2, h2Size, h3, h3Size);
    cout<<"The equal stack is "<<equal;
}