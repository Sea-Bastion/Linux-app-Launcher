
run: compiled/release/main
	./$^

compiled/release/main: main.cpp
	g++ -Iclasses/headers -lstdc++fs -std=c++17 -o $@ $^ classes/cpp/* 

debug: compiled/debug/main
	gdb $^

compiled/object/main: main.cpp
	g++ -g -Iclasses/headers -lstdc++fs -std=c++17 -o $@ $^ classes/cpp/*
