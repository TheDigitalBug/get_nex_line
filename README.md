# Project Name : get_next_line

# Info:
The goal of get_next_line project is to write a function to read and return the next line of a file.
---
* get_next_line gets 2 parameters : file descriptor from which to read and a pointer where next line to be placed.
* The function will put line with '\0' at the end.
* The function will return 1 if successful, 0 if eof, and -1 if there is an error.

# Usage:
```
#include "get_next_line.h"
#include <stdio.h>

int main ()
{
	int fd = open("test", O_RDONLY);
	char *line;
	
	while (get_next_line(fd, &line))
	{
		puts(line);
	}
}

```
