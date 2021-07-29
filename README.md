
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

## Flowchart Function _Printf

![]{<div class="mxgraph" style="max-width:100%;border:1px solid transparent;" data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2021-07-29T19:34:09.008Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.107 Safari/537.36\&quot; etag=\&quot;kZw63siwWHqJezVyOmzm\&quot; version=\&quot;14.9.3\&quot; type=\&quot;github\&quot;&gt;&lt;diagram id=\&quot;C5RBs43oDa-KdzZeNtuy\&quot; name=\&quot;Page-1\&quot;&gt;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&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}"></div>
<script type="text/javascript" src="https://viewer.diagrams.net/js/viewer-static.min.js"></script>}