# FLTK学习笔记1-绘制基本控件（按钮、文本输入、容器） #

在本示例程序中，创建了按钮、容器、文本框等基本控件。

在MSYS2+mingw环境和Manjaro+gcc环境编译成功。

### 编译方式： ###
#### 1. Makefile编译。 ####
在bash中直接输入`make`即可完成编译，输入`make clean`清理可执行程序。
#### 2. 直接用gcc编译。 ####
在MSYS2中输入以下命令即可完成编译：
```bash
g++ SimpleWidgets.cpp -o SimpleWidgets.exe -std=c++17 -lfltk -mwindows -DWIN32 -lole32 -luuid -lcomctl32
```
在Linux下输入以下命令即可完成编译：
```bash
g++ SimpleWidgets.cpp -o SimpleWidgets -std=c++17 -lfltk
```