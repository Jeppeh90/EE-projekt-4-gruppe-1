freq = 50;
%%% double check THD of square wave using the fourier series:
n = 1:10000;
freq_vec = freq*n;  % fourier series frequency vector
amp_vec = (4/pi)  * (1./n).*(mod(n,2)==1);
% compute THD by definition:
THD_square_theoretical = (sum(amp_vec(2:5).^2) / amp_vec(1)^2)^0.5