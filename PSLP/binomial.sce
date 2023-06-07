clear; clc;
disp("program made by Himanshu Rawat 08020803121")
x=[0,0,0,0,0,0,0,0,0,0]
pp = [0,0,0,0,0,0,0,0,0,0]


for i = 1:1:10
    x(i) = input('enter the value of x :');
    f(i) = input('enter the value of y :');
end

for i = 1:1:10
    y(i)=f(i)*x(i)
end

N = sum(f)

p = sum(y)/(N*10)

q = 1-p

for i = 1:1:10
    pp(i)=round(N*(nchoosek(10,i-1)*(p^(i-1))*(q(10-i+1))));
end

disp("binomial distribution : ")
disp("xi");disp(x);
disp("yi");disp(pp);
