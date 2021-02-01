#ifndef _HealthProfile_H_
#define _HealthProfile_H_
#include <iostream>
#include <string>

class HealthProfile {

	std::string name, surname,cins;
	int ay, gun, yil;
	int boy, kilo;
public:
	explicit HealthProfile(std::string,std::string,std::string, int,int,int,int,int);
	void setName(std::string);
	void setSurname(std::string);
	void setCins(std::string);
	void setAy(int);
	void setGun(int);
	void setYil(int);
	void setBoy(int);
	void setBoy(float);
	void setKilo(int);
	std::string getName()const;
	std::string getSurname()const;
	std::string getCins()const;
	int getAy()const;
	int getGun()const;
	int getYil()const;
	int getBoy()const;
	int getKilo()const;
	int yasHesapla()const;
	int MaxHealthRate()const;
	float TargetHealthRate()const;
	float VKİ()const;
	void showInfos()const;
	~HealthProfile();
};





#endif // !_HealthProfile_H_
