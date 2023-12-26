## HashSet

```java 
HashSet<String> set = new HashSet<>();
```

##### **1. Adding Elements (add):**
```java
import java.util.HashSet;

public class HashSetExample {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<>();

        set.add("Java");
        set.add("Python");
        set.add("C++");
        set.add("Java"); // Duplicate element, will be ignored

        System.out.println("HashSet: " + set);
    }
}
```  
###### **output:**
```
HashSet: [Java, C++, Python]
```


##### **2. Removing Elements (remove):**
```java
import java.util.HashSet;

public class HashSetExample {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<>();

        set.add("Java");
        set.add("Python");
        set.add("C++");

        set.remove("Python");

        System.out.println("HashSet after removal: " + set);
    }
}
```
###### **output:**
```
HashSet after removal: [Java, C++]
```


##### **3. Checking if an Element is Present (contains):**
```java
import java.util.HashSet;

public class HashSetExample {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<>();

        set.add("Java");
        set.add("Python");
        set.add("C++");

        System.out.println("Contains 'Java': " + set.contains("Java"));
        System.out.println("Contains 'JavaScript': " + set.contains("JavaScript"));
    }
}
```
###### **output:**
```
Contains 'Java': true
Contains 'JavaScript': false
```


##### **4. Iterating Over the Elements:**
```java
import java.util.HashSet;
import java.util.Iterator;

public class HashSetExample {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<>();

        set.add("Java");
        set.add("Python");
        set.add("C++");

        // Using Iterator
        Iterator<String> iterator = set.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }

        // Using enhanced for loop
        for (String language : set) {
            System.out.println(language);
        }
    }
}
```
###### **output:**
```
Java
C++
Python
Java
C++
Python
```


##### **5. Getting the Size (size):**
```java
import java.util.HashSet;

public class HashSetExample {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<>();

        set.add("Java");
        set.add("Python");
        set.add("C++");

        System.out.println("Size of HashSet: " + set.size());
    }
}
```
###### **output:**
```
Size of HashSet: 3
```