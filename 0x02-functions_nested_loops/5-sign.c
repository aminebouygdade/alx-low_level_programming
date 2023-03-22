#include "main.h"
  2 
  3 /**
  4 * print_sign - prints the sign of a number
  5 * @n: the int to check
  6 * Return: 1 nd prints + if n is greater than zero
  7 * Returns 0 and prints 0 if n is zero
  8 * Returns -1 and prints - if n is less than zero
  9 */
 10 
 11 int print_sign(int n)
 12 {
 13         if (n > 0)
 14         {
 15                 _putchar('+');
 16                 return (1);
 17         }
 18         else if (n == 0)
 19         {
 20                 _putchar('0');
 21                 return (0);
 22         }
 23         else
 24         {
 25                 _putchar('-');
 26                 return  (-1);
         }
 }
