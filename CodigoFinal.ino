// Pines para las filas (R1 a R8)
const int filas[] = {2, 3, 4, 5, 6, 7, 8, 9};

// Pines para las columnas (C1 a C8) en el orden físico correcto
const int columnas[] = {10, 11, 12, 13, A0, A1, A2, A3}; // Ajustado al orden físico

// Pin analógico del potenciómetro
const int potPin = A4;

int columnasEncendidas = 1; // Siempre inicia con la primera columna encendida

void setup() {
  // Configuración de los pines de las filas y columnas
  for (int i = 0; i < 8; i++) {
    pinMode(filas[i], OUTPUT);
    pinMode(columnas[i], OUTPUT);
    digitalWrite(filas[i], LOW);  // Apagar todas las filas
    digitalWrite(columnas[i], HIGH); // Apagar todas las columnas (anodo común)
  }

  // Enciende la primera columna de manera fija
  actualizarColumnas(1);

  // Iniciar el Monitor Serie
  Serial.begin(9600);
  Serial.println("Sistema inicializado. Leyendo valores del potenciómetro...");
}

void loop() {
  // Leer el valor del potenciómetro
  int potValue = analogRead(potPin);

  // Mapear el valor del potenciómetro al rango de 1 a 8 (siempre incluye la primera columna)
  int nivel = map(potValue, 0, 800, 1, 8);

  // Enviar datos al Monitor Serie
  Serial.print("Lectura del potenciómetro: ");
  Serial.print(potValue);
  Serial.print(" | Nivel mapeado (columnas encendidas): ");
  Serial.println(nivel);

  // Ajustar las columnas progresivamente solo si hay cambios
  if (nivel != columnasEncendidas) {
    actualizarColumnas(nivel);
  }

  delay(100); // Pausa para evitar cambios demasiado rápidos
}

// Función para apagar todas las columnas
void apagarColumnas() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(columnas[i], HIGH); // Apagar todas las columnas
  }
}

// Función para actualizar las columnas según el nivel deseado
void actualizarColumnas(int nivel) {
  apagarColumnas(); // Apagar todas las columnas antes de encender las nuevas

  for (int j = 0; j < nivel; j++) {
    digitalWrite(columnas[j], LOW); // Encender solo las columnas necesarias
  }

  // Encender filas para iluminar correctamente
  for (int i = 0; i < 8; i++) {
    digitalWrite(filas[i], HIGH);
  }

  columnasEncendidas = nivel; // Actualiza el estado de las columnas encendidas
}

