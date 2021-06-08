# 0x0D. Array to AVL
### 0. AVL - From sorted array
Write a function that builds an AVL tree from an array
```
yosri@~/0x0D-sorted_array_to_avl$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl
yosri@~/0x0D-sorted_array_to_avl$ ./0-sorted_array_to_avl
(001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
(001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                           (098)
yosri@~/0x0D-sorted_array_to_avl$

```
> Copyright © 2021 Holberton School. All rights reserved.
