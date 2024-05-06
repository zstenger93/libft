#include "../../includes/libft.h"

char *ft_itoa1(int value, char *str, int base) {
  char *ptr = str, *ptr1 = str, tmp_char;
  int tmp_value;

  do {
    tmp_value = value;
    value /= base;
    *ptr++ = "fedcba9876543210123456789abcdef"[15 + (tmp_value - value * base)];
  } while (value);

  if (tmp_value < 0)
    *ptr++ = '-';
  *ptr-- = '\0';
  while (ptr1 < ptr) {
    tmp_char = *ptr;
    *ptr-- = *ptr1;
    *ptr1++ = tmp_char;
  }
  return str;
}