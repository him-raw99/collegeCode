clear; clc
disp('-------CODE BY HIMANSHU 080------')
a=input("Enter the value of a for the equation ")
b=input("Enter the value of b for the equation ")
c=input("Enter the value of c for the equation ")
D=b^2-4*a*c
if D<0
    disp("No real roots exist.")
elseif D==0
    disp("Only 1 root exist.")
else
    disp("Two real roots exist.")
    end
x = (-b+sqrt(D))/(2*a)
y = (-b-sqrt(D))/(2*a)
disp(x)
disp(y)
