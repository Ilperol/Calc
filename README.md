Vector:
Insertion: Efficient when inserting elements at the end of the vector O(1). Inserting elements at the beginning or middle is less efficient O(n).
Getting: Accessing elements by index is efficient O(1)
Finding: Linear search O(n).
Deletion: Removing elements at the end of the vector is efficient O(1) but removing elements from the middle or beginning requires shifting elements O(n).
Sorting: Can be sorted efficiently using algorithms like QuickSort or MergeSort O(n log n).
List:
Insertion: Efficient for insertion and deletion at any position O(1) time complexity because elements are linked together, not stored contiguously.
Getting: Accessing elements by index is not efficient O(n) time complexity because it requires traversing the list from the beginning.
Finding: Linear search O(n).
Deletion: Deleting elements is efficient for any position O(1).
Sorting: Less efficient for sorting compared to vectors (O(n log n) time complexity due to less efficient random access).
Map:
Insertion: Efficient insertion O(log n) 
Getting: Retrieving values by key is efficient O(log n) time complexity on average for balanced trees.
Finding: Searching for keys is efficient O(log n).
Deletion: Efficient deletion by key O(log n).
Sorting: Maps are inherently sorted by keys, but sorting based on values requires O(n log n) .
