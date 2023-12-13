class Solution(object):
    def check(self, a):
        b = [0] * len(a) 
        x = 0

        for i in range(1, len(a)):
            if a[i] < a[i - 1]:
                x = i
        for i in range(0, len(a)):
            b[i] = a[(i + x) % len(a)]

        for i in range(0, len(b) - 1):
            if b[i] > b[i + 1]:
                return False

        return True