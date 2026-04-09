 # Compilador
 CC = gcc

 #Bandera de compilaciòn
 CFLAGS = - Wall -Wextra - Iinclude

 #Archivos a compilar
 SRC=src/*.c main.c

 #Nombre del ejecutable
TARGET=lista_ligada

#regla principal para compilar
all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

#regla para ejcutar
run: all
	./$(TARGET)
#Regla para borrar los archivos generados
clean:
	rm -f $(TARGET)
