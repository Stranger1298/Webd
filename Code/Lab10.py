class student:
    def __init__(self,name,usn):
        self.name=name
        self.usn=usn
        self.marks=[]
        self.total=0
    def getmarks(self):
        for i in range(3):
            marks=float(input(f"Marks of subject {i+1}: "))
            self.marks.append(marks)
            self.total+=marks
    def display(self):
        print("Name: ",self.name)
        print("Usn: ", self.usn)
        print("Marks: ")
        for i in range(3):
            print(f"Subject{i+1} : {self.marks[1+1]}")
        print("Total: ",self.total)
        print("Percentage: ",round((self.total/3),2))
    name=input("Enter name: ")
    usn=input("Enter usn: ")
    student=student(name,usn)
    student.getmarks()
    student.display()