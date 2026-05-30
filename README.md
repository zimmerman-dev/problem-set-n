# Problem Set N
This project is a compilation of problems taken from textbooks and online sources. The point of making it public repo is to keep it easy to access for myself and others.

*no AI used*.

## Project Structure
```bash
problem-set-n/
├── problem-set-1/
│   ├── CMakeLists.txt
│   ├── problem1.c
│   └── problem2.c
├── problem-set-2/
│   ├── CMakeLists.txt
│   ├── problem1.c
│   └── ...
```

## Build
```bash
cd problem-set-1
cmake -B build
cmake --build build
```

## CMake
```cmake
cmake_minimum_required(VERSION 3.20)

project(ProblemSet1 C)

set(CMAKE_C_STANDARD 11)

add_executable(problem1 problem1.c)
add_executable(problem2 problem2.c)
```

## Directories

### Problem Set 1

**problem1.c**

Calculate the distance between to points on a plane.

### License
This project is licensed under the GPL V2
