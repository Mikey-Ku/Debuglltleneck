# C Debugging & Bottleneck Workbook

This repository contains the [**C Debugging & Performance Handbook**](workbook.md) along with all supporting source code used throughout the exercises. The goal of this project is to give you a practical, example-driven environment for learning how C programs behave at runtime,and how to diagnose and fix the memory errors, crashes, race conditions, and performance bottlenecks that appear in real systems.

You’ll learn by reading the handbook and by actively debugging the intentionally broken code in [`src/`](src), then comparing your solutions to the fully corrected version in [`Solution/`](Solution).

## Repository Structure
```
├── workbook.md # The full debugging + performance workbook
│
├── src/ # The intentionally bugged starter code
│ ├── main.c
│ ├── sensor.c
│ ├── sensor.h
│ ├── utils.c
│ ├── utils.h
│ └── CMakeLists.txt
│
├── Solutions/ # Fully corrected and optimized version of the code
│ ├── main.c
│ ├── sensor.c
│ ├── sensor.h
│ ├── utils.c
│ ├── utils.h
│ └── CMakeLists.txt
└── README.md
```
## Purpose of This Project
This project is designed to be both a learning guide and a hands-on debugging lab.  
The handbook explains different concepts such as memory layout, segmentation faults, profiling tools, and optimization techniques, while the source code lets you immediately practice those skills.

By working through the workbook, you will learn to:

#### 1. Debug the Original Code
- Identify and fix segmentation faults  
- Track down memory leaks and invalid accesses  
- Correct logic errors and undefined behavior  

#### 2. Analyze Performance
- Detect bottlenecks
- Use gprof to measure runtime cost  
- Understand mutex contention and duplicated thread work  

#### 3. Optimize the Program
- Remove oversynchronization  
- Reduce unnecessary computation  
- Improve memory usage  
- Produce a clean, efficient, scalable solution  

## Getting Started

#### 1. Build the Bugged Program
Use the included CMake configuration to compile the starter code.  

#### 2. Follow the Workbook
Open [`workbook.md`](workbook.md). It will walk you through the full debugging and optimization process:
- Debugging crashes with gdb  
- Finding leaks and invalid memory accesses with Valgrind  
- Incrementally fixing the code  
- Profiling performance problems  
- Applying optimizations and verifying improvements  

Work through the sections in order, applying changes directly to the files in [`src/`](src).

## Comparing Your Results

When you want to verify your work, open the [`Solutions/`](Solution) directory.

It contains:
- The fully corrected, memory-safe version  
- The optimized version with proper threading and debottlenecked behavior  

## Final Learning Outcomes

By completing this project, you will be able to:

- Diagnose and fix real C crashes  
- Eliminate memory leaks and invalid pointer operations  
- Avoid race conditions and oversynchronization  
- Distribute thread workloads effectively  
- Use profiling tools to guide optimization  
- Improve runtime performance through informed code changes  
