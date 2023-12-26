### **PriorityQueue**

```java 
PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();
```

##### **1. Adding Elements (add / offer):**
```java
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

        // Adding elements
        priorityQueue.add(5);
        priorityQueue.offer(3);
        priorityQueue.add(8);

        System.out.println("PriorityQueue: " + priorityQueue);
    }
}
```  
###### **output:**
```
PriorityQueue: [3, 5, 8]
```


##### **2. Removing Elements (poll / remove):**
```java
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

        priorityQueue.add(5);
        priorityQueue.add(3);
        priorityQueue.add(8);

        // Removing elements
        int removedElement = priorityQueue.poll();
        System.out.println("Removed Element: " + removedElement);
        System.out.println("PriorityQueue after removal: " + priorityQueue);
    }
}
```  
###### **output:**
```
Removed Element: 3
PriorityQueue after removal: [5, 8]
```


##### **3. Peeking at the Head (peek):**
```java
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

        priorityQueue.add(5);
        priorityQueue.add(3);
        priorityQueue.add(8);

        // Peeking at the head
        int head = priorityQueue.peek();
        System.out.println("Head of PriorityQueue: " + head);
    }
}
```  
###### **output:**
```
Head of PriorityQueue: 3
```


##### **4. Checking if the Queue is Empty (isEmpty):**
```java
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

        // Checking if the queue is empty
        boolean isEmpty = priorityQueue.isEmpty();
        System.out.println("Is PriorityQueue empty? " + isEmpty);
    }
}
```  
###### **output:**
```
Is PriorityQueue empty? true
```


##### **5. Getting the Size (size):**
```java
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

        priorityQueue.add(5);
        priorityQueue.add(3);
        priorityQueue.add(8);

        // Getting the size of the priority queue
        int size = priorityQueue.size();
        System.out.println("Size of PriorityQueue: " + size);
    }
}
```  
###### **output:**
```
Size of PriorityQueue: 3
```


##### **6. Converting to an Array (toArray):**
```java
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

        priorityQueue.add(5);
        priorityQueue.add(3);
        priorityQueue.add(8);

        // Converting to an array
        Object[] array = priorityQueue.toArray();
        System.out.println("Array representation: " + java.util.Arrays.toString(array));
    }
}
```  
###### **output:**
```
Array representation: [3, 5, 8]
```


##### **7. Iterating Over Elements (iterator / forEach):**
```java
import java.util.Iterator;
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

        priorityQueue.add(5);
        priorityQueue.add(3);
        priorityQueue.add(8);

        // Using Iterator
        Iterator<Integer> iterator = priorityQueue.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }

        // Using forEach
        priorityQueue.forEach(System.out::println);
    }
}
```  
###### **output:**
```
3
5
8
3
5
8
```


##### **8. contains(Object o):**
```java
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

        priorityQueue.add(5);
        priorityQueue.add(3);
        priorityQueue.add(8);

        // Checking if the priority queue contains an element
        boolean containsElement = priorityQueue.contains(3);
        System.out.println("Contains element 3: " + containsElement);

        boolean containsElement2 = priorityQueue.contains(7);
        System.out.println("Contains element 7: " + containsElement2);
    }
}
```  
###### **output:**
```
Contains element 3: true
Contains element 7: false
```


##### **9. Maxheap:**
```java
import java.util.Collections;
import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());

        maxHeap.add(5);
        maxHeap.add(3);
        maxHeap.add(8);
        maxHeap.add(1);

        // Elements will be dequeued in descending order (max heap order)
        while (!maxHeap.isEmpty()) {
            System.out.println(maxHeap.poll());
        }
    }
}
```  
###### **output:**
```
8
5
3
1
```