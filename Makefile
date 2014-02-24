CC = g++ -g -O3

INCLUDES=-I/usr/local/g2/include

RM = /bin/rm -f 
OBJS = card.o deck.o player.o pot.o sharedcards.o game.o
main: $(OBJS)
	$(CC) -o game main.cpp $(OBJS)
	
clean: 
	$(RM) *.o game
 
%.o:%.cpp
	g++ -c $< $(INCLUDES)


