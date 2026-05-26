# Task 3 - System Programming / File I/O & Processes

## Goal
Build a small system utility demonstrating process creation and command execution.

## Project Overview
This project implements a **Mini Shell (Command Runner)** in C++ using system programming concepts.

The program allows users to:

- Execute system commands
- Create child processes using `fork()`
- Run commands using `exec()`
- Wait for child completion using `wait()`
- Handle invalid commands and edge cases gracefully

## Features

- Process creation using `fork()`
- Command execution using `execlp()`
- Parent-child process synchronization
- Error handling
- Empty input handling
- Exit command support

## Edge Cases Handled

- Invalid commands
- Empty command input
- Process creation failure
- Graceful termination using `exit`

## How to Compile

```bash
g++ main.cpp -o app
```

## How to Run

```bash
./app
```

## Sample Run

```txt
===== MINI SHELL / COMMAND RUNNER =====

Enter command: pwd
/home/user

Enter command: date
Mon Jul 14

Enter command: abcxyz
Error: Command execution failed.

Enter command: exit
Shell terminated.
```

## Concepts Used

- fork()
- execlp()
- wait()
- Process management
