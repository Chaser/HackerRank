/*

Calvin is driving his favorite vehicle on the 101 freeway. He notices that the 
check engine light of his vehicle is on, and he wants to service it immediately 
to avoid any risks. Luckily, a service lane runs parallel to the highway. The 
length of the highway and the service lane is N units. The service lane consists
of N segments of unit length, where each segment can have different widths.

Calvin can enter into and exit from any segment. Let's call the entry segment as
index i and the exit segment as index j. Assume that the exit segment lies after
the entry segment(j>i) and i b % 0. Calvin has to pass through all segments from
index i to indexj (both inclusive).

Calvin has three types of vehicles - bike, car and truck, represented by 1, 2 
and 3 respectively. These numbers also denote the width of the vehicle. We are 
given an array width[] of length N, where width[k] represents the width of kth 
segment of our service lane. It is guaranteed that while servicing he can pass 
through at most 1000 segments, including entry and exit segments.

If width[k] is 1, only the bike can pass through kth segment.

If width[k] is 2, the bike and car can pass through kth segment.

If width[k] is 3, any of the bike, car or truck can pass through kth segment.

Given the entry and exit point of Calvin's vehicle in the service lane, output 
the type of largest vehicle which can pass through the service lane 
(including the entry & exit segment)

Input Format 
The first line of input contains two integers - N & T, where N is the length of
the freeway, and T is the number of test cases. The next line has N space 
separated integers which represents the width array.

T test cases follow. Each test case contains two integers - i & j, where i is 
the index of segment through which Calvin enters the service lane and j is the 
index of the lane segment where he exits.

Output Format 
For each test case, print the number that represents the largest vehicle type 
that can pass through the service lane.

Note 
Calvin has to pass through all segments from index i to indexj (both inclusive).

Constraints 
2 <= N <= 100000 
1 <= T <= 1000 
0 <= i < j < N 
2 <= j-i+1 <= min(N,1000) 
1 <= width[k] <= 3, where 0 <= k < N
*/

#include <iostream>
#include <assert.h>
#include <vector>

using namespace std;

int main()
{

	int T; 							//Number of test cases
	int N;							//Length of highway
	cin >> N >> T;
	assert(1 <= N);
  	assert(N <= 100000);
  	assert(1 <= T);
  	assert(T <= 1000);

    int width[N];
    for(int i = 0; i < N; i++) 
    	cin >> width[i];

    for(int counter = 0; counter < T; counter++){
        int i, j;
        cin >> i >> j;
        assert(0 <= i);
    	assert(i < j);
    	assert(j < N);
    	assert(j-i+1 <= min(N, 1000));
        int m = 3;
        for(int c = i; c <= j; c++)
            m = min(m, width[c]);
      
        cout << m << endl;
    }
    return 0;
}



