import numpy as np
import matplotlib.pyplot as plt

#main function
line1 = np.loadtxt("rkdata.txt")
plt.plot(line1[:,0],line1[:,1],color='red')
plt.xlabel("x --->")
plt.ylabel("y --->")
plt.show()
