#this is a make file to automate the compilation process
#target: dependencies

all: RandomMain RandomCodeTester

RandomCodeTester: RandomCode.c RandomCodeTester.c
	g++ RandomCode.c RandomCodeTester.c -o RandomCodeTester

RandomMain: RandomCode.c RandomMain.c
	g++ RandomCode.c RandomMain.c -o RandomMain

clean:
	rm RandomMain RandomCodeTester *.o
