## 0x1A. Double Circular Linked List

```
alexa@ubuntu:0x1A-double_circular_linked_list$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-add_node.c
alexa@ubuntu:0x1A-double_circular_linked_list$ ./a.out 
Holberton
        ->prev: Engineer
        ->next: School
School
        ->prev: Holberton
        ->next: Full
Full
        ->prev: School
        ->next: Stack
Stack
        ->prev: Full
        ->next: Engineer
Engineer
        ->prev: Stack
        ->next: Holberton
Added to the beginning:
Engineer
        ->prev: Holberton
        ->next: Stack
Stack
        ->prev: Engineer
        ->next: Full
Full
        ->prev: Stack
        ->next: School
School
        ->prev: Full
        ->next: Holberton
Holberton
        ->prev: School
        ->next: Engineer
alexa@ubuntu:0x1A-double_circular_linked_list$ 
```

---

```Proudly written by Yosri Ghorbel```

![Yosri Ghorbel](https://pbs.twimg.com/media/E3YEO7kXwAU9x6x?format=png&name=4096x4096)

> Copyright © 2021 [Holberton School](https://www.holbertonschool.com). All rights reserved.
