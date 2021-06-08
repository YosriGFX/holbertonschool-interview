# 0x13. Count it!

### 0. Count it!

A  _recursive function_  that queries the  [Reddit API](https://intranet.hbtn.io/rltoken/PV_GanilbTliu3BSqFKPKA "Reddit API"), parses the title of all hot articles, and prints a sorted count of given keywords (case-insensitive, delimited by spaces.  `Javascript`  should count as  `javascript`, but  `java`  should not).

**Disclaimer**: number presented in this example  _cannot be accurate now_  - Reddit is hot articles are always changing.

```
bob@dylan $
bob@dylan $ python3 0-main.py programming 'react python java javascript scala no_results_for_this_one'
java: 27
javascript: 20
python: 17
react: 17
scala: 4
bob@dylan $ python3 0-main.py programming 'JavA java'
java: 54
bob@dylan $ python3 0-main.py not_a_valid_subreddit 'python java javascript scala no_results_for_this_one'
bob@dylan $ python3 0-main.py not_a_valid_subreddit 'python java'
bob@dylan $
```
> Copyright © 2021 Holberton School. All rights reserved.

![Yosri Ghorbel](https://pbs.twimg.com/media/E3YEO7kXwAU9x6x?format=png&name=4096x4096)
