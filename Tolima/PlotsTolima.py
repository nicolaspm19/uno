import matplotlib.pylab as plt
import numpy as np

#Datos
Marzo = np.genfromtxt('DatosMarzo.txt')
Anio = np.genfromtxt('GRF_vs_EQ.txt')

GR_Marzo = Marzo[:,0]
LE_Marzo = Marzo[:,1]
GR_Anio = Anio[:,0]
LE_Anio = Anio[:,1]



#Grafica

plt.figure(figsize=(8,5))
plt.plot(LE_Marzo,GR_Marzo,'go',ms=10, label='Marzo')
plt.plot(LE_Anio,GR_Anio, 'ko',ms=1, label='Todos los Meses')
plt.xlabel('Largest Eatrhquake', fontsize=12)
plt.ylabel('Glacier & RockFall', fontsize=12)
plt.legend(frameon = False)
#savefig('PlotTolima.pdf')
plt.show()
