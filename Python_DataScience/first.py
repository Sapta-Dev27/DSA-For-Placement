#taking inputs in Python
a = int(input("Enter the 1st Number :"))
b = int(input("Enter the 2nd Number :"))
#sum of 2 nos
sum = a + b
print(" The sum is " , sum)
print(type(sum))

#taking floating numbers as input 
c =float(input("Enter the 1st floating number :"))
d = float(input("Enter the 2nd floating number :"))
#sum and average of 2 floating nos
sum2 = c+d 
avg = sum/2.0
print("The sum is " , sum2)
print("The average is " , avg)
print(type(sum2))
print(type(avg))

#typecasting in python 
e = int(input("Enter the interger number :"))
f= float(input("Enter the floating number :"))
g = int(f)
h=float(e)
sum3 = e + g 
sum4 = f +h 
print("The sum is " , sum3)
print("The sum is " , sum4)
print(type(sum3))
print(type(sum4))

#relational operators
a = int(input("Enter the value of a :"))
b = int(input("Enter the value of b :"))
if (a>=b):
  print("True")
else:
  print("False")

#area of a square
side = float(input(" Enter the value of side of a square : "))
area = side*side 
print( " The area of the square is :" , area)
print(type(area))


