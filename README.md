
# Printf 
Is the C language function for making formatted prints. The same
function is also available in PERL. This document explains how printf works
and how to design the right format specification for any occasion. In this
project we implement the printf function coding it from scratch.

## Requirements for this project

- Use pet editors    ' vi ',    ` vim',    ` emacs ' - All files are
compiled in Ubuntu 20.04 LTS using    ` gcc ', using options
` -Wall -Werror -Wextra -pedantic -std = gnu89


## Symbols
|Symbols |   Descrption  
|--|--|
|\ escape |   the next character 
| \ \  | print a backslash  |
|  "  | start or end of string |
| \ "  | print a double quote start or end a character constant  |
|  \ ’   |  print a single quote |
|   %    |  start a format specification  |
|  \ %    | print a percent sign |


## Format Specifiers
|Function name  | Description | Format Specifier
|--|--|--|
|`print_c` | Prints a character |`%c`|
|`print_s` | Prints a string |`%s`|
|`print_c` | Prints a character |`%c`|
|`print_p` | Prints a % |`%%`|
|`print_i` | Prints an integer |`%d`  &  `%i`|
|`print_o` | Prints number in base 8|`%o`|
|`print_b` | Prints a binary, custom specifier|`%b`|
|`print_hexLower` |Prints hexadecimal in lowercase|`%x`|
|`print_hexUpper`|Prints hexadecimal in uppercase|`%X`|
|`print_u`|Prints unsigned integer|`%u`|
|`print_r`|Prints string in reverse, custom specifier|`%r`|
|`print_R`|Prints string in rot13, custom specifier|`%R`|


### Authorized functions and macros

- 'writing' ( 'MAN 2 writing ") -" malloc "( ` Man 3 malloc') - 'book'
( ` Man 3 Libre) - ` va_start `( ` Man 3 va_start ') -' va_end
'(' Man 3 va_end ') -'vacopy `( ` Mantrams vacopy 3 ') -'

### Compilation

-   Your code will compile like this:

` ` $ Gcc -Wall -Werror -Wextra -pedantic -std = gnu89 * .c ` ` `




-   As a consequence, be careful not to push any c file containing a    ` main '
function in the root directory of the project (which could be a   ` test' folder
containing all files of tests, including    ` main '    functions) - Our main
files include the main header file ( ` holberton.h '): ` #include holberton.h `
- you may want to see on the flag gcc    ` -Wno format `    when tested with
` _printf `
