def function1():
	n1 = [[11,22,33],[10,20,30],[12,13,14]]
	print(n1)
	print(f"type of n1 = {type(n1)}")

	for i in n1:
		print(i)
	
	for i in n1:
		for j in i:
			print(j)
	print(n1[2][2])
function1()
