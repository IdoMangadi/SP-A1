FLAGS = -Wall -g

.PHONY: all clean loops recursives recursived loopd

loops: libclassloops.a

recursives: libclassrec.a 

recursived: libclassrec.so 

loopd: libclassloops.so





mains: main.o libclassrec.a
	gcc $(FLAGS) main.o libclassrec.a -o mains

maindloop: main.o
	gcc $(FLAGS) main.o ./libclassloops.so -o maindloop

maindrec: main.o
	gcc $(FLAGS) main.o ./libclassrec.so -o maindrec



all: mains maindloop maindrec libclassloops.so libclassrec.so libclassrec.a libclassloops.a

clean: 
	rm -f mains maindloop maindrec *.so *.a *.o


main.o: main.c NumClass.h
	gcc -c main.c NumClass.h -o main.o

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -shared basicClassification.o advancedClassificationLoop.o -o libclassloops.so

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -shared basicClassification.o advancedClassificationRecursion.o -o libclassrec.so

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcu libclassrec.a basicClassification.o advancedClassificationRecursion.o
	ranlib libclassrec.a

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcu libclassloops.a basicClassification.o advancedClassificationLoop.o
	ranlib libclassloops.a

basicClassification.o: basicClassification.c NumClass.h
	gcc $(FLAGS) -fPIC -c basicClassification.c NumClass.h -o basicClassification.o

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc $(FLAGS) -fPIC -c advancedClassificationLoop.c NumClass.h -o advancedClassificationLoop.o

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc $(FLAGS) -fPIC -c advancedClassificationRecursion.c NumClass.h -o advancedClassificationRecursion.o