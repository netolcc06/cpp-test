#include <iostream>

class Sky
{
public:
	Sky(int stars = 0)
		: m_stars(stars)
	{}

	int stars() const
	{
		return m_stars;
	}

	void stars(int n)
	{
		m_stars = n;
	}

private:
	int m_stars;
};

class BlueSky : public virtual Sky
{
public:
	BlueSky(int stars = 0)
		: Sky(stars)
	{}
};

class NightSky : public virtual Sky
{
public:
	NightSky(int stars = 0)
		: Sky(stars)
	{}
};

// Don`t change
class BlueNightSky : public BlueSky, public NightSky
{
public:
	BlueNightSky()
	{}
};

// Don`t change
void readInput(NightSky& nightSky)
{
	int n = 0;
	std::cin >> n;

	nightSky.stars(n);
}

// Don`t change
int getAmountOfStars(const BlueSky& blueSky)
{
	return blueSky.stars();
}

// Don`t change
int main(int argc, char** argv)
{
	BlueNightSky blueNightSky;

	readInput(blueNightSky);

	std::cout << getAmountOfStars(blueNightSky) << std::endl;

	return 0;
}
