# 0x10. Rain
Given a list of non-negative integers representing the heights of walls with unit width 1, as if viewing the cross-section of a relief map, calculate how many square units of water will be retained after it rains.
```
yosri@ubuntu:~/0x10$ cat 0_main.py
#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))
    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))

yosri@ubuntu:~/0x10$ 
yosri@ubuntu:~/0x10$ ./0_main.py
6
6
yosri@ubuntu:~/0x10$ 

```

Visual representation of the walls  `[0, 1, 0, 2, 0, 3, 0, 4]`

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/4/85ef782020ac6efdc7004b62ea86724a552285b4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210608%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210608T142851Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=fc0f08c3f719304d1568d90092333a886666361fc3bc6b601bcb0f683d262c19)

Visual representation of the walls  `[2, 0, 0, 4, 0, 0, 1, 0]`

![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/4/9a27c3e4e214e55b3c0b8b1439fdc99b4a184ff5.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210608%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210608T142851Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=34fa58ac1c21cd6f9c271d199145476ea4419d5042f4cb5466daab7051017d9a)

> Copyright © 2021 Holberton School. All rights reserved.

![Yosri Ghorbel](https://pbs.twimg.com/media/E3YEO7kXwAU9x6x?format=png&name=4096x4096)
