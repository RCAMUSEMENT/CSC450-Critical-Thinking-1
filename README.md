# CSC450: Programming III — Critical Thinking 1

**Student Name:** Ryley Carlson
**Course:** CSC450 - Programming III (Module 1)
**Development Environment:** Visual Studio Code (C/C++ Extension Pack)
**Compiler Toolchain:** GCC / G++ Cross-Platform Environment

---

## Project Overview
This repository contains the complete deliverables for the Module 1 Critical Thinking assignment. The project is split into three primary software engineering tasks:
1. **Fictional Profile Application (`person.cpp`):** A custom console application built from scratch featuring a tailored "PERSONAL PROFILE MATRIX: PALEONTOLOGIST" display card utilizing compile-time optimized immutable string views to render structural character metadata.
2. **Syntax Correction Module 1 (`CSC450_CT1_mod1-1.cpp`):** A refurbished template application patched for string-literal encapsulation bugs and updated to bypass legacy, platform-locked dependencies (`<conio.h>`).
3. **Syntax Correction Module 2 (`CSC450_CT1_mod1-2.cpp`):** A financial tracking script optimized with stream manipulators to prevent decimal truncation and explicitly handle variable numeric data inputs with double precision.

---

## Hardware Optimization Note
While Eclipse IDE was originally recommended for this course, it utilizes a heavy GUI runtime framework that creates an overwhelming processing overhead on integrated graphics processing units (such as the legacy Intel HD 530 architecture). To mitigate UI thread blocking, asset delay bottlenecks, and local development system lag, this entire project environment was migrated to a highly optimized Visual Studio Code workspace configuration.

---

## Compilation and Execution Instructions

To compile and run any of the source files manually via your local native terminal framework, execute the following compiler commands:

### 1. Personal Profile Application
```bash
g++ -std=c++20 person.cpp -o person_app
./person_app
```

### 2. Corrected Program 1
```bash
g++ -std=c++20 CSC450_CT1_mod1-1.cpp -o corrected_app1
./corrected_app1
```

### 3. Corrected Program 2
```bash
g++ -std=c++20 CSC450_CT1_mod1-2.cpp -o corrected_app2
./corrected_app2
```

---

## Identified Bug Fixes & Modifications

### CSC450_CT1_mod1-1.cpp Changes:
* **Resolved String Literal Errors:** Added missing encapsulation double-quotes around the secondary console output block.
* **Eliminated `<conio.h>` Dependency:** Stripped out legacy, non-standard Windows console behaviors to allow clean compilation on modern macOS, Linux, and Windows operating systems.
* **Enhanced Stream Behavior:** Implemented cross-platform buffer flushes (`std::flush`) alongside safe window execution hold loops.

### CSC450_CT1_mod1-2.cpp Changes:
* **Restored Missing Insertion Operators:** Patched empty instruction breaks by restoring the missing `<<` operators on the primary `cout` target.
* **Balanced String Literal Boundaries:** Appended missing closing double-quotes to secure structural compilation tracking.
* **Injected Active Data Attributes:** Explicitly mapped the uncalled `myMoney` variable directly into the active console stream output while fixing floating-point decimal precision boundaries via `<iomanip>`.