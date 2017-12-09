lab8:	Main.o Boo.o Chomp.o Flying.o Goomba.o Hammer.o Magikoopa.o Melee.o Minion.o Paratroopa.o Range.o
	g++ Main.o Boo.o Chomp.o Flying.o Goomba.o Hammer.o Magikoopa.o Melee.o Minion.o Paratroopa.o Range.o -o lab8

Main.o:	Boo.h Chomp.h Flying.h Goomba.h Hammer.h Magikoopa.h Melee.h Minion.h Paratroopa.h Range.h Main.cpp
	g++ -c Main.cpp

Boo.o:	Boo.h Boo.cpp
	g++ -c Boo.cpp

Chomp.o:	Chomp.h Chomp.cpp
	g++ -c Chomp.cpp

Flying.o:	Flying.h Flying.cpp
	g++ -c Flying.cpp

Goomba.o:	Goomba.h Goomba.cpp
	g++ -c Goomba.cpp

Hammer.o:	Hammer.h Hammer.cpp
	g++ -c Hammer.cpp

Magikoopa.o:	Magikoopa.h Magikoopa.cpp
	g++ -c Magikoopa.cpp

Melee.o:	Melee.h Melee.cpp
	g++ -c Melee.cpp

Minion.o:	Minion.h Minion.cpp
	g++ -c Minion.cpp

Paratroopa.o:	Paratroopa.h Paratroopa.cpp
	g++ -c Paratroopa.cpp

Range.o:	Range.h Range.cpp
	g++ -c Range.cpp

clear:
	rm *.o run
