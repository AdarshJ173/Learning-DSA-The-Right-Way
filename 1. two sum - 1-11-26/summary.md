Here are your concise summary notes for "Day 1: Hashing & Arrays."

### **1. Core Concept: The Space-Time Trade-off**

* **Brute Force ():** "Anchor & Scan." Slow for large inputs.
* *Logic:* Check every pair.
* *Use Case:* Only when memory is extremely limited.


* **Hashing ():** "The Notebook." Fast but uses memory.
* *Logic:* Remember past numbers to look up partners instantly.
* *Use Case:* Standard efficient solution (e.g., Google interviews).



### **2. Data Structure: Hash Map (`unordered_map`)**

* **Concept:** A "Magic Dictionary" that finds items in  time.
* **Mechanism:** Uses a **Hash Function** (math formula like `% 10`) to translate a Key (Data) into an Index (Address).
* **Syntax (C++):**
* `unordered_map<int, int> map;` (Key  Value)
* **Check:** `if (map.find(key) != map.end())` (Did we hit the wall?)
* **Access:** `int val = map[key];`
* **Insert:** `map[key] = value;`



### **3. Data Structure: Hash Set (`unordered_set`)**

* **Concept:** A "Checklist." Stores unique Keys only.
* **Use Case:** "Have I seen this before?" (e.g., Contains Duplicate).
* **Syntax:** `unordered_set<int> set;` (Just Key).

### **4. Critical Patterns & Traps**

* **The "Mirror" Trap:** Don't compare an element to itself.
* *Fix:* Check index `i != j` (Brute Force) or Check *before* adding to map (Hashing).


* **The "Complement" Strategy:**
* To find `a + b = target`, look for `b = target - a`.


* **Correct Hashing Order:**
1. Calculate Complement.
2. **CHECK** map.
3. **ADD** current number to map.


* *Why?* Prevents using the current number as its own partner.



### **5. Edge Cases**

* **Empty Input:** `nums.size()` is 0. Loop condition `i < 0` handles it naturally.
* **Integer Overflow:** If inputs/target > 2 Billion, use `long long`.
* **Iterators:** `.end()` is the position **after** the last element (the "Wall").
