# 0x18. Merge Sort
### 0. Merge sort

A function that sorts an array of integers in ascending order using the Merge Sort algorithm:

In the file  `0-O`, write the Big O notations of the time complexity of the Merge Sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

```
yosri@ubuntu-xenial:0x18-merge_sort$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-merge_sort.c print_array.c -o merge
yosri@ubuntu-xenial:0x18-merge_sort$ ./merge
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Merging...
[left]: 19
[right]: 48
[Done]: 19, 48
Merging...
[left]: 71
[right]: 13
[Done]: 13, 71
Merging...
[left]: 99
[right]: 13, 71
[Done]: 13, 71, 99
Merging...
[left]: 19, 48
[right]: 13, 71, 99
[Done]: 13, 19, 48, 71, 99
Merging...
[left]: 52
[right]: 96
[Done]: 52, 96
Merging...
[left]: 86
[right]: 7
[Done]: 7, 86
Merging...
[left]: 73
[right]: 7, 86
[Done]: 7, 73, 86
Merging...
[left]: 52, 96
[right]: 7, 73, 86
[Done]: 7, 52, 73, 86, 96
Merging...
[left]: 13, 19, 48, 71, 99
[right]: 7, 52, 73, 86, 96
[Done]: 7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
yosri@ubuntu-xenial:0x18-merge_sort$
```

> Copyright © 2021 Holberton School. All rights reserved.

![Yosri Ghorbel](https://pbs.twimg.com/media/E3YEO7kXwAU9x6x?format=png&name=4096x4096)
