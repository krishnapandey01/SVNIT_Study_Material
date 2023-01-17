clc;close all;clear all;
M=16;
x=(0:M-1);
y=qammod(x,M);
scatterplot(y);
grid on;
%% 
clc;close all;clear all;
M=[4 8 16 64 128 256];

ber_th=[];
for i= 1:length(M)
ber_th1=[];
for EbN0dB=0:20;
    EbN0=10^(EbN0dB/10);
    ber=(1/log2(M(i)))*(2*(1-sqrt(1/M(i)))*erfc(sqrt((3*log2(M(i))*EbN0)/(2*(M(i)-1)))));
    ber_th1=[ber_th1 ber];
end
ber_th=[ber_th;ber_th1];
end
EbN0dB=0:20;
semilogy(EbN0dB,ber_th(1,:),'ro-');hold on
semilogy(EbN0dB,ber_th(2,:),'g+-');hold on
semilogy(EbN0dB,ber_th(3,:),'y.-');hold on
semilogy(EbN0dB,ber_th(4,:),'k>-');hold on
semilogy(EbN0dB,ber_th(5,:),'c<-');hold on
semilogy(EbN0dB,ber_th(6,:),'m*-');hold on
xlabel('Eb/N0(dB)');
ylabel('BER');
title('BER of 16-QAM');
legend('4-QAM','8-QAM','16-QAM','64-QAM','128-QAM','256-QAM');
axis([0 20 10^-6 10^0]); grid on
