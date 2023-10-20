def personInfo():
	person = { "name":"Surya",
	           "addr":"Sitamarhi Bihar",
			   "age":23,
			   "mobile":"865198987"
			  }
	print(f"person info = {person}")
	print(f"type of person = {type(person)}")

	print(f"person age = {person['age']}")
	print(f"person mobile= {person['mobile']}")
personInfo()
