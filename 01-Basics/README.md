# Basics

Exercises and notes about variables, data types, input/output, and format specifiers.

## Format specifier quick reference

| Type / value | `printf()` | `scanf()` |
|---|---|---|
| `int` | `%d` | `%d` |
| `float` | `%f` | `%f` |
| `double` | `%f` | `%lf` |
| `char` | `%c` | `%c` |
| Null-terminated character array (string) | `%s` | `%s` |

For `scanf()`, pass addresses for scalar variables: `scanf("%d", &number)`.
For a character array, pass the array name: `scanf("%49s", name)`.
