# Strings

C does not provide a built-in `str` type. A string is commonly stored in
a character array (`char name[50]`) and ends with the null character `\0`.

Use `strcmp()` from `<string.h>` to compare string contents:

- `strcmp(a, b) == 0`: strings are equal
- A value less than zero: first string sorts before second
- A value greater than zero: first string sorts after second

`strcmp()` is case-sensitive. `Mitika` and `mitika` are different strings.
