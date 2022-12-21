#include <stdio.h>
int main()
{
    float salary, x, y, z;

    scanf("%f", &salary);

    if (salary >= 0.00 && salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salary >= 2000.01 && salary <= 3000.00)
    {
        x = salary - 2000;
        printf("R$ %.2f\n", x * 0.08);
    }
    else if (salary >= 3000.01 && salary <= 4500.00)
    {
        x = salary - 3000;
        y = salary - 2000 - x;
        printf("R$ %.2f\n", (x * 0.18) + (y * 0.08));
    }
    else if (salary > 4500.00)
    {
        x = salary - 4500;
        y = salary - 3000 - x;
        z = salary - 2000 - y - x;
        printf("R$ %.2f\n", (x * 0.28 + y * 0.18 + z * 0.08));
    }
}
// I am a fool who makes everything complicated XD. There's a more easier solution
/*#include <stdio.h>

 int main(){
     double sal;
     scanf("%lf", &sal);

     if(sal <= 2000.00){
         printf("Isento\n");
     }else if (sal >= 2000.01 && sal <= 3000.00){
           printf("R$ %.2f\n", (sal - 2000.00)*0.08);
     }else if (sal >= 3000.01 && sal <= 4500.00){
           printf("R$ %.2f\n", ((sal - 3000.00)*0.18 + 1000.00*0.08));
     }else if (sal >= 4500.01){
           printf("R$ %.2f\n", ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
     }
     return 0;
 }*/