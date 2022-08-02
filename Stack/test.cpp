#include <stdio.h>
int main()
{
    int price, loaves, regularprice;
    float discountrate, discount, finalprice;
    scanf("%d", &loaves);
    price = 185;
    regularprice = price * loaves;
    discountrate = 60;
    discount = (discountrate * regularprice) / 100;
    finalprice = regularprice - discount;
    printf("Regular Price=%d\n", regularprice);
    printf("Amount Discounted=%0.2f\n", discount);
    printf("Amount to be paid=%0.2f\n", finalprice);
    return 0;
}