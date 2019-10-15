#this is a make file to automate the compilation process
#target: dependencies

all: randomMain randomCodeTester

randomCodeTester: randomCode.o randomCodeTester.o
	g++ randomCode.c randomCodeTester.c -o randomCodeTester

randomMain: randomCode.o randomMain.o
	g++ randomCode.c randomMain.c -o randomMain

clean:
	rm randomMain randomCodeTester *.o
