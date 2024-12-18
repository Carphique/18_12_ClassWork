#include <iostream>
using namespace std;

class MobilePhone {
protected:
	bool ButtonOn;
public:
	virtual void call() = 0;
	virtual void Info() {
		cout << "Button on: " << ButtonOn << endl;
	}
	virtual void playVideoGames() {
		cout << "Playing video games" << endl;
	}
	virtual void recordTikToks() {
		cout << "Recording tik toks" << endl;
	}
};

class SmartPhone : public MobilePhone {
protected:
	bool SensorScreen;
public:
	SmartPhone() {
		ButtonOn = true;
		SensorScreen = true;
	}
	void call() override {
		cout << "Calling" << endl;
	}
	void recordTikToks() override {
		cout << "Cannot record tik toks" << endl;
	}
};

class CameraPhone : public MobilePhone {
protected:
	bool CoolCamera;
public:
	CameraPhone() {
		ButtonOn = true;
		CoolCamera = true;
	}
	void call() override {
		cout << "Calling" << endl;
	}
	void playVideoGames() override {
		cout << "Cannot play video games" << endl;
	}
};

int main()
{
	MobilePhone* mobilePhone = new SmartPhone();
	mobilePhone->call();
	mobilePhone->playVideoGames();
	mobilePhone->recordTikToks();

	mobilePhone = new CameraPhone();
	mobilePhone->call();
	mobilePhone->playVideoGames();
	mobilePhone->recordTikToks();

	delete mobilePhone;
}