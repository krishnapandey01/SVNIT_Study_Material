
;<Program title>

jmp start

;data


;code
start:	lxi h, 8001h
      
	lda 8000h
	mov b, a
loop:	mov a, m
	cpi 3ch
	jc incr
	cpi 64h
	jnc incr
	inr c
incr:	dcr b
	inx h
	jnz loop


hlt