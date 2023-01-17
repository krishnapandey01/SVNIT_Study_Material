
;<Program title>

jmp start

;data


;code
start:	mvi b, 7	; number to check for
	mvi a, 1
	mvi c, 8
	mvi d, 1
loop:	mov a, d	
	ana b
	jz next
	inr e		;answer in e register
next:	mov a, d	
	add d
	mov d, a
	dcr c
	jnz loop


hlt