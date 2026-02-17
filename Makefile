sse: main.cc
	g++ main.cc -o sse --std=c++20 -Wall -Wextra -pedantic -O2

clean:
	rm -f sse
