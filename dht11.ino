#include <SimpleDHT.h>

SimpleDHT11 dht11;

void setup() {
  Serial.begin(9600); //per vedere i dati sul pc

}

void loop() {
  byte t = 0;  //variabile temperatura
  byte u = 0;  //variabile umidità
  int err = SimpleDHTErrSuccess; //questa variabile rileva eventuali errori della lettura

  if ((err = dht11.read(2, &t, &u, NULL))!= SimpleDHTErrSuccess)  {
     Serial.println("errore di lettura");
     delay(1000);
     return;
    }
  Serial.print("t: ");
  Serial.print((int)t);
  Serial.print("°C h: ");
  Serial.print((int)u);
  Serial.print("% ");

  delay(1500);
  
}
