### **HashMap**

```java 
HashMap<String, Integer> map = new HashMap<>();
```

##### **1. put(K key, V value):**
```java
// Associates the specified value with the specified key in the map.
map.put("One", 1);
map.put("Two", 2);
```  

##### **2. get(Object key):**
```java
// Returns the value to which the specified key is mapped, or null if this map contains no mapping for the key.
Integer value = map.get("One");
```

##### **3. containsKey(Object key):**
```java
// Returns true if this map contains a mapping for the specified key.
boolean containsKey = map.containsKey("Two");
```

##### **4. containsValue(Object value):**
```java 
// Returns true if this map maps one or more keys to the specified value.
boolean containsValue = map.containsValue(2);
```

##### **5. getOrDefault(Object key, V defaultValue):**
```java
// The getOrDefault() method returns the value to which the specified key is mapped, or a default value if the key is not present in the map.
int value = map.getOrDefault("Four", 0);
```

##### **6. remove(Object key):**
```java 
// Removes the mapping for the specified key from this map if present.
map.remove("One");
```

##### **7. size():**
```java 
// Returns the number of key-value mappings in this map.
int size = map.size();
```

##### **8. isEmpty():**
```java 
// Returns true if this map contains no key-value mappings.
boolean isEmpty = map.isEmpty();
```

##### **9. keySet():**
```java
// Returns a Set view of the keys contained in this map.
Set<String> keys = map.keySet();
```

##### **10. values():**
```java 
// Returns a Collection view of the values contained in this map.
Collection<Integer> values = map.values();
```

##### **11. entrySet():**
```java 
// Returns a Set view of the mappings contained in this map.
Set<Map.Entry<String, Integer>> entrySet = map.entrySet();
```

##### **12. clear():**
```java 
// The clear() method removes all of the mappings from the map. After this call, the map will be empty.
map.clear();
```

##### **13. forEach():**
```java 
// The forEach() method performs the given action for each entry in the map.
map.forEach((key, value) -> System.out.println(key + " : " + value));
```

##### **14. replaceAll():**
```java 
// The replaceAll() method replaces each entry's value with the result of applying the given function to that entry.
map.replaceAll((key, value) -> value * 2);
```

##### **15. clone():**
```java 
// The clone() method in Java is used to create a shallow copy of the HashMap. The clone is a new map with the same key-value pairs.
HashMap<String, Integer> clonedMap = (HashMap<String, Integer>) originalMap.clone();
HashMap<String, Integer> clonedMap = new HashMap<>(originalMap);
```

[comment]: <> (cmd + shift + v to preview md file)