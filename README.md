# Project README

## Overview
The project is a GUI Shell application built in C. It utilizes libraries such as WindowEngine, Files, and Shell to create an interactive command-line interface within a graphical user environment.

## Features
- Command-line interface (CLI) with history support.
- Basic shell functionalities like executing commands and navigating the filesystem.

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
### Linux
To build and run on Linux:

```bash
cd <Project>
make -f Makefile.linux all
make -f Makefile.linux exe
```

### Windows
To build and run on Windows:

```bash
cd <Project>
make -f Makefile.windows all
make -f Makefile.windows exe
```

### Wine (Linux Cross-Compile for Windows)
To build and run using Wine on Linux:

```bash
cd <Project>
make -f Makefile.wine all
make -f Makefile.wine exe
```

### WebAssembly (Emscripten)
To build and run the application in a web browser using Emscripten:

```bash
cd <Project>
make -f Makefile.web all
make -f Makefile.web exe
```

For more detailed instructions on each platform, refer to the respective `Makefile` files.