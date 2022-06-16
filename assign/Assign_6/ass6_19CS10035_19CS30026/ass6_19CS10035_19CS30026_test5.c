// Calculate Interest
int main()

{
    int principal_amt, rate, simple_interest;
    int time,err;
    printStr("Enter the integer values of 1) principal_amt, 2) rate  3)time (Answer rounded in integers):\n");
    principal_amt = readInt(&err);
    rate = readInt(&err);
    time = readInt(&err);

    simple_interest = (principal_amt * rate * time) / 100;

    printStr("Simple interest = ");
    printInt(simple_interest);
    printStr("\n");
    printStr("\n+++++++++++++++++++++++\n");
    return 0;

}
