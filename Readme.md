# GET NEXT LINE

2nd C project for 42 school.
Get next line reads a file descriptor line by line (a line ends by a '/n' or the EOF).

## SUMMARY

- What is Get Next Line ?
- How to use it

## What is Get Next Line ?

int     get_next_line(const int fd, char **line)

- Get_next_line is a function that returns a line read from a file descriptor.

- What we call line a succession of characters that end with a "\n" (ascii code 0x0a) or with End of File (EOF).

- The first parameter is the file descriptor that will be used to read.

- The second parameter is the address of a pointer to a character that will be used
to save the line read from the file descriptor.

- The return value can be 1, 0 or -1 depending on whether a line has been read,
when the reading has been completed, or if an error has happened respectively.

- Get_next_line returns its result without ’\n’.

- In the header file there is a macro named BUFF_SIZE that allows to choose the size of the reading
buffer for the read function.

## How to use it

To use the function:
- go to:`cd examples`
- run: `gcc -Wall -Werror -Wextra main.c ../Libft/libft.a ../get_next_line.c`
- run: `./a.out example.txt` or `./a.out example2.txt`

**NB:**
In the main you have 2 tests possible (to get all the file or only five lines)
example.txt is a short text, example2 is way longer 
