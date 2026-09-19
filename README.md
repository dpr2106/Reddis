# Reddis 

Hey! This is my personal project where I'm building a clone of a **Redis** server completely from scratch using **C++**.

Instead of just using a massive web framework that does everything for me, I wanted to learn how things actually work under the hood. So, this project uses raw operating system network sockets to manually accept incoming TCP connections. It's been a massive learning experience figuring out how Windows and Linux handle networking differently!

Currently, the server successfully boots up, binds to port `6379`, and listens for clients.

### 🛠️ Built With
* **C++** (Because I hate myself, but love performance)
* **Raw OS Sockets** (`winsock2.h` on Windows, POSIX on Linux)
* **g++ Compiler** (via MSYS2 on Windows)

---

##  How to run it yourself

If you want to test this out on your own machine, here is how you do it. 

*(Note: If you're on Windows like me, make sure you have MSYS2 or MinGW installed so you can use `g++`)*.

### 1. Compile it
Open up your terminal, navigate into the `src/` folder, and run this command to compile the code. We have to link the `ws2_32` library so Windows knows how to handle the networking stuff:

```powershell
g++ main.cpp Redisserver.cpp -o Redisserver -lws2_32
