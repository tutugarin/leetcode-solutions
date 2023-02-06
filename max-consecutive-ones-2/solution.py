def nums(array):
    prev, now, ans = 0, 0, 0
    for i in array:
        if i == 1:
            now += 1
        else:
            ans = max(ans, prev + now + 1)
            prev = now
            now = 0
    return max(ans, prev + now + 1)

