Problem:
In a company, calculate the total salary with basic salary and a character which refers to the grade level is given as input.
totalsalary=basic+hra+da+allowance-pd.


Input:
#include <bits/stdc++.h> 
int totalSalary(int basic, char grade) 
{
    float sal=(1.59)*basic;
    if(grade=='A')
    return round(sal+1700);
    else if(grade=='B')
    return round(sal+1500);
    else if(grade=='C')
    return round(sal+1300);
}
