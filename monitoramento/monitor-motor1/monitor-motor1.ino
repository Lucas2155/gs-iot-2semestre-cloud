void setup() {
    Serial.begin(115200);

}

void loop() {
    int vibration_Sensor1 = analogRead(A1);
    int vibration_Sensor2 = analogRead(A2);

   int vartemp = 0;
   int var_vibra1m1 = 0;
   int var_vibra2m1 = 0;
   int var_vibra1m2 = 0;
   int var_vibra2m2 = 0;
   String motor1 = "";
   String motor2 = "";

    while (vartemp < 5){
        vibration_Sensor1 = analogRead(A1);
        vibration_Sensor2 = analogRead(A2);
        //MOTOR AUUUMMM
        if (vibration_Sensor1 > 1000){
            var_vibra1m1 = var_vibra1m1 + 1;
        }
        
        else{
            var_vibra2m1 = var_vibra2m1 + 1;
        }
        //MOTOR latecoraçaouNNNNnnn
        if (vibration_Sensor2 > 1000){
            var_vibra1m2 = var_vibra1m2 + 1;
        }
        
        else{
            var_vibra2m2 = var_vibra2m2 + 1;
        }
        vartemp = vartemp + 1;
        delay(200);
    }
    ////MOTOR AUUUMMM
    if (var_vibra1m1 >= var_vibra2m1) {
        String response1Ok = String(vibration_Sensor1)+ (",");
        motor1 = response1Ok ;
        motor1 = motor1 + ("Motor 1 esta ativo,");
     }
    else{
        String response1nok = String(vibration_Sensor1) + (",");
        motor1 = response1nok ;
        motor1 = motor1 + ("Motor 1 esta inativo,");
        //Serial.println(response1nok);
        
    }
     //MOTOR latecoraçaouNNNNnnn
    if (var_vibra1m2 >= var_vibra2m2){
        String response2ok = String(vibration_Sensor2) + (",");
        motor2 = response2ok ;
        motor2 = motor2 + ("Motor 2 esta ativo , ") ;
         //Serial.println(response2ok) ;
      
    }
    else{
        String response2Nok = String(vibration_Sensor2) + (",");
        motor2 = response2Nok;
        motor2 = motor2 + ("Motor 2 esta inativo , ");
        //Serial.println(response2Nok);
    }
    Serial.println(motor1 + motor2);
    

    
}
