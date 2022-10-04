Recursion: Function calling itself

HOW TO THINK, TO SOLVE QUESTIONS BASED ON RECURSION? (*** PEPCODING LOGIC ***)
First of all breakdown the problem in such a way that you need to implement for only 1 case then arrange the operations one after other in proper sequential manner and call the function.
Remember, the traversal taught by Sumit Sir. (pre area, in area, post area in case to calling twice the same function in the function itself)
Remember, the logic of expectation and faith. Most impotantly, believe on faith and then met the expectation with the help of faith.
Remember, the logic of moving 1, 2, 3 steps at a time and put suitable character infront of each of the function.


lets take some examples: 

EXAMPLE: 1 -     (Print number from n to 1 in decreasing manner)
// expec: print number from n to 1
// faith: it will print the numbers from n-1 to 1

// since faith will print the numbers from n-1 to 1
// so we are only left with the work to print n
// first, we will print n
// and then call the function again passing n-1 to the function
void dec(int n)
{
    if(n==0)
        return;
    cout << n << " ";   
    dec(n-1);
}


EXAMPLE: 2 -     (Print power: x^n)
// expec: print power x^n
// faith: it will give us power x^n-1

// to meet expec with faith the only work we are supposed to do is: x*faith
int power(int x, int n)
{
    if(n==1)
        return x;
    return (x*power(x, n-1));
}
