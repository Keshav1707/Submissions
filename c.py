import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split

df = pd.read_csv("D:\downloads\ML_MNNIT-20230604T085700Z-001\ML_MNNIT\Iris.csv")

#df.plot()

#plt.show()
data_array=np.asarray(df)
print (data_array)
x_t=data_array[:,1:2]
y_t=data_array[:,2:3]
xtrain,xtest,ytrain,ytest=train_test_split(x_t,y_t,test_size = 0.3)
reg=LinearRegression()
reg.fit(xtrain,ytrain)
ypred=reg.predict(xtest)
plt.scatter(xtest,ytest)
plt.plot(xtest,ypred)
plt.show()

