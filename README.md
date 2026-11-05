# Age Calculator in C

A command-line program that estimates a person's age from their birth year. The current year is obtained from the system's local clock

## Requirements

- GCC or another C-compatible compiler
- A terminal

## Compile

From the project directory, run:

```sh
gcc -Wall -Wextra -Wpedantic age-calculator.c -o age-calculator
```

## Run

```sh
./age-calculator
```

Enter your birth year when prompted. For example, in 2026, entering `2000` produces:

```text
Enter your birth year: 2000
Your estimated age is 26
```

The program rejects non-numeric input and birth years less than 1 or later than the current year. Since it does not ask for a month or day, the result is an estimate and may differ from the exact age by one year