def line_reflection(array):
    dictionary = dict()
    x1, x2 = array[0][0], array[0][0]
    for point in array:
        if point[1] in dictionary:
            dictionary[point[1]].append(point[0])
        else:
            dictionary[point[1]] = [point[0]]
        x1 = min(x1, point[0])
        x2 = max(x2, point[0])

    mid = (x1 + x2)

    for point in array:
        if point[0] == mid / 2:
            return False
        else:
            if mid - point[0] in dictionary[point[1]]:
                continue
            else:
                return False

    return True


print(line_reflection([[1,1],[-1,1], [0,1]]))

