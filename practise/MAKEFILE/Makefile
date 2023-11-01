all:mickey
	echo "build done"
mickey:main.o add.o sub.o mul.o div.o
	gcc main.c add.c sub.c mul.o div.o -o mickey
main.o:main.c
	gcc -c main.c
add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c
div.o:div.c
	gcc -c div.c
clean:
	rm *.o mickey
install:
	sudo cp mickey /bin/
