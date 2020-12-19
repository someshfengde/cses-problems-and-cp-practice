# import random
# def random_linker_classifier(dn,k,d):
#     finaltheta0=1000000000
#     finaltheta1=1000000000
#     prevsum=10000000000
#     for j in range(1,k):
#         theta1=random.randint(0,d)
#         theta0= random.randint(d,dn)
#         sum=0
#         for i in range(1,k):
#             sum = sum +( i*theta1 + theta0)
#         sum = sum/k
#         #print(str(sum) +' '+ str(theta0) +' '+ str(theta1))
#         #print('\n')
#         if(sum<prevsum):
#             prevsum=min(sum,prevsum)
#             finaltheta0=theta0
#             finaltheta1=theta1
#     return (finaltheta0,finaltheta1)
# print(random_linker_classifier(1000000000,500000,10000))
# # for i in range(1,10000000):
# #     print(random_linker_classifier(i*10,i*5,i))
# #     print('\n')
        
# import random 
# import numpy as np
# rg = np.random.default_rng(1)
# import matplotlib.pyplot as plt
# # Build a vector of 10000 normal deviates with variance 0.5^2 and mean 2
# mu, sigma = 2, 0.5
# v = rg.normal(mu,sigma,10000)
# # Plot a normalized histogram with 50 bins
# plt.hist(v, bins=50, density=1)       # matplotlib version (plot)
# # Compute the histogram with numpy and then plot it
# (n, bins) = np.histogram(v, bins=50, density=True)  # NumPy version (no plot)
# plt.plot(.5*(bins[1:]+bins[:-1]), n)
# plt.show()

import matplotlib
import matplotlib.pyplot as plt
import numpy as np
import pandas

# fig,ax = plt.subplots()
# ax.plot([[1,2,3,4],[1,4,2,3]])
# plt.plot([1,2,3,4],[1,4,2,3])
# plt.show()
# fig = plt.figure()
# fig,ax = plt.subplots()
# fix,axs = plt.subplots(2,2)
# # plt.show()
# a = pandas.DataFrame(np.random.rand(4, 5), columns = list('abcde'))
# a_asarray = a.values
# print(a)
# print(a_asarray)
b=np.matrix([[1,2],[3,4]])
# print(b)
b_asarray = np.asarray(b)
# print(b_asarray)
#object oriented style for using the matplotlib
# x=np.linspace(0,2,100)
# fig ,ax = plt.subplots()
# ax.plot(x,x,label='linear')
# ax.plot(x,x**2,label='quadratic')
# ax.plot(x,x**3,label='cubic')
# ax.set_xlabel('x axis')
# ax.set_ylabel('y axis')
# ax.set_title("simply plotted")
# ax.legend()
# plt.show()

#using the pyplot style
# x=np.linspace(0,2,100)
# plt.plot(x,x,label='linear')
# plt.plot(x,x**2,label='quadratic')
# plt.plot(x,x**3,label='cubic')
# plt.plot(x,abs(x),label='x=|x|')
# plt.xlabel("x axis")
# plt.ylabel("y-axis")
# plt.legend()
# plt.show()

# # plt.ion()
# # plt.plot([1.6,2.7])
# # print("****")
# # plt.show()
# import matplotlib.style as mplstyle
# x=np.linspace(0,20,100)
# plt.style.use('dark_background')
# plt.plot(x,x,label="linear")
# plt.plot(x,x**2,label="quadratic")
# plt.plot(x,x**3,label="cubic")
# #if we want to plot only points not the lines than we use
# plt.plot(x,x**4,'g+',label="4th power") #ro is for the rounded red dot's ,bo for the blue dots , r+ for the red pluses on the coordinates
# plt.xlabel("xaxis")
# plt.ylabel("yaxis")
# plt.legend()
# #to adjust the limits we can use either this 
# # plt.ylim(0,8500)
# #or this
# plt.axis([0,30,0,10000]) #[xmin,xmax,ymin,ymax]
# # mplstyle.use('fast')
# #we can plot the graph in one line for the linears as
# t=np.arange(1,1000,1)
# plt.plot(t,t,'r--',t,t**2,'b^',t,t**3,'bs') #here bs ,b^,r-- are blue squares,blue triangles , red dashes
# # mplstyle.use(['dark_background','ggplot','fast'])
# data = {'a' : np.arange(50),
#         'c':np.random.randint(0,50,50),
#         'd':np.random.randn(50)
#         }
# data['b']= data['a']+ 10 * np.random.randn(50)
# data['d']=np.abs(data['d']) * 100
# plt.style.use('dark_background')
# plt.scatter('a','b',c=['#1f77b4', '#ff7f0e', '#2ca02c', '#d62728', '#9467bd', '#8c564b', '#e377c2', '#7f7f7f', '#bcbd22', '#17becf','#1f77b4', '#ff7f0e', '#2ca02c', '#d62728', '#9467bd', '#8c564b', '#e377c2', '#7f7f7f', '#bcbd22', '#17becf','#1f77b4', '#ff7f0e', '#2ca02c', '#d62728', '#9467bd', '#8c564b', '#e377c2', '#7f7f7f', '#bcbd22', '#17becf','#1f77b4', '#ff7f0e', '#2ca02c', '#d62728', '#9467bd', '#8c564b', '#e377c2', '#7f7f7f', '#bcbd22', '#17becf','#1f77b4', '#ff7f0e', '#2ca02c', '#d62728', '#9467bd', '#8c564b', '#e377c2', '#7f7f7f', '#bcbd22', '#17becf'],s='d',data = data)
# plt.xlabel('entry a')
# plt.ylabel('entry b')
# plt.legend()
# plt.show()

#to combine the various graphs we can use the subplot(row,coloum,index)
# names = ['me' ,'you','us']
# values= [10,20,70]
# plt.style.use('dark_background')
# plt.subplot(131)
# plt.bar(names,values,color=['blue','red','purple'])
# plt.subplot(132)
# plt.scatter(names,values,c=['red'])
# plt.subplot(133)
# x,=plt.plot(names,values,'-')
# x.set_antialiased(False)
# plt.show()

#working with the multiple figures
# t1 = np.arange(-5.0,5.0,0.1)
# t2 = np.arange(-5.0,5.0,0.02)
# plt.style.use('dark_background')
# plt.subplot(211)
# plt.plot((np.sin(2*np.pi*t1)),'bo',np.cos(2*np.pi*t2),'ro')
# plt.subplot(212)
# plt.plot(t2,np.cos(2*np.pi*t2),'w--')
# plt.show()

#working with the text and the histogram 
mu,sigma = 100,15   
plt.style.use('dark_background')
x = mu + sigma * np.random.randn(10000)
n,bins,patches = plt.hist(x,bins=50,density=1,facecolor='g',alpha = 0.5)
zee=bins[:-1]
plt.plot(np.round(zee),n,'r--')
plt.xlabel('Smarts')
plt.ylabel('Probablity')
plt.title('Histogram of the Iq')
plt.axis([40,160,0,0.03])
plt.grid(1)
plt.show()