# c_68_strings2

## DESCRIPTION

So string is a character pointer. It points to the strings firts characters' address and functions like printf will start to print out all the characters from this address until it reaches the `nul` character. The C compiler adds the `nul` character to the end of the string automatically.

If the string pointer is created as below, it can't be modified later in the program because the compiler will place the string "Hi!" in a read only memory, as it would be a constant literal.

```c
char *string = "Hi!";
```

To be able to change the string we have to allocate memory and give the allocated memorys' start address to the string pointer.
Here with `number_of_bytes` we can tell to malloc how much memory we want to allocate.

```c
char *string = malloc(number_of_bytes);
```

After that we can copy or place any string into that memory field but we have to be careful to not exceed the allocated memory length (number_of_bytes). To place the "Hi!" string into the memory we can use the `strcpy` function from `string.h` library.

```c
strcpy(string, "Hi!");
```

Malloc has a return value of a pointer, the address of the start of the memory allocated. If memory allocation fails, `malloc` will return `NULL`.

When the program stops runnig, the operating system automatically release all the memory allocated by the program but as a good practice when we are not in need of memory anymore then we should release that memory by calling the function `free()`.
