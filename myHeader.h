
typedef struct Alient_t{
    char nombre[30];
    int id;
    char *especie[30];
    struct planetas_t *planetas;
    struct idioma_t *idiomas;
    struct alien_t *siguiente;
}alien;

typedef struct planetas_t{
    char nombre[30];
    int starwars_code;
    char agua;
    char oxigeno;
    struct planetas_t *siguiente;
}planeta;

typedef struct idioma_t{
    char nombre[30];
    int tipo;
    int simbolos;
    struct idiomas_t *siguiente;
    struct planetas_t *planetas;
}idioma;
