
;<Program title>

jmp start

;data


;code
start:	mvi b, 09h
	mvi c, 5	;no of elements
	lxi h, 3000h
loop:	mov a, m
	cmp b
	jnc next
	inr d
next:	inx h
	dcr c
	jnz loop


hlt