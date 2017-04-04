Ques_A: Ques_A.o
	g++ -o Ques_A Ques_A.o

Ques_A.o: Ques_A.cpp
	g++ -c Ques_A.cpp

clean:
	rm *.o Ques_A
