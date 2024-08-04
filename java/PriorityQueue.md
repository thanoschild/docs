**1.PriorityQueue**
```java
// in java the default PriorityQueue is minHeap
PriorityQueue<Integer> pq = new PriorityQueue<>();

// to add element
pq.add(5);

// to remove the top element
int t = pq.poll();

// to get the top element
int t = pq.peek();

// to check the heap is empty
boolean flag = pq.isEmpty();

// to get the size of pq
int sz = pq.size();

// to convert into an array
Object[] arr = pq.toArray();

// to iterate the heap
Iterator<Integer> iterator = priorityQueue.iterator();
while (iterator.hasNext()) {
    System.out.println(iterator.next());
}

// to check an element
boolean flag = pq.contains(5);

// maxHeap
 PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
```

**2. MinHeap with Pair**
```java
class Pair {
    int sum;
    int idx;

    public Pair(int sum, int idx) {
        this.sum = sum;
        this.idx = idx;
    }
}

PriorityQueue<Pair> pq = new PriorityQueue<>(new Comparator<Pair>() {
    @Override
    public int compare(Pair p1, Pair p2) {
        return Integer.compare(p1.sum, p2.sum);
    }
});

// add element
pq.add(new Pair(sum, idx));

// remove the top element
Pair t = pq.poll()
```