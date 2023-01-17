
;<Program title>

jmp start

;data


;code
start:	lxi h, 400ah
	mvi c, 06h
	lda 4009h
up:	cmp l
	jz exit
	inx h
	dcr c
	jnz up
	mvi a, 00h
	out 20h
	hlt

exit:	mov a, m
	out 20h
	hlt