def is_leap(year):
    if year % 4 == 0:
        return True
    else:
        return False


def month_name(no):
    months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
    return months[no-1]

def day_in_month(month, year):
    if month == 2:
        if is_leap(year):
            return 29
        else:
            return 28
    elif month in [1,3,5,7,8,10,12]:
        return 31
    else:
        return 30
