#!/usr/bin/python3
'''Count'''
import requests


def count_words(subreddit, word_list, hot_titles=[], after='null'):
    '''Parses the title of all hot articles
    and prints a sorted count of given keywords'''
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT/5.1;Win64,x64)'
    }
    response = requests.get(
        'https://www.reddit.com/r/{}/hot.json'.format(subreddit),
        headers=headers,
        params={
            "limit": "100",
            "after": after
        },
        allow_redirects=False
    )
    if response.status_code != 200:
        return None
    for r in response.json().get(
        'data'
    ).get(
        'children'
    ):
        hot_titles.append(
            r.get(
                'data'
            ).get(
                'title'
            )
        )
    after = response.json().get(
        'data'
    ).get(
        'after'
    )
    word_list = list(
        set(
            [
                word.lower() for word in word_list
            ]
        )
    )
    if after is None:
        word_dict = {
            word: 0 for word in word_list
        }
        for word in word_list:
            count = 0
            for title in hot_titles:
                count += [
                    a.lower() for a in title.split()
                ].count(
                    word.lower()
                )
            word_dict[word] += count
        for a, const in sorted(
            word_dict.items(),
            key=lambda x: x[1],
            reverse=True
        ):
            if const != 0:
                print('{}: {}'.format(
                    a.lower(),
                    const
                ))
    else:
        return count_words(
            subreddit,
            word_list,
            hot_titles,
            after
        )
