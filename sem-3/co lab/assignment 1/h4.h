int binAddition(int a, int b)
{
    int c;
    while (b != 0) {
      
        c = (a & b) << 1;
      
        a = a ^ b;
        b = c;
    }
    return a;
}
int subtraction_unsigned_binary_numbers_Y20CSXYZ(int a, int b)
{
    int carry;

    b = binAddition(~b, 1);

    while (b != 0) {
    
        carry = (a & b) << 1;
   
        a = a ^ b;
        b = carry;
    }
    return a;
}
int subtraction_signed_binary_numbers_Y20CSXYZ(int a, int b)
{
    int carry;
  
    b = binAddition(~b, 1);

    while (b != 0) {
       
        carry = (a & b) << 1;
      
        a = a ^ b;
        b = carry;
    }
    return a;
}