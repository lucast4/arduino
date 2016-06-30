// 4/27/15 - needs 2 digital inputs, one for triggering on state, other for triggering off state.

// Enter digital pins that input TTL from nidaq
const int DigInPin_On=8;
const int DigInPin_Off=9;

const int DigOutPin=4; // Dig Pin that will control relay shield


void setup()
{
  // Initialize all inputs from nidaq
  pinMode(DigInPin_On,INPUT);
  pinMode(DigInPin_Off,INPUT);
  
  // Initialize output pin
  pinMode(DigOutPin,OUTPUT); 
  digitalWrite(DigOutPin,LOW);
}
  


void loop()
{
  // Turn on output if signalled
 if (digitalRead(DigInPin_On))
 {
 digitalWrite(DigOutPin,HIGH);
 }
 
 // Turn off output if signalled
 if (digitalRead(DigInPin_Off))
 {
   digitalWrite(DigOutPin,LOW);
 }
 
 }

