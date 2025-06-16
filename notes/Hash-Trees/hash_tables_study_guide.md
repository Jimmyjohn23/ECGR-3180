**Hash Tables: Study Guide**

---

## 1. Definition and Purpose

- **Associative Data Structure**: Stores key→value pairs, allowing retrieval by unique key rather than by numeric index.
- **Contrast with Sequential Containers**: Arrays and lists use positional indexing; hash tables use hashed keys for direct access.

## 2. Key Advantages

- **Average‑Case O(1) Performance** for insertion, lookup, and deletion (constant time regardless of table size).
- **Ubiquity**: Widely used in compilers (symbol tables), databases (indexes), caches, dictionaries, and many libraries/frameworks.

## 3. Core Components

1. **Hash Function**
   - Maps an arbitrary key (e.g., string, integer) to an integer hash code.
2. **Compression (Modulo Operation)**
   - Reduces the hash code into a valid array index: `index = hash(key) % table_size`.
3. **Underlying Array (Buckets)**
   - Stores entries; each slot, called a bucket, holds one or more key/value pairs.

## 4. Collisions and Their Impact

- **Collision**: When two different keys map to the same bucket index.
- **Effects**: Increases lookup/insertion time; if unchecked, performance degrades toward O(n).

## 5. Collision‑Resolution Strategies

1. **Separate Chaining**
   - Each bucket holds a linked list (or other container) of entries.
   - On collision, new entries are appended to the list at that bucket.
2. **Open Addressing**
   - All entries reside in the array itself.
   - Techniques include:
   - **Linear Probing**: If bucket is occupied, try `(index + 1) % size`, then `(index + 2) % size`, etc.
   - **Quadratic Probing** and **Double Hashing** as variations.
3. **Cuckoo Hashing**
   - Maintains two (or more) hash functions and tables.
   - On collision, evicts the existing element to its alternative location.

## 6. Maintaining Performance

- **Load Factor (α)**: Defined as `number_of_elements / table_size`.
  - Aim to keep α below a threshold (commonly 0.5 to 0.75).
- **Resizing and Rehashing**:
  - When load factor exceeds threshold, allocate a larger table (often double size), then re-insert all entries using the new hash modulus.
- **Quality Hash Functions**:
  - Use robust, well-tested functions (e.g., MurmurHash, CityHash, SipHash) to minimize clustering and collisions.

## 7. C++ STL Support

- ``
  - Provides O(1) average insertion, lookup, and deletion.
  - Example usage:
  ```cpp
  #include <unordered_map>
  std::unordered_map<std::string,int> freq;

  // Insert or update:
  freq["apple"] = 2;

  // Lookup:
  int count = freq["banana"];

  // Remove:
  freq.erase("apple");
  ```
- ``
  - Stores only keys; rejects duplicates; similar performance characteristics.
- **Custom Hash Functors**
  - Specialize `std::hash<T>` for user‑defined types, or pass a custom hash object as a template parameter.

## 8. Next Steps / Applications

- **Two‑Sum Problem**: Use a hash table to solve in O(n) by storing seen values and their indices.
- **Interview Prep**: Practice coding hash tables from scratch and using STL variants in problem‑solving.

---



