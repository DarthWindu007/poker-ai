CC = g++ -g -O3

INCLUDES=-I/usr/local/g2/include

RM = /bin/rm -f 
OBJS = card.o
main: $(OBJS)
	$(CC) -o game game.cpp $(OBJS)
	
clean: 
	$(RM) *.o game
 
%.o:%.cpp
	g++ -c $< $(INCLUDES)


