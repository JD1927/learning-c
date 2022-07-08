# learning-c
This is just a study repo to have a learning curve in the C programming language.

## Pointers

A pointer is a variable that stores the memory address of another variable as its value.

Check examples from: [32-program](./32-program/) to [43-program](./43-program/)

## Memory allocation

- When you allocate memory dynamically, you should always release the memory when it is no longer required.
- Memory that you allocate on the heap will be automatically released when your program ends.
- Better to explicitly release the memory when you are done with it, event if it's just before you exit from the program
- A memory leak occurs when you allocate some memory dynamically and you do not retain the reference to it, so you are unable to release the memory
    - Often occurs within a loop
    - Because you do not release the memory when it is no longer required, your program consumes more and more of the available memory on each loop iteration and eventually may occupy it all
- To free memory that you have allocated dynamically, you must still have access to the address that references the block of memory

**To release the memory for a block of dynamically allocated memory whose address you have stored in a pointer**

```c
free(pointer);
pointer = NULL;
```


### malloc

The simplest standard library function that allocates memory at runtime is called `malloc()`

- Need to include the `stdlib.h` header file
- You specify the number of bytes of memory that you want allocated as the argument
- Returns the address of the first byte of memory that is allocated
- Because you get an address returned, a pointer is the only place to put it

See examples: [malloc.c](./44-program/malloc.c)

### calloc

- The `calloc()` function offers a couple of advantages over `malloc()`
    - It allocates memory as a number of elements of a given size
    - It initializes the memory that is allocated so that all bytes are zero
- `calloc()` function requires two argument values
    - Number of date items for which space is required
    - Size of each data item
- It is declared in the `stdlib.h` header


See examples: [calloc.c](./44-program/calloc.c)

### realloc

- The `realloc()` function enables you to reuse or extend memory that you previously allocated using `malloc()` or `calloc()`
- Expects two argument values
    - A pointer containing an address that was previously returned by a call to `malloc()`, `calloc()`
    - The size in bytes of the new memory that you want allocated
- Allocates the amount of memory you specify by the second argument
    - Transfers the contents of the previously allocated memory referenced by the pointer that you supply as the first argument to the newly allocated memory
    - Returns a void* pointer to the new memory or NULL if the operation fails for some reason
- The most important feature of this operation is that `realloc()` preserves the contents of the original memory area

## Guidelines

- Avoid allocating lots of small amounts of memory
    - Allocating memory on the heap carries some overhead with it
    - Allocating many small blocks of memory will carry much more overhead than allocating fewer larger blocks
- Only hang on to the memory as long as you need it
    - As soon as you are finished with a block of memory on the heap, release the memory
- Always ensure that you provide for releasing memory that you have allocated
    - Decide where in your code you will release the memory when you write the code that allocates it
- Make sure you do not inadvertently overwrite the address of memory you have allocated on the heap before you released it
    - Will cause a memory leak
    - Be especially careful when allocating memory within a loop