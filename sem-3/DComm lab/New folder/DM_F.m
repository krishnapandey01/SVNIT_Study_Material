clc;clear all;close all;

% Delta Modulation (DM)   
predictor = [0 1];
partition = -1:.1:.9;
step=0.2;
partition = [0];
codebook = [-1*step step]; 
%DM quantizer   
t = 0:pi/20:2*pi; 
x = 1.1*sin(2*pi*0.1*t); % Analog Signal
 
% Quantize x(t) using DPCM. 
encoded_x=dpcmenco(x,codebook,partition,predictor);   
% Try to recover x from the modulated signal. 
decoded_x=dpcmdeco(encoded_x,codebook,predictor); 

figure
plot(t,x);
xlabel('time');
title('original signal');
figure
stairs(t,10*codebook(encoded_x+1),'g');
xlabel('time');
title('DM output'); 
figure
plot(t,x);
hold;
stairs(t,decoded_x);
grid;
xlabel('time');
title('received signal');





