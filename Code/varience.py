from math import sqrt
mylist=[]
num=int(input("Enter the number of elemente in yout list: "))
for i in range(num):
    val=int(input("Enter the element: "))
    mylist.append(val)
print('The length of the list1 is',len(mylist))
print('list contents',mylist)
total=0
for elements in mylist:
    total=total+elements
mean=total/num
total=0
for elements in mylist:
    total=total+((elements-mean)*(elements-mean))
varience=total/num
stddev=sqrt(varience)
print('mean=',mean)
print('varience=',varience)
print('standard deviation=',stddev)