#include <iostream>
using namespace std;
class LightController {
public:
bool isOn;
int brightness;
LightController() : isOn(false), brightness(0) {}
void showLightStatus() {
cout << "Light status: " << (isOn ? "ON" : "OFF") << endl;
cout << "Brightness Level: " << brightness << endl;
}
void switchLight() {
if (isOn) {
isOn = false;
brightness = 0;
cout << "Lights are now OFF." << endl;
} else {
isOn = true;
brightness = 1;
cout << "Lights are now ON." << endl;
}
}
void adjustBrightness(int value) {
if (!isOn) {
cout << "Please turn on the light first!" << endl;
} else {
brightness += value;
if (brightness < 0) brightness = 0;
if (brightness > 10) brightness = 10;
cout << "Brightness adjusted." << endl;
}
}
string resetSettings() {
if (isOn) {
brightness = 1;
return "Light settings have been reset.";
}
return "Lights are off.";
}
};
int main() {
LightController c1;
c1.showLightStatus();
cout<< endl;
c1.adjustBrightness(4);
c1.switchLight();
cout<< endl;
c1.showLightStatus();
cout<< endl;
c1.adjustBrightness(4);
cout<< endl;
c1.showLightStatus();
cout<< endl;
c1.adjustBrightness(-2);
c1.adjustBrightness(9);
cout<< endl;
c1.showLightStatus();
cout<< endl;
cout << c1.resetSettings() << endl;
c1.showLightStatus();
cout<< endl;
c1.switchLight();
cout<< endl;
c1.showLightStatus();
return 0;
}
