'''Write a python program that inputs 2 integers from the user and computes the
sum of integers between these values. In this task, only even integers should
be added to compute the sum. Finally, display the sum on screen.'''



start = int(input("Enter the starting integer: "))
end = int(input("Enter the ending integer: "))

if start > end:
    print("Error: The starting integer should be less than or equal to the ending integer.")

else:
    even_sum = 0
    for num in range(start, end + 1):
        if num % 2 == 0:
            even_sum += num
    print(f"The sum of even integers between {start} and {end} is: {even_sum}")
