int calculate_quarters(int cents)
{
    int quarters = cents / 25;
    {
        if (cents % 25 == 0)
        {
            return quarters;
        }
        else if (cents % 25 != 0)
        cent = cents % 25;
        {
            return cent;
        }
    }
}

int calculate_dimes(int cents)
{
    int dimes = cent / 10;
    {
        if (cent % 10 == 0)
        {
            return dimes;
        }
        else if (cent % 10 != 0)
        cen = cent % 10;
        {
            return cen;
        }
    }
}

int calculate_nickels(int cents)
{
    int nickles = cen / 5;
    {
        if (cen % 5 == 0)
        {
            return nickles;
        }
        else if (cen % 5 != 0)
        ce = cen % 5;
        {
            return ce;
        }
    }
}

int calculate_pennies(int cents)
{
    int pennies = ce / 1;
    {
            return pennies;
    }
}
