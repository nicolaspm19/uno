import scipy as np
import matplotlib.pyplot as plt
import scipy.special
from math import log
import numpy as np

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



def NumberPrimesLessThan(x):
	pix=[]
	numero = 0
	for i in x:
		PrimesLessThan(i)
		numero = len(PrimesLessThan(i))
		pix.append(numero)
	return pix

x = list(range(1,10))
print NumberPrimesLessThan(x)

#Dentro del mismo script ahora grafique el arreglo pix generado...

j = list(range(1,1000))
y1 = NumberPrimesLessThan(j)
y2 = scipy.special.expi(np.log(j))

plt.figure()
plt.plot(j,y1)
plt.plot(j,y2)
plt.title("Muy cercanas")
plt.show()







