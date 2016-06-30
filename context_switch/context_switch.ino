
// Enter digital pins that input TTL from nidaq
const int DigInPin=10;
// Dig Pin that will control relay shield
const int DigOutPin=4;


void setup()

{
  // Initialize LED as low
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW);
  
  // Initialize all inputs from nidaq
  pinMode(DigInPin,INPUT);
  
  // Initialize output pin
  pinMode(DigOutPin,OUTPUT); 
  digitalWrite(DigOutPin,LOW);
}
  


void loop()
{
 //int DigInDur=pulseIn(DigInPin,HIGH,1000); // Waits 1000us for a pulse in this channel
 
 // if dig input occured, then change context to state associated with that input.
 // if (DigInDur > 0)
 
 if (digitalRead(DigInPin))
 {
 digitalWrite(DigOutPin,HIGH);
 digitalWrite(13, HIGH);
 
 
 // TESTING - keep high for 1s, then reset
 delay(1000);
 
 // Resets dig out pin.
 digitalWrite(DigOutPin,LOW);
digitalWrite(13, LOW);
 
 // DigInDur=0;
 }
 
 }

