
#ifndef h2

void decimal_to_unsigned_binary_U20CS135(int n)
{
    int binaryNum[32];
 
    
    int i = 0;
    while (n > 0) {
 
       
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
  for (int j = i - 1; j >= 0; j--)
       printf("%d",binaryNum[j]);
    
    int octalNum[100];
 

     i = 0;
    while (n != 0) {
 
   
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
       printf("%d",octalNum[j]);

     
}

#define h2
#endif