## HashSet

```java 
HashSet<String> set = new HashSet<>();
```

##### **Adding Elements (add):**
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
**output:**
```
HashSet: [Java, C++, Python]
```

##### **Removing Elements (remove):**
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