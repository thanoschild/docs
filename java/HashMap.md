### **HashMap**

```java 
HashMap<String, Integer> map = new HashMap<>();
```

##### **1. put(K key, V value):**
```java
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        System.out.println("HashMap: " + hashMap);
    }
}
```  
###### **output:**
```
HashMap: {Java=1, C++=3, Python=2}
```

##### **2. get(Object key):**
```java
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Getting value by key
        int javaValue = hashMap.get("C++");
        System.out.println("Value for key 'C++': " + javaValue);
    }
}
```
###### **output:**
```
Value for key 'C++': 3
```


##### **3. containsKey(Object key):**
```java
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Checking if a key exists
        boolean hasJavaKey = hashMap.containsKey("Java");
        System.out.println("Contains key 'Java': " + hasJavaKey);
    }
}
```
###### **output:**
```
Contains key 'Java': true
```


##### **4. containsValue(Object value):**
```java 
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Checking if a value exists
        boolean containsValue = hashMap.containsValue(2);
        System.out.println("Contains value 2: " + containsValue);
    }
}
```
###### **output:**
```
Contains value 2: true
```


##### **5. getOrDefault(Object key, V defaultValue):**
```java
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Getting value by key, with a default value
        int value = hashMap.getOrDefault("JavaScript", 0);
        System.out.println("Value for key 'JavaScript': " + value);
    }
}
```
###### **output:**
```
Value for key 'JavaScript': 0
```


##### **6. remove(Object key):**
```java 
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Removing a key-value pair
        hashMap.remove("Python");

        System.out.println("HashMap after removal: " + hashMap);
    }
}
```
###### **output:**
```
HashMap after removal: {Java=1, C++=3}
```


##### **7. size():**
```java 
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Getting the size of the HashMap
        int size = hashMap.size();
        System.out.println("Size of HashMap: " + size);
    }
}
```
###### **output:**
```
Size of HashMap: 3
```


##### **8. isEmpty():**
```java 
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> emptyHashMap = new HashMap<>();

        // Checking if the HashMap is empty
        boolean isEmpty = emptyHashMap.isEmpty();
        System.out.println("Is HashMap empty? " + isEmpty);
    }
}
```
###### **output:**
```
Is HashMap empty? true
```


##### **9. keySet():**
```java
import java.util.HashMap;
import java.util.Set;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Getting the key set
        Set<String> keySet = hashMap.keySet();
        System.out.println("Key Set: " + keySet);
    }
}
```
###### **output:**
```
Key Set: [Java, C++, Python]
```


##### **10. values():**
```java 
import java.util.Collection;
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Getting the values collection
        Collection<Integer> values = hashMap.values();
        System.out.println("Values Collection: " + values);
    }
}
```
###### **output:**
```
Values Collection: [1, 3, 2]
```


##### **11. entrySet():**
```java 
import java.util.HashMap;
import java.util.Map;

public class HashMapExample {
    public static void main(String[] args) {
       HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Iterating over key-value pairs
        for (Map.Entry<String, Integer> entry : hashMap.entrySet()) {
            System.out.println("Key: " + entry.getKey() + ", Value: " + entry.getValue());
        }
    }
}
```
###### **output:**
```
Key: Java, Value: 1
Key: C++, Value: 3
Key: Python, Value: 2
```


##### **12. clear():**
```java 
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        System.out.println("HashMap before clearing: " + hashMap);

        // Clearing the HashMap
        hashMap.clear();

        System.out.println("HashMap after clearing: " + hashMap);
    }
}
```
###### **output:**
```
HashMap before clearing: {Java=1, C++=3, Python=2}
HashMap after clearing: {}
```


##### **13. forEach():**
```java 
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        // Using forEach to print key-value pairs
        hashMap.forEach((key, value) -> System.out.println("Key: " + key + ", Value: " + value));
    }
}
```
###### **output:**
```
Key: Java, Value: 1
Key: C++, Value: 3
Key: Python, Value: 2
```


##### **14. replaceAll():**
```java 
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Adding key-value pairs
        hashMap.put("Java", 1);
        hashMap.put("Python", 2);
        hashMap.put("C++", 3);

        System.out.println("HashMap before replaceAll: " + hashMap);

        // Incrementing each value by 10 using replaceAll
        hashMap.replaceAll((key, value) -> value + 10);

        System.out.println("HashMap after replaceAll: " + hashMap);
    }
}
```
###### **output:**
```
HashMap before replaceAll: {Java=1, C++=3, Python=2}
HashMap after replaceAll: {Java=11, C++=13, Python=12}
```


##### **15. clone():**
```java 
// The clone() method in Java is used to create a shallow copy of the HashMap. The clone is a new map with the same key-value pairs.
HashMap<String, Integer> clonedMap = (HashMap<String, Integer>) originalMap.clone();
HashMap<String, Integer> clonedMap = new HashMap<>(originalMap);
```

[comment]: <> (cmd + shift + v to preview md file)