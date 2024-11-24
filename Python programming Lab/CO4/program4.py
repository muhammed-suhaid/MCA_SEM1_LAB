class Time:
    def __init__(self, hour, minute, second):
        self.__hour = hour
        self.__minute = minute
        self.__second = second

    def time(self):
        return self.__hour, self.__minute, self.__second

    def __add__(self, other):
        hr = self.__hour + other.__hour
        mn = self.__minute + other.__minute
        sec = self.__second + other.__second

        if sec >= 60:
            sec -= 60
            mn += 1
        if mn >= 60:
            mn -= 60
            hr += 1
        if hr >= 24:
            hr -= 24

        return hr,mn,sec

time1 = Time(12, 58, 55)
time2 = Time(11, 50, 20)

print(f"Time 1 = {time1.time()}")
print(f"Time 2 = {time2.time()}")

print(f"Sum of Time 1 and Time 2 = {time1+time2}")

