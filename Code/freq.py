num=input("Enter a number: ")
print("The number entered is: ",num)
uniq_dig=set(num)
for elements in uniq_dig:
    print(elements,"occurs",num.count(elements),"times")