
# Hash Tables Study Guide

## 1. Introduction to Hash Tables

### What are Hash Tables?
A hash table (or dictionary) is a data structure that allows storing and retrieving data efficiently 
based on keys. It provides quick access to values associated with specific keys, making it ideal for 
scenarios requiring frequent lookups.

### Key Operations
- **Insert**: Adds a key-value pair into the table.
- **Find**: Retrieves the value associated with a given key.
- **Delete**: Removes a key from the table.

### Advantages of Hash Tables
Hash tables offer an average time complexity of O(1) for insert, find, and delete operations. This 
efficiency makes them suitable for various applications where quick data access is crucial.

---

## 2. Hash Functions

### Purpose
A hash function converts keys into fixed-size values (indices), determining the storage location 
within the array.

### Properties of a Good Hash Function
1. **Uniform Distribution**: Spreads keys evenly across the table.
2. **Determinism**: Ensures the same key always maps to the same index.
3. **Efficiency**: Computationally inexpensive to compute.

### Common Hashing Techniques
- **Modular Arithmetic**: `hash(key) = key % table_size`
- **Murmur Hash**: A more complex hash function designed for good distribution.

---

## 3. Collision Resolution

### Definition
Collisions occur when two keys map to the same index in the array.

### Methods of Collision Resolution
1. **Linear Probing**:
   - **Pros**: Simple implementation.
   - **Cons**: Increases time complexity in worst-case scenarios.
2. **Chaining (Unordered Map)**:
   - **Pros**: Easy to implement with hash functions.
   - **Cons**: Potential for increased time complexity if linked lists become long.

---

## 4. Unordered Map Implementation in C++

### Syntax
```cpp
#include <unordered_map>

std::unordered_map<Key, Value, Hash> my_map;
```
- `Key`: Data type of the key (e.g., `std::string`).
- `Value`: Data type of the value associated with the key.
- `Hash`: Custom or built-in hash function to map keys.

### Operations
- **Insert**: `my_map.insert(key, value)`
- **Find**: Use `find()` method to check if a key exists and retrieve its value.
- **Erase**: Remove entries using specific iterators.

---

## 5. Applications of Hash Tables

- **Efficient Lookup**: Used in databases, password verification, and lookups.
- **Caching Mechanisms**: Stores frequently accessed data for faster retrieval.
- **Load Balancing**: Distributes requests evenly across servers.

---

## 6. Key Takeaways
- Hash tables provide efficient data storage and retrieval with O(1) average complexity per 
operation.
- Proper selection of hash functions and collision resolution techniques is crucial for optimal 
performance.
- C++'s `unordered_map` is a powerful tool for implementing hash tables, offering flexibility and 
efficiency.

---

## 7. Practice Problems

### Problem 1: Basic Hash Function
Implement a simple hash function using modular arithmetic:
```cpp
size_t hash(const std::string& key) {
    return key.size() % 10;
}
```

### Problem 2: Using Unordered Map
Solve a problem that requires quick lookups, such as finding the shortest path in a graph.

### Problem 3: Collision Analysis
Analyze the time complexity of operations in different collision resolution methods (linear probing 
vs. chaining).

---

## Summary

This guide provides an overview of hash tables, their key operations, and practical implementation 
using C++'s `unordered_map`. By understanding these concepts and practicing with provided examples, 
you can effectively utilize hash tables to solve various programming challenges efficiently.
```
