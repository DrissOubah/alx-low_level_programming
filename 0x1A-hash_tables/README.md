Task 0: hash_table_create

You need to create a function that creates a hash table.
The function should allocate memory for the hash table and its array.
It returns a pointer to the newly created hash table or NULL if an error occurs.
You are provided with a main program to test this function.
Task 1: hash_djb2

You need to implement a hash function using the djb2 algorithm.
The function takes an unsigned character string as input and returns an unsigned long int.
You are provided with a main program to test this function.
Task 2: key_index

Write a function that gives you the index of a key in a hash table.
You need to use the hash_djb2 function you implemented earlier.
The function takes the key and the size of the array as input.
It returns the index at which the key/value pair should be stored in the array of the hash table.
You are provided with a main program to test this function.
Task 3: hash_table_set

Create a function that adds an element to a hash table.
The function takes a hash table, a key, and a value as input.
The key/value pair should be inserted in the hash table.
If there's a collision, add the new node at the beginning of the list.
The function should return 1 if it succeeds, or 0 if it fails.
You are provided with a main program to test this function.
Task 4: hash_table_get

Implement a function that retrieves a value associated with a key from a hash table.
The function takes a hash table and a key as input and returns the value associated with that key.
If the key couldn't be found, it returns NULL.
You are provided with a main program to test this function.
Task 5: hash_table_print

Write a function that prints the contents of a hash table.
The function should print the key/value pairs in the order they appear in the array of the hash table.
The format should match the example provided.
If the hash table is NULL, it should not print anything.
You are provided with a main program to test this function.
Task 6: hash_table_delete

Create a function that deletes a hash table and frees all allocated memory.
The function takes a hash table as input and deallocates all the memory used by it.
You are provided with a main program to test this function.
Task 7: Sorted Hash Table (Advanced)

In this advanced task, you are asked to implement a sorted hash table with specific data structures.
You need to create functions to create, set, get, print, and delete from a sorted hash table.
The sorted hash table maintains a sorted order of keys and values and allows printing in both forward and reverse order.
You are provided with a main program to test these functions.
