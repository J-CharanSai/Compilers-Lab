//Sum of Digits
int sumOfDigits(int x)       // Recursive function that will return the sum 
{
    if((x/10)==0)
    {
        return x;
    }
    else
    {
        return (sumOfDigits(x%10)+sumOfDigits(x/10));     // It will calculate the sum of the digits of the number.
    }
}

int main()
{
    int n;
    printStr("++++++ Sum of Digit ++++++\n");
    printStr("Enter Integer\n"); 
    int err=1;
    n=readInt(&err);
    int s;
    s = sumOfDigits(n);
    printStr("Sum of Digit: ");
    printInt(s);
    printStr("\n++++++++++\n");
    return 0;
}
