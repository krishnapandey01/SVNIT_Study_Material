.model small

.data
A dw 0045H
b dw 0045H
sum dw ?
carry db ?


.code
start:  mov ax, @data
        mov ds, ax
        mov ax, A
        add ax, B
        jnc skip
        inc carry
        skip: mov sum, ax
        mov ah, 4cH
        int 21H
end start
end
