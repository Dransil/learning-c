# Learning C 🚀

A progressive learning journey through C programming, building foundational
knowledge to eventually create a CHIP-8 emulator from scratch.

## Learning Path

### Module 1 — Fundamentals
- **Lesson 00** — Hello World, compiling and running C programs
- **Lesson 01** — Bitwise operations (`&`, `|`, `^`, `<<`, `>>`)
- **Lesson 02** — Variables and data types (`uint8_t`, `uint16_t`)
- **Lesson 03** — Arrays and memory
- **Lesson 04** — Functions and structs
- **Lesson 05** — Pointers
- **Lesson 06** — Conditionals and switch
- **Lesson 07** — File I/O (reading binary files)

## Key Concepts Learned

- How computers represent data in binary and hexadecimal
- Bitwise manipulation to extract nibbles from opcodes
- Exact memory control with fixed-size types from `<stdint.h>`
- How overflow works at the hardware level
- Structs and pointers to manage complex state
- Reading binary files — the foundation for loading ROMs

## Project Structure
```
learning-c/
├── 00_helloworld.c    # First C program
├── 01_bits.c          # Bitwise operations and opcode decoding
├── 02_variables.c     # Data types and fixed-size integers
├── 03_arrays.c        # Arrays and memory simulation
├── 04_chip8.c         # CHIP-8 struct skeleton
├── 05_pointers.c      # Pointers and memory addresses
├── 06_switch.c        # Switch decoder for opcodes
└── 07_files.c         # Binary file reading
```

## What's Next

All concepts learned here were applied to build a fully functional
**CHIP-8 emulator** → [chip8-emulator](https://github.com/Dransil/chip8-emulator)

## Tools

- **Compiler:** GCC 15.2.0 (via MSYS2)
- **Editor:** VS Code
- **OS:** Windows
