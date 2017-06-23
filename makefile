main:    main.cpp Personas.o Administrador.o Repartidor.o Baraja.o Cartas.o Jugador.o Mesas.o
	g++ main.cpp Personas.o Administrador.o Repartidor.o Baraja.o Cartas.o Jugador.o Mesas.o -o main
main.o:	main.cpp Personas.h Administrador.h Repartidor.h Baraja.h Cartas.h Jugador.h Mesas.h
	g++ -c main.cpp
Personas:	Personas.cpp Personas.h
	g++ -c Personas.cpp Administrador:	Administrador.cpp Administrador.h
	g++ -c Administrador.cpp Repartidor:	Repartidor.cpp Repartidor.h
	g++ -c Repartidor.cpp Baraja:	Baraja.cpp Baraja.h
	g++ -c Baraja.cpp Cartas:	Cartas.cpp Cartas.h
	g++ -c Cartas.cpp Jugador:	Jugador.cpp Jugador.h
	g++ -c Jugador.cpp Mesas:	Mesas.cpp Mesas.h
	g++ -c Mesas.cpp
clean:
	rm  *.o main
