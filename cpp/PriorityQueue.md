**1. Priority Queue**
```cpp
// in cpp the default Priority Queue is maxHeap
#include <queue>
priority_queue<int> pq;

// to add element
pq.push(5);

// to get the top element
int t = pq.top();

// remove the top element
pq.pop();

// to check if the heap is empty
bool flag = pq.empty();

// size of the pq
int sz = pq.size();
```


**2. MinHeap with Pair**
```cpp
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
```