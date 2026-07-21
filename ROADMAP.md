# Learn-C-Core Roadmap

## Purpose

This repository documents the journey of learning C from the fundamentals to advanced core C programming.

The goal is not only to learn syntax, but to understand how C works close to the machine:

- how programs are compiled
- how memory works
- how data is represented
- how resources are managed
- how larger programs are designed

By completing this roadmap, the goal is to become comfortable reading, writing, debugging, and designing real C programs.

---

# Learning Philosophy

The focus of this repository:

- Learn concepts deeply, not just memorize syntax.
- Build projects while learning.
- Document mistakes and discoveries.
- Understand why things work.
- Prefer writing solutions manually before using libraries.
- Improve existing projects instead of constantly starting new ones.

---

# Roadmap Overview

## Phase 1 — Understanding C

Learning how C programs are created and the foundations of the language.

- Level 0 — Toolchain & Compilation
- Level 1 — Core C Language

---

## Phase 2 — Memory & Data Representation

Understanding the biggest difference between C and higher-level languages.

- Level 2 — Arrays, Strings & Memory Layout
- Level 3 — Pointers & Memory
- Level 4 — Dynamic Memory

---

## Phase 3 — Building Real Programs

Moving from small programs to structured applications.

- Level 5 — Structures & Custom Data Types
- Level 6 — Files & Persistence

---

## Phase 4 — Computer Science Using C

Implementing important concepts manually.

- Level 7 — Data Structures & Algorithms

---

## Phase 5 — Advanced Core C

Writing programs closer to professional C development.

- Level 8 — Advanced Language Features & Build Systems
- Level 9 — Systems Programming Concepts

---

## Phase 6 — Professional C Development

Learning how real-world C projects are maintained.

- Level 10 — Production Quality C

---

# Level 0 — Toolchain & Program Lifecycle

## Goal

Understand what happens from writing C code to running an executable.

## Concepts

### C Development Environment

- Installing compiler
- GCC
- Clang
- Compiler versions
- Command line workflow

### Compilation Process

- Source files
- Header files
- Preprocessor
- Compilation
- Assembly
- Object files
- Linking
- Executables

### Compiler Usage

- Compiler flags
- Warning levels
- Optimization flags
- Debug builds

Important flags:

- -Wall
- -Wextra
- -Werror
- -g

### Debugging

- Reading compiler errors
- Debugging workflow
- Using debugger tools
- Breakpoints
- Stepping through code

### Command Line Programs

- argc
- argv
- exit codes

## Project

### Calculator CLI

Features:

- Basic arithmetic
- Command line input
- Multiple source files
- Error handling

---

# Level 1 — Core C Language

## Goal

Learn the foundation of writing C programs.

## Concepts

### Basic Syntax

- Program structure
- Statements
- Blocks
- Comments

### Data Types

Primitive types:

- char
- int
- float
- double

Modifiers:

- short
- long
- signed
- unsigned

### Variables

- Declaration
- Initialization
- Assignment
- Scope

### Operators

- Arithmetic operators
- Comparison operators
- Logical operators
- Bitwise operators
- Assignment operators
- Increment/decrement

### Control Flow

- if
- else
- switch
- while
- do while
- for

### Functions

- Function declaration
- Function definition
- Parameters
- Return values
- Function scope

### Important Concepts

- Pass by value
- Storage duration
- Variable lifetime

### Type Features

- enum
- typedef

## Project

### Terminal Banking Application

Features:

- Create accounts
- Deposit
- Withdraw
- Transfer
- Transaction history

---

# Level 2 — Arrays, Strings & Memory Layout

## Goal

Understand how data is stored in memory.

## Concepts

### Arrays

- One dimensional arrays
- Multidimensional arrays
- Array initialization
- Array traversal

### Strings

- Character arrays
- Null terminator
- String manipulation
- string.h

Functions:

- strlen
- strcpy
- strcmp
- strcat

### Memory Understanding

- Bytes
- Memory addresses
- Data representation
- Stack memory introduction

### Array Behaviour

- Array indexing
- Array decay
- Relationship between arrays and pointers

### Safety

- Buffer overflow
- String limitations
- Bounds checking

### Qualifiers

Introduction to:

- const

## Project

### Contact Manager

Features:

- Add contacts
- Delete contacts
- Edit contacts
- Search
- Sort

---

# Level 3 — Pointers & Memory

## Goal

Develop the mental model required for C.

## Concepts

### Pointers

- Addresses
- Pointer variables
- Dereferencing
- Pointer initialization

### Pointer Operations

- Pointer arithmetic
- Pointer comparison
- NULL pointers

### Arrays and Pointers

