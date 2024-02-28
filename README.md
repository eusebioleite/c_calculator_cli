# ccalc

ccalc is a simple command-line calculator program written in C. It supports basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Usage

To use the calculator, run the executable and provide the desired operation along with two numbers as arguments.

```bash
./ccalc [operation] [num1] [num2]
```

Supported operations:
- `a`: Addition
- `s`: Subtraction
- `m`: Multiplication
- `d`: Division

For example, to perform addition:

```bash
./ccalc a 10 5
```

This will output:

```
Result: 15.00
```

## Error Handling

The program performs basic error checking and provides informative error messages in case of invalid input or operations.

- If insufficient arguments are provided for an operation, an error message will be displayed.
- Division by zero is detected and handled with an appropriate error message.

## Usage Message

If no arguments are provided or if an invalid operation is specified, a usage message is displayed, explaining how to use the program and listing the supported operations.
