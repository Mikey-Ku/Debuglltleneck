# C Debugging & Bottleneck Workbook  
*A guided debugging and performance-learning project*

This repository contains a small multithreaded C program designed to help you learn how to:

- Debug C programs  
- Use tools like GDB, Valgrind and gprof  
- Identify bottlenecks in multithreaded code  
- Optimize synchronization, memory usage, and program structure  
- Compare broken code with corrected solutions  

This project pairs with the **Debugging & Bottleneck Workbook (PDF)** included in this repository. The workbook walks you step-by-step through the debugging and optimization journey.

---

## Project Structure
├── workbook.pdf # The full debugging + performance workbook
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
│ └── utils.h
│ └── CMakeLists.txt
└── README.md
## Purpose of This Project

This repository is built to accompany the workbook.  
By the end of the walkthrough, you will:

1. **Debug the original code**  
   - Fix segmentation faults  
   - Fix memory leaks  
   - Fix race conditions  
   - Fix logic errors  

2. **Analyze performance issues**  
   - Identify the bottleneck in `sensor_thread()`  
   - Measure performance with gprof, perf, and Callgrind  
   - Observe mutex contention and duplicated thread work  

3. **Optimize the code**  
   - Remove oversynchronization  
   - Reduce unnecessary computation  
   - Improve memory usage  
   - Achieve a clean, efficient solution  

Your final version should match the code in the **Solutions** folder.
---

## Getting Started

### 1. Build the bugged program

Build the program using CMake extension:
Run the program using run button or ./sensor_program in the command line

## 2. Follow the Workbook

Open the included PDF: `workbook.pdf`

The workbook will guide you through:

- Using gdb to debug crashes  
- Using Valgrind to find memory leaks/invalid accesses  
- Fixing the bugged code step-by-step  
- Rebuilding after each change  
- Running profiling tools  
- Optimizing the final version  

Follow the workbook **section by section**, fixing the code as you go.

---

## 3. Testing Your Fixes

At any point, you may compare your progress with the code in:
Solutions/

This contains:

- The fully corrected, memory-safe version  
- The optimized version with debottlenecked threading  

## Goal

By the end of this project, you should be able to:

- Fully fix every bug  
- Remove memory leaks  
- Avoid race conditions  
- Split thread workloads properly  
- Remove unnecessary locking  
- Optimize the entire sensor processing pipeline  
- Produce the same final code found in the `Solutions/` folder  
