

int mR1=10;
int mR2=11;
int mL1=3;
int mL2=5;
int irL=8;
int irR=7;
void setup() 
{
pinMode(mR1,OUTPUT);
pinMode(mR2,OUTPUT);
pinMode(mL1,OUTPUT);
pinMode(mL2,OUTPUT);
pinMode(irL,INPUT);
pinMode(irR,INPUT);

}

void loop()
{
  
 int a =digitalRead(irL);
 int b =digitalRead(irR);
 if(a==LOW && b==LOW)
 {
  analogWrite( mR1,0);
  analogWrite( mR2,100);
  analogWrite( mL1,100);
  analogWrite( mL2,0);  
 }

 if(a==LOW && b==HIGH)
 {
  analogWrite( mR1,100);
  analogWrite( mR2,100);
  analogWrite( mL1,100);
  analogWrite( mL2,0);
  
 }
 if(a==HIGH && b==LOW)
 {
 analogWrite( mR1,0);
  analogWrite( mR2,100);
  analogWrite( mL1,100);
 analogWrite( mL2,100);
  
 } 
 if(a==HIGH && b==HIGH)
 {
  analogWrite( mR1,100);
  analogWrite( mR2,100);
 analogWrite( mL1,100);
  analogWrite( mL2,0);
  
 }
 
} 
