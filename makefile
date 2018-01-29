
run: classes/main
	./classes/main

classes/main: classes/main.cpp
	g++ -o $@ $^