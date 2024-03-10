import Dates
def main():
    year = int(input("Enter year as 4 digits (e.g: 2002):"))
    month = int(input("Enter month number:"))

    print("Year: Leap Year" if Dates.is_leap(year) else "Year: Not Leap Year")
    print("Month Name: ", Dates.month_name(month))
    print("Days in month: ", Dates.day_in_month(month, year))
    
    return

if __name__ == '__main__':
    main()
