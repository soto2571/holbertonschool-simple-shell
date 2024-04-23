# Simple Shell

Simple Shell is a basic command-line shell program written in C. It allows users to interact with their operating system by executing commands.

## Features

- Executes commands entered by the user.
- Supports basic command-line operations, such as executing programs, changing directories, etc.

## Usage

1. **Compilation:** 
   - Compile the source code using a C compiler such as gcc:
     ```sh
     gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
     ```

2. **Execution:**
   - Run the compiled program:
     ```sh
     ./hsh
     ```
   - This will launch the simple shell program and present you with a prompt where you can enter commands.

3. **Commands:**
   - Enter commands at the prompt and press Enter to execute them.
   - Example commands:
     ```sh
     $ ls
     $ cd directory_name
     $ echo "Hello, world!"
     ```

4. **Exiting:**
   - To exit the shell, press `Ctrl + D` or enter the `exit` command.

## Files

- `shell.c`: Source code for the simple shell program.
- `shell.h`: Header file containing function declarations and definitions.
- `README.md`: This file, providing information about the program.
- `remove_newline.c`: Remove the new line for the shell.
- `execute_command.c`: Execute important commands for the shell to run propietly.
- `hsh`: Run the shell.

## Contributors

- [Sebastian Soto](https://github.com/soto2571)
- [John Lopez](https://github.com/JohnLopezCabrera)
