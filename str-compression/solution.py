  def compress(self, chars: List[str]) -> int:
        start_writing, count, length = 0, 0, 0
        for i in range(len(chars)):
            if i + 1 < len(chars) and chars[i+1] == chars[i]:
                count += 1
            else:
                length += 1
                chars[start_writing] = chars[i]
                start_writing += 1
                if (count != 0):
                    num = str(count + 1)
                    for j in num:
                        chars[start_writing] = j
                        start_writing += 1
                        length += 1
                count = 0
        return length
        
