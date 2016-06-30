// 5/4/15 - Can take 2 boxes, i.e. 4 inputs (2 on adn 2 off). Outputs to control 2 separate relay/.s Can do all of this independently

// 4/27/15 - needs 2 digital inputs, one for triggering on state, other for triggering off state.

// Enter digital pins that input TTL from nidaq
const int DigInPin1_On=8;
const int DigInPin1_Off=9;
const int DigOutPin1=4; // Dig Pin that will control relay shield

const int DigInPin2_On=10;
const int DigInPin2_Off=11;
const int DigOutPin2=5; // Dig Pin that will control relay shield


void setup()
{
  // Initialize all inputs from nidaq
  pinMode(DigInPin1_On,INPUT);
  pinMode(DigInPin1_Off,INPUT);
  
  pinMode(DigInPin2_On,INPUT);
  pinMode(DigInPin2_Off,INPUT);
  
  // Initialize output pin
  pinMode(DigOutPin1,OUTPUT); 
  digitalWrite(DigOutPin1,LOW);
  
  pinMode(DigOutPin2,OUTPUT); 
  digitalWrite(DigOutPin2,LOW);
}
  


void loop()
{
  // Turn on output if signalled
 if (digitalRead(DigInPin1_On))
 {
 digitalWrite(DigOutPin1,HIGH);
 }
 
 if (digitalRead(DigInPin2_On))
 {
 digitalWrite(DigOutPin2,HIGH);
 }
 
 // Turn off output if signalled
 if (digitalRead(DigInPin1_Off))
 {
   digitalWrite(DigOutPin1,LOW);
 }
 
 if (digitalRead(DigInPin2_Off))
 {
   digitalWrite(DigOutPin2,LOW);
 }
 
 }

