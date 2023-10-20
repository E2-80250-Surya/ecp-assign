time = int(input("Enter time for 24hr clock: "))
print(f"Time is {time}")
if time < 11:
	print("Good Morning...")
elif time >= 11 & time <= 16:
	print("Good afternoon..")
elif time >= 16 & time <= 19:
	print("Good evening..")
else:
	print("Good night")
