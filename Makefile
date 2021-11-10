

all: makemains maindloop maindrec makeloops makeloopd makerecursives makerecursived

makemains: main.o libclassrec.a
	gcc -Wall -g -o makemains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm

makeloops: libclassloops.a

makerecursives: libclassrec.a

makeloopd: libclassloops.so

makerecursived: libclassrec.so

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	 ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o 

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	 gcc -Wall -g -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o 

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	 ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	 gcc -Wall -g -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o

mains.o: main.c NumClass.h
	gcc -Wall -g -c main.c

basicClassification.o: basicClassification.c 
	gcc -Wall -g -c basicClassification.c -lm

advancedClassificationLoop.o: advancedClassificationLoop.c 
	gcc -Wall -g -c advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c 
	gcc -Wall -g -c advancedClassificationRecursion.c
	
.PHONY: clean all 

clean: 
	rm -f *.o *.a *.so mains maindloop maindrec
