



// Librerías

#include <OneWire.h>
#include <DallasTemperature.h>



//Pines
const byte Sdat = A0;


//Constantes
int dt = 1000;


//Objetos
OneWire oneWireObjetoOne(Sdat);
DallasTemperature sensorDS18B20(&oneWireObjetoOne);


void setup() {

Serial.begin(9600);
sensorDS18B20.begin();
}

void loop() {
sensorDS18B20.requestTemperatures();

/////////////////////////---Sensor 1////////////////////////////////////////////////////
   if (sensorDS18B20.getTempCByIndex(0) == -127.00){
    Serial.print("-");
   } else{
    Serial.print(sensorDS18B20.getTempCByIndex(0));
   }
   
   Serial.print(',');
   
/////////////////////////---Sensor 2////////////////////////////////////////////////////
   
   if (sensorDS18B20.getTempCByIndex(1) == -127.00){
    Serial.print("-");
   } else{
    Serial.print(sensorDS18B20.getTempCByIndex(1));
   }
   
   Serial.print(',');

/////////////////////////---Sensor 3////////////////////////////////////////////////////
   
   if (sensorDS18B20.getTempCByIndex(2) == -127.00){
    Serial.print("-");
   } else{
    Serial.print(sensorDS18B20.getTempCByIndex(2));
   }

   Serial.print(',');

/////////////////////////---Sensor 4////////////////////////////////////////////////////
   
   if (sensorDS18B20.getTempCByIndex(3) == -127.00){
    Serial.print("-");
   } else{
    Serial.print(sensorDS18B20.getTempCByIndex(3));
   }
   
   Serial.print(',');

/////////////////////////---Sensor 5////////////////////////////////////////////////////
   
   if (sensorDS18B20.getTempCByIndex(4) == -127.00){
    Serial.print("-");
   } else{
    Serial.print(sensorDS18B20.getTempCByIndex(4));
   }
  
   Serial.print(',');


/////////////////////////---Sensor 6////////////////////////////////////////////////////   
   if (sensorDS18B20.getTempCByIndex(5) == -127.00){
    Serial.print("-");
   } else{
    Serial.print(sensorDS18B20.getTempCByIndex(5));
   }
  
   Serial.print(',');

/////////////////////////---Sensor 7////////////////////////////////////////////////////
   
   if (sensorDS18B20.getTempCByIndex(6) == -127.00){
    Serial.print("-");
   } else{
    Serial.print(sensorDS18B20.getTempCByIndex(6));
   }
  Serial.print(',');
/////////////////////////---Sensor 8////////////////////////////////////////////////////
   
   if (sensorDS18B20.getTempCByIndex(7) == -127.00){
    Serial.print("-");
   } else{
    Serial.print(sensorDS18B20.getTempCByIndex(7));
   }
  Serial.print(',');
   /////////////////////////---Sensor 9////////////////////////////////////////////////////
   
   if (sensorDS18B20.getTempCByIndex(8) == -127.00){
    Serial.println("-");
   } else{
    Serial.println(sensorDS18B20.getTempCByIndex(8));
   }
delay(dt);




}
