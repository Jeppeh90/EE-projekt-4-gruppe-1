   %% Time specifications:
                  % samples per second
%    dt = 1/Fs;                   % seconds per sample
%    StopTime = 0.25;             % seconds
%    t = (0:dt:StopTime-dt)';     % seconds
%    %% Sine wave:
%    Fc = 50;                     % hertz
   fsample = 16000; 
   x = 4*sqrt(2)*cos(2*pi*300*t) + 2*cos(2*pi*1000*t);
%    % Plot the signal versus time:
%    figure;
%    plot(t,x);
%    xlabel('time (in seconds)');
%    title('Signal versus Time');
%    zoom xon;
   
  
   %Finder antallet af samples
N = length(x);

%fsample er frekvensen fra lydfilen
Tlength = N/fsample;
Nyquist = fsample/2;

%Frekvensopløsning
delta_f = fsample/N;
delta_f_zero = fsample/(N+100000);

%x-aksen
f_axis = [0:delta_f:fsample-delta_f];
f_axis_zero = [0:delta_f_zero:fsample-delta_f_zero];

%Plot 1 - tidsdomæne
figure(1); clf
plot(x)
xlabel('Samples')
ylabel('Amplitude (Volt)')
title('Sample-plot af signalet')

X = fft(x, N);

%Hanning vindue
x_hann = x.*hann(N);
X_hann = fft(x_hann, N);

%Zero padding
x_zero = [x_hann' zeros(1, 100000)];
X_zero = fft(x_zero, N+100000);

%Plot 2 - frekvensdomæne dB akse
figure(2); clf
semilogx(f_axis, abs((2/N)*X))
hold on;

legend('uden Hanning', 'Hanning')
xlabel('Frekvens i Herz')
ylabel('Størrelse (dB)')
title('DFT størrelse (magnitude)')
grid on
   
  

