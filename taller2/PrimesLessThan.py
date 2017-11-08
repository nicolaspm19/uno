true = 1
false = 0
def IsPrime(n):
	if(n<2):
		return false
	elif(n==2):
		return true
	elif(n>2):
		c=0
		for i in range(1,n+1):
			if(n%i == 0):
				c = c+1
		if(c == 2):
			return true
		else:
			return false
				

def PrimesLessThan(m):
	menoresquem = []
	if(m<2 or m==2):
		menoresquem
	else:
		for i in range(1,m):
			if(IsPrime(i)==true):
				menoresquem.append(i)
	return menoresquem

print PrimesLessThan(89)
		
	
