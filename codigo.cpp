#include <iostream>
#include <string>

using namespace std;

// 1. REGISTRO (Struct): Define la estructura de datos
struct VideoJuego {
    string titulo;
    string plataforma;
    int anioLanzamiento;
    double precio;
};

// 2. FUNCIÓN que recibe un registro POR REFERENCIA (&) para modificar su valor original
void aplicarDescuento(VideoJuego& juego, double porcentaje) {
    juego.precio = juego.precio - (juego.precio * (porcentaje / 100.0));
}

// 3. FUNCIÓN que recibe un registro POR VALOR para solo mostrar su contenido
void mostrarDetallesJuego(VideoJuego juego) {
    cout << "--- DETALLES DEL VIDEOJUEGO ---\n";
    cout << "Titulo: " << juego.titulo << endl;
    cout << "Plataforma: " << juego.plataforma << endl;
    cout << "Anio: " << juego.anioLanzamiento << endl;
    cout << "Precio: $" << juego.precio << endl;
    cout << "-------------------------------\n";
}

int main() {
    // Creación de una variable de tipo Registro
    VideoJuego miJuego = {"The Legend of Zelda", "Nintendo Switch", 2017, 59.99};

    cout << "Estado inicial del juego:\n";
    mostrarDetallesJuego(miJuego);

    // Llamada a la función que modifica el registro
    aplicarDescuento(miJuego, 20.0); // Se le aplica un 20% de descuento

    cout << "\nDespues de aplicar la funcion de descuento:\n";
    mostrarDetallesJuego(miJuego);

    return 0;
}