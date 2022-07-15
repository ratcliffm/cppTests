tests: cppPrac.cpp test.cpp cppPrac.h
	g++ -Wall -Werror -lgtest cppPrac.cpp test.cpp -o tests

test: tests
	./tests

clean:
	rm -fr build
