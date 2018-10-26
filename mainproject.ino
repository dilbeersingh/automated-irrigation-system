int sensor_pin = A0;
int motor_pin=3;
int i=0;

int output_value_moisture_sensor ;

void setup() {

   Serial.begin(9600);
    pinMode(motor_pin,OUTPUT);
  

   delay(2000);

   }

void loop() {

   output_value_moisture_sensor= analogRead(sensor_pin);



  

   

   

   if(output_value_moisture_sensor>800)
   {
       Serial.print(output_value_moisture_sensor);
       Serial.print("  NEED WATER \n");
       analogWrite(motor_pin,255);
       i=1;

   }
   if(output_value_moisture_sensor<350)
   {
    Serial.print(output_value_moisture_sensor);
    Serial.print(" NO NEED OF WATER\n");
     analogWrite(motor_pin,0);
   }
   if(output_value_moisture_sensor>350 && output_value_moisture_sensor<800 && i!=0)
   {
    Serial.print(output_value_moisture_sensor);
    Serial.print(" Chill MODE\n");
     analogWrite(motor_pin,0);
   }

   delay(1000);

   }
