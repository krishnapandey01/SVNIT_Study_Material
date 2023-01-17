jmp start


start: MVI A, 38H
    STA 3000H
	ANI 08H
	JNZ next
	MVI A, 00H
	STA 3002H
	HLT
next: MVI A, 0FFH
	STA 3002H

HLT