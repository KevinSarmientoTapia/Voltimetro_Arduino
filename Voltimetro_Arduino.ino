/*
 Voltimetro Arduino:

 Capacidad:50V

 Resistencias:
 - R1: 1MΩ;
 - R2: 100kΩ;
*/
float r1=1000000; // Variable resistencia 1 (1MΩ)
float r2=100000; // Variable resistencia 2 (100kΩ)
void setup() { 
  Serial.begin(9600); // Abrir monitor serial
}
void loop() { 
  int sensorValue1 = analogRead(A0); // lectura del pin (A0) en bits
  int sensorValue2 = analogRead(A1); // lectura del pin (A1) en bits
  int sensorValue3 = analogRead(A2); // lectura del pin (A2) en bits
  int sensorValue4 = analogRead(A3); // lectura del pin (A3) en bits
  int sensorValue5 = analogRead(A4); // lectura del pin (A4) en bits
  int sensorValue6 = analogRead(A5); // lectura del pin (A5) en bits
  
  float y1 = sensorValue1*5.0/1023.0; // Conversion de bits a decimal entrada A0
  float v1=y1/(r2/(r2+r1)); // Conversion del valor de 0v-5v a 0v-30v 

  float y2 = sensorValue2*5.0/1023.0; // Conversion de bits a decimal entrada A1
  float v2=y2/(r2/(r2+r1)); // Conversion del valor de 0v-5v a 0v-30v

  float y3 = sensorValue3*5.0/1023.0; // Conversion de bits a decimal entrada A2
  float v3=y3/(r2/(r2+r1)); // Conversion del valor de 0v-5v a 0v-30v 

  float y4 = sensorValue4*5.0/1023.0; // Conversion de bits a decimal entrada A3
  float v4=y4/(r2/(r2+r1)); // Conversion del valor de 0v-5v a 0v-30v 

  float y5 = sensorValue5*5.0/1023.0; // Conversion de bits a decimal entrada A4
  float v5=y5/(r2/(r2+r1)); // Conversion del valor de 0v-5v a 0v-30v

  float y6 = sensorValue6*5.0/1023.0; // Conversion de bits a decimal entrada A5
  float v6=y6/(r2/(r2+r1)); // Conversion del valor de 0v-5v a 0v-30v 

  // Imprimir el valor del voltage de cada entrada analoga en el monitor serial:    
  Serial.print("Voltage A0"); 
  Serial.print(" "); 
  Serial.print("="); 
  Serial.print(" "); 
  Serial.print(v1); 
  Serial.print("V"); 
  Serial.print("    ");
  Serial.print("Voltage A1"); 
  Serial.print(" "); 
  Serial.print("="); 
  Serial.print(" "); 
  Serial.print(v2); 
  Serial.print("V"); 
  Serial.print("    ");
  Serial.print("Voltage A2"); 
  Serial.print(" "); 
  Serial.print("="); 
  Serial.print(" "); 
  Serial.print(v3); 
  Serial.print("V");
  Serial.print("    ");
  Serial.print("Voltage A3"); 
  Serial.print(" "); 
  Serial.print("="); 
  Serial.print(" "); 
  Serial.print(v4); 
  Serial.print("V"); 
  Serial.print("    ");
  Serial.print("Voltage A4"); 
  Serial.print(" "); 
  Serial.print("="); 
  Serial.print(" "); 
  Serial.print(v5); 
  Serial.print("V"); 
  Serial.print("    ");
  Serial.print("Voltage A5"); 
  Serial.print(" "); 
  Serial.print("="); 
  Serial.print(" "); 
  Serial.print(v6); 
  Serial.println("V"); 

  delay(1000); // esperar 1 segundo entre mediciones  
}