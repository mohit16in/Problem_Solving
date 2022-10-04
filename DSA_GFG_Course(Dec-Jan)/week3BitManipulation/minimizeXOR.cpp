// MINIMIZE XOR (CONTEST: 02-10-22)
int setbits1 = __builtin_popcount(num1);
int setbits2 = __builtin_popcount(num2);
int num = num1;
int diff = abs(setbits2 - setbits1);
if(setbits1==setbits2)
    return num1;
else if(setbits1 < setbits2)
{
    for(int i=0; diff>0; ++i)
    {
        if((num & (1<<i)) == 0)
        {
            num = num | 1<<i;
            diff--;
        }
    }
}
else
{
    for(int i=0; diff>0; ++i)
    {
        if(num & 1<<i)
        {
            num = (num & ~(1<<i));
            diff--;
        }
    }
}
return num;


