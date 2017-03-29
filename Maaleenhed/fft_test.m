clc
clf
clear
fsample = 1070;
%x = [3452 3579 3599 3509 3319 3048 2726 2386 2063 1792 1600 1510 1528 1654 1875 2168 2500 2838 3147 3393 3452 3579 3599 3509 3319 3048 2726 2386 2063 1792 1600 1510 1528 1654 1875 2168 2500 2838 3147 3393 3452 3579 3599 3509 3319 3048 2726 2386 2063 1792 1600 1510 1528 1654 1875 2168 2500 2838 3147 3393 3452 3579 3599 3509];
t = [0:61];
x = 1*sin(2*pi*50*t);

N = length(x);

%fsample er frekvensen fra lydfilen
Tlength = N/fsample;
Nyquist = fsample/2;

%Frekvensopløsning
delta_f = fsample/N;
delta_f_zero = fsample/(N+100000);

%x-aksen
f_axis = [0:delta_f:fsample-delta_f];

X = fft(x);


figure(1); clf
semilogx(f_axis,abs((2/N)*X))





