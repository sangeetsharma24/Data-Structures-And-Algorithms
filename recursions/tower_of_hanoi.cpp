#include <bits/stdc++.h>
using namespace std;
/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 

Only one disk can be moved at a time.
Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
No disk may be placed on top of a smaller disk.
*/
void TOH(int A, int B, int C,  int n)
{
    if(n>0)
    {TOH(A,C,B,n-1);
    cout<<"from "<<A<<" to "<<C<<endl;
    TOH(B,A,C,n-1);}
    
}  
int main()
{
    cout<<"enter number of discs - "; int n; cin>>n;
    cout<<"method - "<<endl;
    TOH(1, 2, 3, n);
    return 0;
}