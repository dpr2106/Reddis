# Reddis 🚀

A lightweight, custom implementation of a Redis server built completely from scratch in C++. 

This project explores raw network programming, operating system sockets, and custom TCP server architecture. Currently, it supports multi-platform socket initialization (Windows and POSIX) and can successfully bind, listen, and accept client TCP connections.

## 🛠️ Tech Stack
- **Language**: C++
- **Networking**: Raw OS Sockets (Winsock2 for Windows, POSIX Sockets for Linux/macOS)
- **Compiler**: `g++` (MinGW-w64 recommended on Windows)

## ⚙️ Features
- Custom TCP Server implementation
- Cross-platform socket abstraction (Windows & Linux compatible)
- Dedicated server loop for accepting incoming client connections

---

## 🚀 Getting Started

### Prerequisites
If you are on Windows, ensure you have the [MSYS2 UCRT64 toolchain](https://www.msys2.org/) (or similar) installed to use `g++`.

### Compilation
Clone the repository and compile the source code using `g++`. Because this project uses raw network sockets, Windows users must link the `ws2_32` library.

Navigate to the `src` folder and run:
```powershell
g++ main.cpp Redisserver.cpp -o Redisserver -lws2_32
