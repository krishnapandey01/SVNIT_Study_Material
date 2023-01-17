
;<Program title>

jmp start

;data


;code
start: 	lxi h, 2000h
	mov a, m
	inx h
	mvi b, 02h
	cpi 00h
	jnz nonzero
	mov m, a

hlt
	
again: mvi c, 00h
nonzero: cmp b
	jc rem
	inr c
	sub b
	jnz nonzero
rem:	mov m, a
	inx h
	mvi a, 00h
	add c
	jnz again
	
hlt