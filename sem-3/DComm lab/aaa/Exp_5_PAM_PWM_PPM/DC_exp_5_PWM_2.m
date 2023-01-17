clc;
close all;
clear all;
t=0:0.0001:1;
s=sawtooth(2*pi*10*t+pi);
m=0.75*sin(2*pi*1*t);
n=length(s);
for i=1:n
 if (m(i)>=s(i))
 pwm(i)=1;
 elseif (m(i)<=s(i))
 pwm(i)=0;
 end
end

subplot(3,1,1)
plot(t,m,'m');
ylabel('Amplitude');
axis([0  1 -1.5 1.5]);
xlabel('Time index');
grid on;

subplot(3,1,2)
plot(t,s,'b');
ylabel('Amplitude');
axis([0  1 -1.5 1.5]);
xlabel('Time index');
title('PWM Wave');
grid on;

subplot(3,1,3)
plot(t,pwm,'r');
ylabel('Amplitude');
axis([0  1 -1.5 1.5]);
xlabel('Time index');
grid on;

