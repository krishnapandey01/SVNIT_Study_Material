#ifndef h3

void binary_to_hexad_U20CS135(int n)
{
    
       int octalNum[100];
 

     int i = 0;
    while (n != 0) {
 
   
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
       printf("%d",octalNum[j]);

}
#define h3
#endif