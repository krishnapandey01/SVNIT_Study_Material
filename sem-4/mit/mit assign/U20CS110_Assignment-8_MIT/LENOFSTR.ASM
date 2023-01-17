.8086
.model small
.data
string1 db 'Mihir$'

.code
start:  mov ax, @data
        mov ds, ax
        mov cl, 00H
        lea si, string1
        mov al, 24H
        next:   cmp [si], al
                jz skip
                inc si
                inc cl
                jmp next
        skip:   lea si, string1
                inc si
                mov [si + 05H], cl
        mov ax, 4C00H
        int 21H
        end start
end
        
