%%THD udregning
% 
% t = 0:0.001:1-0.001;
% 
% x = 0.13*sin(3.1*t)+0.21*sin(1.9*t)+0.64*sin(0.63*t);
% 
% r = thd(x)

% plot(x);
% 
t = 0:0.001:1-0.001;
x = 2*cos(2*pi*100*t)+0.11*cos(2*pi*200*t)+0.005*cos(2*pi*300*t);
tharmdist = 10*log10((0.01^2+0.005^2)/2^2)

r2 = thd(x,1000,3)

plot(x)