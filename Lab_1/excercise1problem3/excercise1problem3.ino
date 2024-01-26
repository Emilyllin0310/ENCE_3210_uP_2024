#define N 50

int gD[N]= {87,81,92,48,49,68,37,19,51,60,
            61,42,77,44,56,82,43,25,26,52,
            58,8,3,75,94,24,23,98,30,68,
            5,13,83,73,37,12,28,84,11,42,
            65,36,73,22,34,56,44,24,40,91}
void setup() {
  Serial.begin(9600);
  int i;
  int secondMax=0;
  int Max =0;

  // find max 
  for (i=0;i<N;i++){
    if(gD[i] > Max){
      Max = gD[i];
    }
  }
  // put your setup code here, to run once:
  for(i=0;i<N;i++){
    if(gD[i] > secondMax) && (gD[i] !=Max)){
      secondMax=gD[i];
    }

}

*(gD + N) = secondMax;

Serial.print(F("Max Value:");
Serial.println(Max);
Serial.print(secondMax);
Serial.println();

void loop() {
  // put your main code here, to run repeatedly:

}
