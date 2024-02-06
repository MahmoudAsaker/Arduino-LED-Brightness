
int led=3;
int reading =0;
int step=5;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop(){
  analogWrite(led,reading);
reading+=step;
if (reading<=0 || reading>=255){
step=-step;

}
  delay(50);
}