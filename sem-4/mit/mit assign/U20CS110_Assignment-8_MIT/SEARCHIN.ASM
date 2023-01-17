.8086
.model small
.data
arr db 41H,42H,43H,44H,45H,54H,53H
ele db 55H


.code
start:  mov ax, @data
        mov ds, ax
        lea si, ele
        mov al, [si]
        mov cx, 0007H
        lea si, arr
        next:   cmp al, [si]
                jz skip
                inc si
                loop next
        lea si, arr
        mov [si + 07H], 0EEH
        jmp over
        skip:   lea si, arr
                mov [si + 07H], 0DDH
        over: nop
        mov ax, 4C00H
        int 21H
        end start
end
