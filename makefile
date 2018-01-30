
run: compiled/release/main
	./$^

compiled/release/main: classes/main.cpp
	g++ -std=c++17 -o $@ $^ -lstdc++fs

debug: compiled/debug/main.out
	gdb $^

compiled/debug/main.out: classes/main.cpp
	g++ -g -std=c++17 -o $@ $^