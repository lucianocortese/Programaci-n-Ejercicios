
typedef struct{
int id;
char nombre[51];
char apellido [51];
float sueldo;
int sector;
int isEmpty;
}eEmpleados;




/**
 * \brief Harcodea los autores y los libros
 * \param autores es el array del tipo estructura eAutores
 * \param tamAut es el tamaño del array autores
 * \param libros es el array del tipo estructura eLibros
 * \param tamLib es el tamaño de libros
 *
 **/
int inicializarEmpleados (eEmpleados lista[], int tam);

/**
 * \brief Busca los elementos vacios en el array de la estructura
 * \param socios es el array del tipo estructura de eSocios
 * \param tamSoc es el tamaño desocios para recorrerlo
 * \return devuelve el indice del primer elemento vacio del vector encontrado
 **/
int buscarVacio (eEmpleados lista[], int tam);


/**
 * \brief Pide y valida los datos de la estructura socios
 * \param socios es el array del tipo estructura eSocios
 * \param tamSoc es el tamaño de socios para recorrerlo
 * \param contId es el contador para el id autoincremental
 * \return devuelve el valor del contador
 **/
int altaEmpleados (eEmpleados lista [], int tam, int contId);
/**
 * \brief Recorre los elementos y los ordena alfabeticamente por su apellido
 * \param socios es el array del tipo estructura de eSocios
 * \param tamSoc es el tamaño de socios para recorrerlo
 *
 **/



 float promedioSalarios (eEmpleados lista [], int tam);
 /*

void ordenarPorApellido (eSocios socios[], int tamSoc);

/**
 * \brief Imprime los datos de la estructura socios
 * \param socios es el array del tipo estructura de eSocios
 * \param ind es el indice del elemento que se desea imprimir
 *
 **/
/*
void mostrarSocio (eSocios socios[], int ind);

/**
 * \brief Recorre los socios dados de alta y los imprime
 * \param socioses el array del tipo estructura de eSocios
 * \param tamSoc es el tamaño de socios para recorrerlo
 *
 **/
/*
void mostrarSocios(eSocios socios[], int tamSoc);

/**
 * \brief Busca la existencia de un socio deseado
 * \param socios es el array del tipo estructura eSocios
 * \param tamSoc es el tamaño de socios para recorrerlo
 * \param id es el id del socio que se desea encontrar
 * \return devuelve el indice donde se encuentra el socio buscado.
 **/
/*
int buscarSocios (eSocios socios[], int tamSoc, int id);

/**
 * \brief Se pide un id de socio y si existe se puede modificar cualquiera de sus campos
 * \param socios es el array del tipo estructura eSocios
 * \param tamSoc es el tamaño de socios para recorrerlo
 *
 **/
/*
void modificarSocios (eSocios socios[], int tamSoc);

/**
 * \brief Se pide un id de socio y si existe se cambia el valor de isEmpty por 1
 * \param socios es el array del tipo estructura eSocios
 * \param tamSoc es el tamaño de socios para recorrerlo
 *
 **/
/*
void bajaSocio (eSocios socios[], int tamSoc);

/**
 * \brief Ordena los libros alfabeticamente por su titulo
 * \param libros es el array del tipo estructuraeLibros
 * \param tamLib es el tamaño de libros para recorrerlo
 *
 **/
/*
void ordenarPorTitulo (eLibros libros[], int tamLib);

/**
 * \brief Imprime los datos de la estructura eLibros libros
 * \param libros es el array del tipo estructura eLibros
 * \param ind es el indice del elemento que se desea imprimir
 *
 **/
/*
void mostrarLibro (eLibros libros[], int ind);

/**
 * \brief Recorre los socios dados de alta y los imprime
 * \param libros es el array del tipo estructura eLibros
 * \param tamLib es el tamaño de libros para recorrerlo
 *
 **/
/*
void mostrarLibros(eLibros libros[], int tamLib);

/**
 * \brief Recorre los elementos de autores y los ordena alfabeticamente por su apellido
 * \param autores es el array del tipo estructura eAutores
 * \param tamAut es el tamaño de autores para recorrerlo
 *
 **/
/*
void ordenarAutoresPorApellido (eAutores autores[], int tamAut);

/**
 * \brief Imprime los datos de la estructura eAutores autores
 * \param autores es el array del tipo estructura eAutores
 * \param ind es el indice del elemento que se desea imprimir
 *
 **/
/*
void mostrarAutor (eAutores autores[], int ind);

/**
 * \brief Recorre los autores dados de alta y los imprime
 * \param autores es el array del tipo estructura eAutores
 * \param tamLib es el tamaño de  libros para recorrerlo
 *
 **/

/*
void mostrarAutores(eAutores autores[], int tamAut);

/**
 * \brief Busca los elementos vacios en el array de la estructura ePrestamos prestamo
 * \param prestamo es el array del tipo estructura ePrestamos
 * \param tamPre es el tamaño de prestamo para recorrerlo
 * \return devuelve el primer indice del vector vacio encontrado
 **/
/*
int buscarVacioPres (ePrestamos prestamo[], int tamPre);


/**
 * \brief Le asigna valor 1 a isEmpty para aclarar que están vacios
 * \param parametros Es la variable del tipo struct eParametros
 * \param tamPre es el tamaño de prestamos para recorrerlo
 *
 **/

/*
void inicializarPrestamos (ePrestamos prestamos[], int tamPre);

/**
 * \brief Pide y valida los datos del vector de tipo ePrestamos
 * \param prestamos Es el array del tipo estructura ePrestamos
 * \param tamPre es el tamaño del array prestamos
 * \param contId es el contador para el id autoincremental
 * \return devuelve el valor del contador
 **/
/*
int altaPrestamos (ePrestamos prestamos [], int tamPre, int contIdPre);

void informarAutorConMasLibros (eAutores autores[], int tamAut, eLibros libros[], int tamLib);

void informarLibroMasPrestado (eLibros libros[],int tamLib, ePrestamos prestamos[], int tamPre);
*/
