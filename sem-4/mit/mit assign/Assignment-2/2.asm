
;<Program title>

jmp start

;data


;code
start:	lda 3000h
	ani 4
	jnz next
	mvi a, 00h
	sta 3002h
	hlt
next:	mvi a, 0ffh
	sta 3002h

hlt