#  ![libfte](https://user-images.githubusercontent.com/98755737/172956533-7cd6b60f-f617-42b6-b250-f79f87b66715.png) 
# 42 Libft (succeeded with 100%)
<p align="center">
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/sofiahahn/42-Libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/sofiahahn/42-Libft?color=blue" />
</p>
Made during 42 School course. Custom C library created by developing from scratch essential C functions for string copying, measurement, comparison; character search, verification and concatenation; memory area setting, copying and moving; linked list node creation and manipulation; list iteration, list size calculation, function-to-list application; data type conversion; manipulation of memory; character manipulation, searching and checking.

# FUNCTIONS LIST:
### Functions from `<ctype.h>` library

* [`ft_isascii`](Libft/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](Libft/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](Libft/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](Libft/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](Libft/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](Libft/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](Libft/ft_toupper.c)			- lower case to upper case letter conversion.
### Functions from `<stdlib.h>` library

* [`ft_atoi`](Libft/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](Libft/ft_calloc.c)	- memory allocation.
### Functions from `<strings.h>` library

* [`ft_bzero`](Libft/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](Libft/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](Libft/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](Libft/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](Libft/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](Libft/ft_memcpy.c)		- copy memory area.
* 
### Functions from `<string.h>` library

* [`ft_strlen`](Libft/ft_strlen.c)				- find length of string.
* [`ft_strchr`](Libft/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](Libft/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](Libft/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](Libft/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strncpy`](Libft/ft_strncpy.c) *	- copy strings (size-bounded).
* [`ft_strdup`](Libft/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](Libft/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](Libft/ft_strlcat.c)			- size-bounded string concatenation.
* 
### Non-standard functions

* [`ft_putchar_fd`](Libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](Libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](Libft/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](Libft/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](Libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](Libft/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](Libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](Libft/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](Libft/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](Libft/ft_strmapi.c)			- create new string from modifying string with specified function.
