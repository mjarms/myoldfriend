//#include "433Utils/RPi_utils/RFSniffer.cpp"
#include <wiringPi.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	const int FRleg = 4;
	const int FLleg = 5;
	const int BRleg = 0;
	const int BLleg = 2;
	const int Fhead = 3;

	int action;

	wiringPiSetup();

	// Setup all pins
	pinMode(FRleg, OUTPUT);
	pinMode(FLleg, OUTPUT);
	pinMode(BRleg, OUTPUT);
	pinMode(BLleg, OUTPUT);
	pinMode(Fhead, OUTPUT);

	while (1) {
		printf("Choose action : \n");
		scanf("%d", &action);
		//printf("While start");
		//action = system("433Utils/RPi_utils/RFSniffer");
		//printf("result is %s", action);

		//printf("action taken");
		if (action == 1) {
			printf("Going Forward (White + Red) \n");
			digitalWrite(FRleg, HIGH);
			digitalWrite(FLleg, HIGH);
            delay(500);
            digitalWrite(FRleg, LOW);
			digitalWrite(FLleg, LOW);
		} else if (action == 2) {
			printf("Going Forward left (White) \n");
			digitalWrite(FRleg, HIGH);
            delay(500);
            digitalWrite(FRleg, LOW);
		} else if (action == 3) {
			printf("Going Forward right (Red) \n");
			digitalWrite(FLleg, HIGH);
            delay(500);
            digitalWrite(FLleg, LOW);
		} else if (action == 4) {
			printf("Going Backward (Yellow + Blue) \n");
			digitalWrite(BRleg, HIGH);
			digitalWrite(BLleg, HIGH);
            delay(500);
            digitalWrite(BRleg, LOW);
			digitalWrite(BLleg, LOW);
		} else if (action == 5) {
			printf("Going Backward Left (Yellow) \n");
			digitalWrite(BRleg, HIGH);
            delay(500);
            digitalWrite(BRleg, LOW);
		} else if (action == 6) {
			printf("Going Backward Right (Blue) \n");
			digitalWrite(BLleg, HIGH);
            delay(500);
            digitalWrite(BLleg, LOW);
		} else if (action == 7) {
			printf("Moving Head (Green) \n");
			digitalWrite(Fhead, HIGH);
            delay(500);
            digitalWrite(Fhead, LOW);
		} else {
			printf("Unknown input \n");
		}
    }

    return 0;
}
