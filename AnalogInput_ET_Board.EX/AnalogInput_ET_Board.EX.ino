
int sensorPin = A0;                    // 가변저항(아날로그) : A0
int led_red = D2;                   // 빨강 LED : D2
int led_blue = D3;
int led_green = D4;
int led_yellow = D5;
int sensorValue = 0;

void setup() {
  pinMode(led_red, OUTPUT);             // 빨강 LED 출력모드 설정
  pinMode(led_blue, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin); // 아날로그 센서 값 읽어서 변수에 저장

  if(sensorValue < 600) {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, LOW);
  }
  if(600 < sensorValue < 1200) {
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, HIGH);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, LOW);
  } 
  if(1200 < sensorValue < 1800) {
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, HIGH);
  } 
  if(1800 < sensorValue < 2400) {
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, HIGH);
    digitalWrite(led_yellow, LOW);
  } 
  if(2400 < sensorValue) {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, HIGH);
    digitalWrite(led_green, HIGH);
    digitalWrite(led_yellow, HIGH);
  } 

  }


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