- Array pointers
- Pointer arrays
- Passing arrays to functions

### Functions and Pointers

- Passing addresses
- Modifying data through pointers
- Returning pointers

### Memory Model

- Stack
- Heap
- Memory lifetime

### Important Concepts

- Undefined behavior
- Dangling pointers
- Invalid memory access
- Segmentation faults

### const With Pointers

- Pointer to const
- Const pointer
- Const pointer to const

## Project

### Memory Explorer

Features:

- Display addresses
- Inspect values
- Explore arrays
- Pointer demonstrations

---

# Level 4 — Dynamic Memory Management

## Goal

Learn manual memory management.

## Concepts

### Heap Allocation

Functions:

- malloc
- calloc
- realloc
- free

### Memory Ownership

- Who owns memory?
- Who frees memory?
- Lifetime management

### Common Problems

- Memory leaks
- Dangling pointers
- Double free
- Use after free
- Memory corruption

### Better Practices

- Allocation checks
- Cleanup patterns
- Resource management

## Project

### Dynamic Todo Application

Features:

- Unlimited todos
- Dynamic resizing
- Persistent memory handling

---

# Level 5 — Structures & Custom Data Types

## Goal

Create complex data models.

## Concepts

### Structures

- struct
- Members
- Nested structures
- Arrays of structures

### Structure Memory

- Padding
- Alignment
- sizeof behaviour

### Struct Pointers

- Pointer to struct
- Arrow operator

### Additional Types

- union
- bit fields

### Design Concepts

- Data modeling
- Separation of data and logic

## Project

### Library Management System

Features:

- Books
- Members
- Borrowing
- Searching
- Statistics

---

# Level 6 — Files & Persistence

## Goal

Make programs store and retrieve information.

## Concepts

### File Handling

- FILE pointer
- fopen
- fclose

### Reading/Writing

- fprintf
- fscanf
- fgets
- fputs
- fread
- fwrite

### File Types

- Text files
- Binary files

### Data Persistence

- Serialization
- Deserialization

### Error Handling

- Return values
- errno
- Error checking

## Project

### Expense Tracker

Features:

- Save expenses
- Load data
- Reports
- Export data

---

# Level 7 — Data Structures & Algorithms

## Goal

Understand how important structures are built internally.

## Concepts

Implement manually:

## Linear Structures

- Stack
- Queue
- Linked List

## Non Linear Structures

- Binary Search Tree
- Hash Table
- Priority Queue

## Algorithm Concepts

- Searching
- Sorting
- Traversal
- Complexity basics

## Projects

- Stack based undo system
- Queue simulation
- Playlist manager
- Dictionary
- Task scheduler

---

# Level 8 — Advanced C Features & Build Systems

## Goal

Learn features used in larger C projects.

## Concepts

### Preprocessor

- #define
- Macros
- Header guards
- Conditional compilation

### Compilation Organization

- Multiple source files
- Header design
- Libraries

### Build Systems

- Makefiles
- Build automation

### Advanced Language Features

- Function pointers
- Callbacks
- Flexible array members

### Bit Manipulation

- Bit operators
- Masks
- Flags
- Binary representation

### Storage and Linkage

- static
- extern
- global variables

### Type Qualifiers

- volatile
- restrict (introduction)

## Project

### Modular Command Line Toolkit

---

# Level 9 — Systems Programming Concepts

## Goal

Understand how C interacts with operating system concepts.

## Concepts

### Processes

- Program vs process
- Process lifecycle

### Threads

- Creating threads
- Thread synchronization
- Race conditions

### Synchronization

- Mutexes
- Locks
- Shared resources

### Networking Basics

- Sockets
- Client/server model
- Data communication

### Performance

- Profiling
- Optimization
- Memory usage analysis

### Portability

- Platform differences
- Standard C vs platform-specific C

## Project

### Multi-client Application

---

# Level 10 — Production Quality C

## Goal

Write maintainable professional C software.

## Concepts

### Project Architecture

- Module design
- Separation of concerns
- API design

### Error Handling

- Error propagation
- Validation
- Defensive programming

### Code Quality

- Naming conventions
- Documentation
- Code reviews
- Style consistency

### Testing

- Unit testing concepts
- Test organization
- Assertions

### Debugging Tools

- Static analysis
- Memory analysis
- Profiling tools

### Software Engineering

- Version control
- Releases
- Documentation
- Maintainability

## Final Goal

Build complete, modular C applications following professional practices.

---

# After Learn-C-Core

Future repositories will focus on specialized areas:

- Embedded Systems
- Linux/System Programming
- Networking
- Advanced Projects
- Algorithms
- Performance Engineering

Learn-C-Core is the foundation.