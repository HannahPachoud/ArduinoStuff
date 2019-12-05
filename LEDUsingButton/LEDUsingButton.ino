
int stateNow = 0;

int stateBefore = 0;

int i = 0;

int j = 0;

void setup() {

pinMode (2, INPUT);

pinMode (3, OUTPUT);

}

void loop() {

stateNow = digitalRead(2);

if (stateNow != stateBefore) {

if (stateNow==HIGH and i==0) {

digitalWrite (3, HIGH);

j=1;

}

else if (stateNow==LOW and j==1) {

i=1;

}

else if (stateNow==HIGH and i==1) {

digitalWrite (3, LOW);

j=0;

}

else if (stateNow==LOW and j==0) {

i=0;

}

}

stateBefore=stateNow;

}
