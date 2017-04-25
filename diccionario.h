#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef __DICCIONARIO_H
#define __DICCIONARIO_H

struct Dict
{
	char palIngles  [50];
	char palEspanol [50];
};

typedef struct Dict tipoDict;

struct Nodo
{
	tipoDict info;
	struct Nodo *siguiente;
};

typedef struct Nodo tipoNodo;

tipoNodo* crearNodo (tipoDict dict);
tipoNodo* adicionarLista (tipoNodo* lista, tipoDict dict);
tipoNodo* cargarDictToLista (char* nombreArchivoBin, tipoNodo* lista);
char *Buscar_palabra(char *palabra,tipoNodo *list);
tipoNodo *insertarlista(tipoNodo *lista,int pos,tipoDict elemento);
int buscarPos(char *palabra,tipoNodo *lista );
tipoNodo *Modificar(tipoNodo *lista,char *palabra);
tipoNodo* adicionar(char* esp, char* ing,tipoNodo *lista );
tipoNodo* eliminar(char* palabra, tipoNodo* lista);

void imprimirLista (tipoNodo* lista);
void guardarListaArchivo(tipoNodo *lista,char *nombre_archivo_binario)

//int buscarPosInsertar(tipoNodo* lst, char* palabra);





#endif

