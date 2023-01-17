.model small
.data
arr db 41H, 42H, 43H, 54H, 40H, 19H
ans db ?

.code
start:  mov ax, @data
        mov ds, ax
        lea si, arr
        mov cx, 0005H
        mov al, [si]
        inc si
        next: 
                cmp [si], al
                jnc skip
                mov al, [si] 
                skip: inc si
                loop next
                mov ans, al
                mov ah, 4cH
                int 21H
end start
end

