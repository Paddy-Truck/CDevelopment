**C/C++ Development Project**

While coding a selection sort the new things I learned are:

**Selection Sort**    
Consider the array to be two parts; sorted and unsorted.        
Selects the first element in the array and compares it to the rest.        
Finding the index of the lowest value element.        
Swaps the selected element and the lowest value element.        
Increases the index to the first element of the unsorted array.
         
**Sizeof Function**

Returns the size of type used in memory.
To get the length of an array:

    int n = sizeof(arr) / sizeof(arr[0]);

This assigns the sizeof the entire array divided by the sizeof a single element which is equal to the element count.
Arrays are passed into functions as pointers so the sizeof returns the pointer size inside the function. So good practice is to pass in a seperate parameter of size_n


**C Arrays**

You cannot return an array from a C function. Arrays are not first class citizens in C. 
Returning an array from a function decays to a pointer.

Good practice does not advocate returning the address of a local variable to outside of the function. 

it is possible too define the locally defined array variable as a static variable.
 
it is possible allocate memory for an array and return a pointer remembering to free it.

Derefrence a ptr to an array with the following syntax: `*(ptr + idx) `

