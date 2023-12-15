Vector:
Insertion: Efficient when inserting elements at the end of the vector O(1). Inserting elements at the beginning or middle is less efficient O(n).
Getting: Accessing elements by index is efficient O(1)
Finding: Linear search O(n).
Deletion: Removing elements at the end of the vector is efficient O(1) but removing elements from the middle or beginning requires shifting elements O(n).
Sorting: Can be sorted efficiently using algorithms like QuickSort or MergeSort O(n log n).
Enter the size of the container: 1000000
Choose the container type ('v' for vector, 'l' for list, 'm' for map): v
Time taken for Vector Insertion: 9.6476 milliseconds; 1000000 operations
Time taken for Vector Access: 0.0015 milliseconds; 1 operations
Time taken for Vector Deletion: 4.394 milliseconds; 7903 operations
Time taken for Vector Search: 0.423 milliseconds; 42636 operations
Time taken for Vector Sorting: 5212.87 milliseconds; 153563475 operations
---------------------
Time taken for Vector Insertion: 8.219 milliseconds; 1000000 operations
Time taken for Vector Access: 0.0016 milliseconds; 1 operations
Time taken for Vector Deletion: 5.0222 milliseconds; 10636 operations
Time taken for Vector Search: 0.6715 milliseconds; 71037 operations
Time taken for Vector Sorting: 5239.01 milliseconds; 153902498 operations
---------------------
Time taken for Vector Insertion: 8.9439 milliseconds; 1000000 operations
Time taken for Vector Access: 0.0017 milliseconds; 1 operations
Time taken for Vector Deletion: 4.7893 milliseconds; 9182 operations
Time taken for Vector Search: 0.3034 milliseconds; 27365 operations
Time taken for Vector Sorting: 5459.4 milliseconds; 152647171 operations
---------------------
Time taken for Vector Insertion: 38.0346 milliseconds; 1000000 operations
Time taken for Vector Access: 0.0024 milliseconds; 1 operations
Time taken for Vector Deletion: 7.2173 milliseconds; 710370 operations
Time taken for Vector Search: 0.788 milliseconds; 56056 operations
Time taken for Vector Sorting: 5740.06 milliseconds; 156315383 operations
---------------------
Time taken for Vector Insertion: 16.2889 milliseconds; 1000000 operations
Time taken for Vector Access: 0.0019 milliseconds; 1 operations
Time taken for Vector Deletion: 4.803 milliseconds; 6330 operations
Time taken for Vector Search: 0.0321 milliseconds; 2940 operations
Time taken for Vector Sorting: 7014.01 milliseconds; 150957564 operations

List:
Insertion: Efficient for insertion and deletion at any position O(1) time complexity because elements are linked together, not stored contiguously.
Getting: Accessing elements by index is not efficient O(n) time complexity because it requires traversing the list from the beginning.
Finding: Linear search O(n).
Deletion: Deleting elements is efficient for any position O(1).
Sorting: Less efficient for sorting compared to vectors (O(n log n) time complexity due to less efficient random access).

Enter the size of the container: 1000000
Choose the container type ('v' for vector, 'l' for list, 'm' for map): l
Time taken for List Insertion: 0.0059 milliseconds; 1 operations
Time taken for List Access: 6.9185 milliseconds; 29503 operations
Time taken for List Deletion: 0.7088 milliseconds; 1 operations
Time taken for List Search: 1.9325 milliseconds; 7903 operations
Time taken for List Sorting: 9454.35 milliseconds; 158127293 operations
---------------------
Time taken for List Insertion: 0.0037 milliseconds; 1 operations
Time taken for List Access: 55.7383 milliseconds; 131093 operations
Time taken for List Deletion: 1.2975 milliseconds; 1 operations
Time taken for List Search: 3.0606 milliseconds; 10636 operations
Time taken for List Sorting: 11164.6 milliseconds; 158126749 operations
---------------------
Time taken for List Insertion: 0.005 milliseconds; 1 operations
Time taken for List Access: 1.9379 milliseconds; 6330 operations
Time taken for List Deletion: 0.211 milliseconds; 1 operations
Time taken for List Search: 2.2152 milliseconds; 5003 operations
Time taken for List Sorting: 8858.55 milliseconds; 158124757 operations
---------------------
Time taken for List Insertion: 0.0032 milliseconds; 1 operations
Time taken for List Access: 61.1232 milliseconds; 141469 operations
Time taken for List Deletion: 1.0483 milliseconds; 1 operations
Time taken for List Search: 31.1444 milliseconds; 91822 operations
Time taken for List Sorting: 8989.77 milliseconds; 158125856 operations
---------------------
Time taken for List Insertion: 0.0048 milliseconds; 1 operations
Time taken for List Access: 36.7635 milliseconds; 56114 operations
Time taken for List Deletion: 3.0292 milliseconds; 1 operations
Time taken for List Search: 19.0031 milliseconds; 40221 operations
Time taken for List Sorting: 8859.45 milliseconds; 158132858 operations
---------------------
  Map:
Insertion: Efficient insertion O(log n) 
Getting: Retrieving values by key is efficient O(log n) time complexity on average for balanced trees.
Finding: Searching for keys is efficient O(log n).
Deletion: Efficient deletion by key O(log n).
Sorting: Maps are inherently sorted by keys, but sorting based on values requires O(n log n) .

Enter the size of the container: 1000000
Choose the container type ('v' for vector, 'l' for list, 'm' for map): m
Time taken for Map Insertion: 0.0171 milliseconds; 20937 operations
Time taken for Map Access: 0.0057 milliseconds; 15950 operations
Time taken for Map Deletion: 2.711 milliseconds; 27837 operations
Time taken for Map Search: 2.606 milliseconds; 20094 operations
---------------------
Time taken for Map Insertion: 0.0063 milliseconds; 6674 operations
Time taken for Map Access: 0.0046 milliseconds; 5246 operations
Time taken for Map Deletion: 1.6302 milliseconds; 9509 operations
Time taken for Map Search: 0.5488 milliseconds; 3997 operations
---------------------
Time taken for Map Insertion: 0.0079 milliseconds; 6395 operations
Time taken for Map Access: 0.0062 milliseconds; 5509 operations
Time taken for Map Deletion: 0.6279 milliseconds; 6200 operations
Time taken for Map Search: 1.8265 milliseconds; 20187 operations
---------------------
Time taken for Map Insertion: 0.011 milliseconds; 21053 operations
Time taken for Map Access: 0.0153 milliseconds; 12742 operations
Time taken for Map Deletion: 1.9811 milliseconds; 15950 operations
Time taken for Map Search: 2.8832 milliseconds; 25560 operations
---------------------
Time taken for Map Insertion: 0.0072 milliseconds; 15053 operations
Time taken for Map Access: 0.006 milliseconds; 27941 operations
Time taken for Map Deletion: 2.9826 milliseconds; 32384 operations
Time taken for Map Search: 2.7647 milliseconds; 30938 operations
---------------------
