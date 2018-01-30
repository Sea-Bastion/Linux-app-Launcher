
run: compiled/release/main
	./$^

compiled/release/main: classes/main.cpp
	g++ -std=c++17 -o $@ $^ -lstdc++fs

debug: compiled/debug/main
	gdb $^

compiled/debug/main: classes/main.cpp
	g++ -g -std=c++17 -o $@ $^ -lstdc++fs