## 0x1E. Wild Compare

```
alexa@ubuntu:~/0x1E-wild_cmp$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
alexa@ubuntu:~/0x1E-wild_cmp$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-wildcmp.c -o 0-wildcmp
alexa@ubuntu:~/0x1E-wild_cmp$ ./0-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
alexa@ubuntu:~/0x1E-wild_cmp$ 

```

---

```Proudly written by Yosri Ghorbel```

![Yosri Ghorbel](https://pbs.twimg.com/media/E3YEO7kXwAU9x6x?format=png&name=4096x4096)

> Copyright © 2021 [Holberton School](https://www.holbertonschool.com). All rights reserved.
