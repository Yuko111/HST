#include "HealthProfile.h"
// Yapıcı 
HealthProfile::HealthProfile(std::string n_a, std::string s_n, std::string c_n, int a_y, int g_n, int y_l, int b_y, int k_l) {

	setName(n_a);
	setSurname(s_n);
	setCins(c_n);
	setAy(a_y);
	setGun(g_n);
	setYil(y_l);
	setBoy(b_y);
	setKilo(k_l);
}
//SETTER FONK
void HealthProfile::setName(std::string n) {name = n;}
void HealthProfile::setSurname(std::string s) {surname = s;}
void HealthProfile::setCins(std::string c) {cins = c;}
void HealthProfile::setAy(int a) {ay = a;}
void HealthProfile::setGun(int g) {gun = g;}
void HealthProfile::setYil(int y) {yil = y;}
void HealthProfile::setBoy(int b) {boy = b;}
void HealthProfile::setBoy(float b_b) {boy = b_b * 100;} // SetBoy Overload
void HealthProfile::setKilo(int k) {kilo = k;}
//GETTER FONK
std::string HealthProfile::getName()const { return name; }
std::string HealthProfile::getSurname()const { return surname; }
std::string HealthProfile::getCins()const { return cins; }
int HealthProfile::getAy()const { return ay; }
int HealthProfile::getGun()const { return gun; }
int HealthProfile::getYil()const { return yil; }
int HealthProfile::getBoy()const { return boy; }
int HealthProfile::getKilo()const { return kilo; }
//YAS HESAPLA
int HealthProfile::yasHesapla()const { return 2021 - yil; }
//MaxHealthRate Hesapla
int HealthProfile::MaxHealthRate()const { return 220 - yasHesapla(); }
//TargetHealthRate Hesapla
float HealthProfile::TargetHealthRate()const { return (float)MaxHealthRate() * 0.7; }
// VKİ HESAPLA
float HealthProfile::VKİ()const {return kilo / ((boy / 100) * 2); }
// Bilgileri Yazdir
void HealthProfile::showInfos()const {

	std::cout << "Merhaba" << "  " << name << "  " << surname << "  " << "(" << cins << ")";
	std::cout << std::endl;
	std::cout << "Dogum Tarihiniz:" << ay << "-" << gun << "-" << yil << "  " << "yasiniz:" << yasHesapla();
	std::cout << std::endl;
	std::cout << "Maximum Kalp Atım Hızınız:" << MaxHealthRate() << "  " << "Hedeflenen Kalp Atım Hızınız:" << TargetHealthRate();
	std::cout << std::endl;
	std::cout << "boyunuz:" << boy << "  " << "kilonuz:" << kilo << "  " << "Vucut Kitle İndeksiniz:" << VKİ();

}
//YIKICI
HealthProfile::~HealthProfile() {}
