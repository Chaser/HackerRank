/*
The Utopian tree goes through 2 cycles of growth every year. The first growth 
cycle of the tree occurs during the monsoon, when it doubles in height. The 
second growth cycle of the tree occurs during the summer, when its height 
increases by 1 meter. 
Now, a new Utopian tree sapling is planted at the onset of the monsoon. Its 
height is 1 meter. Can you find the height of the tree after N growth cycles?

Input Format 
The first line contains an integer, T, the number of test cases. 
T lines follow. Each line contains an integer, N, that denotes the number of 
cycles for that test case.

Constraints 
1 <= T <= 10 
0 <= N <= 60
*/

#include <iostream>
using namespace std;

int height(int n) {
    return 0;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}