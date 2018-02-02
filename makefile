
run: compiled/release/main
	./$^

compiled/release/main: main.cpp
	g++ -Iclasses/headers -std=c++17 -o $@ $^ classes/cpp/*  -lstdc++fs

debug: compiled/debug/main
	gdb $^

compiled/object/main: main.cpp
	g++ -g -Iclasses/headers -std=c++17 -o $@ $^ classes/cpp/* -lstdc++fs
