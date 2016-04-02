
int main(int argc, const char* argv[]){
    alien *lista_aliens;
    malloc(sizeof(alien));
    lista_aliens->idiomas = malloc(sizeof(idioma));
    lista_aliens->planetas = malloc(sizeof(planeta));

    strcpy(lista_aliens->nombre, "Alf");
    strcpy(lista_aliens->especie, "Alien 33");
    lista_aliens->id = 1234;

    strcpy(lista_aliens->idiomas->nombre, "Wooky");
    lista_aliens->idiomas->tipo = 1; //1 = hablado;
    lista_aliens->idiomas->simbolos = 50;

    strcpy(lista_aliens->planetas->nombre, "Naboo");
    lista_aliens->planetas->agua = 'S';
    lista_aliens->planetas->oxigeno = 'S';
    lista_aliens->planetas->starwars_code = 875432;

    printf("El nombre del Alien es: %s\n", lista_aliens->nombre);
    printf("El ID del alien es: %d\n", lista_aliens->id);
    printf("La especie del alien es: %s\n\n", lista_aliens->especie);

    printf("El alien habla el idioma: %s\n", lista_aliens->idiomas->nombre);
    printf("El tipo de idioma es: %d\n", lista_aliens->idiomas->tipo);
    printf("La cantidad de simbolos es: %d\n\n", lista_aliens->idiomas->simbolos);

    printf("El planeta de origen es: %s\n", lista_aliens->planetas->nombre);
    printf("¿El planeta tiene agua? %c\n", lista_aliens->planetas->agua);
    printf("¿El planeta tiene oxigeno? %c\n", lista_aliens->planetas->oxigeno);
    printf("El codigo Star Wars es: %d\n", lista_aliens->planetas->starwars_code);

    return 0;
}
