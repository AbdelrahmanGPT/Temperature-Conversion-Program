#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>
#include<string>
#include<array>
#include<algorithm>
#include<cctype>
#include<ctime>
#include<limits>
#include<vector>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include"ABODAstd.h"

using namespace std;

enum TemperatureScalesMenuChoices {Celsius = 1 , Kelvin = 2 , Fahrenheit = 3 , Rankine = 4 ,
						Newton = 5 , Rømer = 6 , Réaumur = 7 , Delisle = 8 , 
						GasMark = 9 , Exit = 10};

//CELSIUS FUNCTIONS :
//-------------------------


long double CelsiusToKelvin(long double CelsiusTemperature)
{
	return CelsiusTemperature + 273.15;
}

long double CelsiusToFahrenheit(long double CelsiusTemperature)
{
	return (CelsiusTemperature * (9 / 5.0)) + 32;
}

long double CelsiusToRankine(long double CelsiusTemperature)
{
	return (CelsiusTemperature * (9 / 5.0)) + 491.67;
}

long double CelsiusToNewton(long double CelsiusTemperature)
{
	return CelsiusTemperature * (33 / 100.0);
}

long double CelsiusToRømer(long double CelsiusTemperature)
{
	return (CelsiusTemperature * (21 / 40.0) + 7.5);
}

long double CelsiusToRéaumur(long double CelsiusTemperature)
{
	return CelsiusTemperature * (4 / 5.0);
}

long double CelsiusToDelisle(long double CelsiusTemperature)
{
	return (100 - CelsiusTemperature) * (3 / 2.0);
}

long double CelsiusToGasMark(long double CelsiusTemperature)
{
	return pow(2, ((1.8 * CelsiusTemperature - 243) / 25));
}

void PrintCelsiusToOtherScalesConversion(long double CelsiusTemperature)
{
	printf("\nCELSIUS TEMPERATURE [%.2lf °C] AFTER CONVERSION : \n", CelsiusTemperature);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "KELVIN";
	cout << "| " << left << setw(12) << CelsiusToKelvin(CelsiusTemperature) << " K\n";

	cout << "| " << left << setw(12) << "FAHRENHEIT";
	cout << "| " << left << setw(12) << CelsiusToFahrenheit(CelsiusTemperature) << " °F\n";

	cout << "| " << left << setw(12) << "RANKINE";
	cout << "| " << left << setw(12) << CelsiusToRankine(CelsiusTemperature) << " °R\n";

	cout << "| " << left << setw(12) << "NEWTON";
	cout << "| " << left << setw(12) << CelsiusToNewton(CelsiusTemperature) << " °N\n";

	cout << "| " << left << setw(12) << "ROMER";
	cout << "| " << left << setw(12) << CelsiusToRømer(CelsiusTemperature) << " °Rø\n";

	cout << "| " << left << setw(12) << "REAUMUR";
	cout << "| " << left << setw(12) << CelsiusToRéaumur(CelsiusTemperature) << " °Ré\n";

	cout << "| " << left << setw(12) << "DELISLE";
	cout << "| " << left << setw(12) << CelsiusToDelisle(CelsiusTemperature) << " °D\n";

	cout << "| " << left << setw(12) << "GAS MARK";
	cout << "| " << left << setw(12) << CelsiusToGasMark(CelsiusTemperature) << " °GM\n";

	printf("\n___________________________________________\n\n");
}

//----------------------------------------------------------------------------
//KELVIN FUNCTIONS :
//-------------------------

long double KelvinToCelsius(long double KelvinTemperature)
{
	return KelvinTemperature - 273.15;
}

long double KelvinToFahrenheit(long double KelvinTemperature)
{
	return ((KelvinTemperature - 273.15) * (9 / 5.0)) + 32;
}

long double KelvinToRankine(long double KelvinTemperature)
{
	return (KelvinTemperature * (9 / 5.0));
}

long double KelvinToNewton(long double KelvinTemperature)
{
	return (KelvinTemperature - 273.15) * (33 / 100.0);
}

long double KelvinToRømer(long double KelvinTemperature)
{
	return (((KelvinTemperature - 273.15) * (21 / 40.0)) + 7.5);
}

long double KelvinToRéaumur(long double KelvinTemperature)
{
	return (KelvinTemperature - 273.15) * (4 / 5.0);
}

long double KelvinToDelisle(long double KelvinTemperature)
{
	return (373.15 - KelvinTemperature) * (3 / 2.0);
}

long double KelvinToGasMark(long double KelvinTemperature)
{
	return CelsiusToGasMark(KelvinToCelsius(KelvinTemperature));
}

void PrintKelvinToOtherScalesConversion(long double KelvinTemperature)
{
	printf("\nKELVIN TEMPERATURE [%.2lf K] AFTER CONVERSION : \n", KelvinTemperature);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "CELSIUS";
	cout << "| " << left << setw(12) << KelvinToCelsius(KelvinTemperature) << " °C\n";

	cout << "| " << left << setw(12) << "FAHRENHEIT";
	cout << "| " << left << setw(12) << KelvinToFahrenheit(KelvinTemperature) << " °F\n";

	cout << "| " << left << setw(12) << "RANKINE";
	cout << "| " << left << setw(12) << KelvinToRankine(KelvinTemperature) << " °R\n";

	cout << "| " << left << setw(12) << "NEWTON";
	cout << "| " << left << setw(12) << KelvinToNewton(KelvinTemperature) << " °N\n";

	cout << "| " << left << setw(12) << "ROMER";
	cout << "| " << left << setw(12) << KelvinToRømer(KelvinTemperature) << " °Rø\n";

	cout << "| " << left << setw(12) << "REAUMUR";
	cout << "| " << left << setw(12) << KelvinToRéaumur(KelvinTemperature) << " °Ré\n";

	cout << "| " << left << setw(12) << "DELISLE";
	cout << "| " << left << setw(12) << KelvinToDelisle(KelvinTemperature) << " °D\n";

	cout << "| " << left << setw(12) << "GAS MARK";
	cout << "| " << left << setw(12) << KelvinToGasMark(KelvinTemperature) << " °GM\n";

	printf("\n___________________________________________\n\n");
}

//----------------------------------------------------------------------------
//FAHRENHEIT FUNCTIONS :
//-------------------------

long double FahrenheitToCelsius(long double FahrenheitTemperature)
{
	return (FahrenheitTemperature - 32) * (5 / 9.0);
}

long double FahrenheitToKelvin(long double FahrenheitTemperature)
{
	return ((FahrenheitTemperature - 32) * (5 / 9.0)) + 273.15;
}

long double FahrenheitToRankine(long double FahrenheitTemperature)
{
	return FahrenheitTemperature + 459.67;
}

long double FahrenheitToNewton(long double FahrenheitTemperature)
{
	return (FahrenheitTemperature - 32) * (11 / 60.0);
}

long double FahrenheitToRømer(long double FahrenheitTemperature)
{
	return (((FahrenheitTemperature - 32) * (7 / 24.0)) + 7.5);
}

long double FahrenheitToRéaumur(long double FahrenheitTemperature)
{
	return (FahrenheitTemperature - 32) * (4 / 9.0);
}

long double FahrenheitToDelisle(long double FahrenheitTemperature)
{
	return (212 - FahrenheitTemperature) * (5 / 6.0);
}

long double FahrenheitToGasMark(long double FahrenheitTemperature)
{
	return CelsiusToGasMark(FahrenheitToCelsius(FahrenheitTemperature));
}

void PrintFahrenheitToOtherScalesConversion(long double FahrenheitTemperature)
{
	printf("\nFAHRENHEIT TEMPERATURE [%.2lf °F] AFTER CONVERSION : \n", FahrenheitTemperature);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "CELSIUS";
	cout << "| " << left << setw(12) << FahrenheitToCelsius(FahrenheitTemperature) << " °C\n";

	cout << "| " << left << setw(12) << "KELVIN";
	cout << "| " << left << setw(12) << FahrenheitToKelvin(FahrenheitTemperature) << " K\n";

	cout << "| " << left << setw(12) << "RANKINE";
	cout << "| " << left << setw(12) << FahrenheitToRankine(FahrenheitTemperature) << " °R\n";

	cout << "| " << left << setw(12) << "NEWTON";
	cout << "| " << left << setw(12) << FahrenheitToNewton(FahrenheitTemperature) << " °N\n";

	cout << "| " << left << setw(12) << "ROMER";
	cout << "| " << left << setw(12) << FahrenheitToRømer(FahrenheitTemperature) << " °Rø\n";

	cout << "| " << left << setw(12) << "REAUMUR";
	cout << "| " << left << setw(12) << FahrenheitToRéaumur(FahrenheitTemperature) << " °Ré\n";

	cout << "| " << left << setw(12) << "DELISLE";
	cout << "| " << left << setw(12) << FahrenheitToDelisle(FahrenheitTemperature) << " °D\n";

	cout << "| " << left << setw(12) << "GAS MARK";
	cout << "| " << left << setw(12) << FahrenheitToGasMark(FahrenheitTemperature) << " °GM\n";

	printf("\n___________________________________________\n\n");
}

//----------------------------------------------------------------------------
//RANKINE FUNCTIONS :
//-------------------------

long double RankineToCelsius(long double RankineTemperature)
{
	return (RankineTemperature - 491.67) * (5 / 9.0);
}

long double RankineToKelvin(long double RankineTemperature)
{
	return RankineTemperature * (5 / 9.0);
}

long double RankineToFahrenheit(long double RankineTemperature)
{
	return RankineTemperature - 459.67;
}

long double RankineToNewton(long double RankineTemperature)
{
	return (RankineTemperature - 491.67) * (11 / 60.0);
}

long double RankineToRømer(long double RankineTemperature)
{
	return (((RankineTemperature - 491.67) * (7 / 24.0)) + 7.5);
}

long double RankineToRéaumur(long double RankineTemperature)
{
	return (RankineTemperature - 491.67) * (4 / 9.0);
}

long double RankineToDelisle(long double RankineTemperature)
{
	return (671.67 - RankineTemperature) * (5 / 6.0);
}

long double RankineToGasMark(long double RankineTemperature)
{
	return CelsiusToGasMark(RankineToCelsius(RankineTemperature));
}

void PrintRankineToOtherScalesConversion(long double RankineTemperature)
{
	printf("\nRANKINE TEMPERATURE [%.2lf °R] AFTER CONVERSION : \n", RankineTemperature);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "CELSIUS";
	cout << "| " << left << setw(12) << FahrenheitToCelsius(RankineTemperature) << " °C\n";

	cout << "| " << left << setw(12) << "KELVIN";
	cout << "| " << left << setw(12) << RankineToKelvin(RankineTemperature) << " K\n";

	cout << "| " << left << setw(12) << "FAHRENHEIT";
	cout << "| " << left << setw(12) << RankineToFahrenheit(RankineTemperature) << " °F\n";

	cout << "| " << left << setw(12) << "NEWTON";
	cout << "| " << left << setw(12) << RankineToNewton(RankineTemperature) << " °N\n";

	cout << "| " << left << setw(12) << "ROMER";
	cout << "| " << left << setw(12) << RankineToRømer(RankineTemperature) << " °Rø\n";

	cout << "| " << left << setw(12) << "REAUMUR";
	cout << "| " << left << setw(12) << RankineToRéaumur(RankineTemperature) << " °Ré\n";

	cout << "| " << left << setw(12) << "DELISLE";
	cout << "| " << left << setw(12) << RankineToDelisle(RankineTemperature) << " °D\n";

	cout << "| " << left << setw(12) << "GAS MARK";
	cout << "| " << left << setw(12) << RankineToGasMark(RankineTemperature) << " °GM\n";

	printf("\n___________________________________________\n\n");
}

//----------------------------------------------------------------------------
//NEWTON FUNCTIONS :
//-------------------------

long double NewtonToCelsius(long double NewtonTemperature)
{
	return NewtonTemperature * (100 / 33.0);
}

long double NewtonToKelvin(long double NewtonTemperature)
{
	return (NewtonTemperature * (100 / 33.0)) + 273.15;
}

long double NewtonToFahrenheit(long double NewtonTemperature)
{
	return (NewtonTemperature * (60.0 / 11)) + 32;
}

long double NewtonToRankine(long double NewtonTemperature)
{
	return (NewtonTemperature * (60 / 11.0)) + 491.67;
}

long double NewtonToRømer(long double NewtonTemperature)
{
	return (NewtonTemperature * (35.0 / 22) + 7.5);
}

long double NewtonToRéaumur(long double NewtonTemperature)
{
	return NewtonTemperature * (80 / 33.0); 
}

long double NewtonToDelisle(long double NewtonTemperature)
{
	return (150 - (NewtonTemperature * (50 / 11.0)));
}

long double NewtonToGasMark(long double NewtonTemperature)
{
	return CelsiusToGasMark(NewtonToCelsius(NewtonTemperature));
}

void PrintNewtonToOtherScalesConversion(long double NewtonTemperature)
{
	printf("\nNEWTON TEMPERATURE [%.2lf °N] AFTER CONVERSION : \n", NewtonTemperature);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "CELSIUS";
	cout << "| " << left << setw(12) << NewtonToCelsius(NewtonTemperature) << " °C\n";

	cout << "| " << left << setw(12) << "KELVIN";
	cout << "| " << left << setw(12) << NewtonToKelvin(NewtonTemperature) << " K\n";

	cout << "| " << left << setw(12) << "FAHRENHEIT";
	cout << "| " << left << setw(12) << NewtonToFahrenheit(NewtonTemperature) << " °F\n";

	cout << "| " << left << setw(12) << "RANKINE";
	cout << "| " << left << setw(12) << NewtonToRankine(NewtonTemperature) << " °R\n";

	cout << "| " << left << setw(12) << "ROMER";
	cout << "| " << left << setw(12) << NewtonToRømer(NewtonTemperature) << " °Rø\n";

	cout << "| " << left << setw(12) << "REAUMUR";
	cout << "| " << left << setw(12) << NewtonToRéaumur(NewtonTemperature) << " °Ré\n";

	cout << "| " << left << setw(12) << "DELISLE";
	cout << "| " << left << setw(12) << NewtonToDelisle(NewtonTemperature) << " °D\n";

	cout << "| " << left << setw(12) << "GAS MARK";
	cout << "| " << left << setw(12) << NewtonToGasMark(NewtonTemperature) << " °GM\n";

	printf("\n___________________________________________\n\n");
}

//----------------------------------------------------------------------------
//RØMER FUNCTIONS :
//-------------------------

long double RømerToCelsius(long double RømerTemperature)
{
	return (RømerTemperature - 7.5) * (40 / 21.0);
}

long double RømerToKelvin(long double RømerTemperature)
{
	return ((RømerTemperature - 7.5) * (40 / 21.0) + 273.15);
}

long double RømerToFahrenheit(long double RømerTemperature)
{
	return ((RømerTemperature - 7.5) * (24 / 7.0) + 32);
}

long double RømerToRankine(long double RømerTemperature)
{
	return ((RømerTemperature - 7.5) * (24 / 7.0) + 491.67);
}

long double RømerToNewton(long double RømerTemperature)
{
	return (RømerTemperature - 7.5) * (22 / 35.0);
}

long double RømerToRéaumur(long double RømerTemperature)
{
	return (RømerTemperature - 7.5) * (32 / 21.0);
}

long double RømerToDelisle(long double RømerTemperature)
{
	return (150 - ((RømerTemperature - 7.5) * (20 / 7.0)));
}

long double RømerToGasMark(long double RømerTemperature)
{
	return CelsiusToGasMark(RømerToCelsius(RømerTemperature));
}

void PrintRømerToOtherScalesConversion(long double RømerTemperature)
{
	printf("\nRØMER TEMPERATURE [%.2lf °Rø] AFTER CONVERSION : \n", RømerTemperature);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "CELSIUS";
	cout << "| " << left << setw(12) << RømerToCelsius(RømerTemperature) << " °C\n";

	cout << "| " << left << setw(12) << "KELVIN";
	cout << "| " << left << setw(12) << RømerToKelvin(RømerTemperature) << " K\n";

	cout << "| " << left << setw(12) << "FAHRENHEIT";
	cout << "| " << left << setw(12) << RømerToFahrenheit(RømerTemperature) << " °F\n";

	cout << "| " << left << setw(12) << "RANKINE";
	cout << "| " << left << setw(12) << RømerToRankine(RømerTemperature) << " °R\n";

	cout << "| " << left << setw(12) << "NEWTON";
	cout << "| " << left << setw(12) << RømerToNewton(RømerTemperature) << " °N\n";

	cout << "| " << left << setw(12) << "REAUMUR";
	cout << "| " << left << setw(12) << RømerToRéaumur(RømerTemperature) << " °Ré\n";

	cout << "| " << left << setw(12) << "DELISLE";
	cout << "| " << left << setw(12) << RømerToDelisle(RømerTemperature) << " °D\n";

	cout << "| " << left << setw(12) << "GAS MARK";
	cout << "| " << left << setw(12) << RømerToGasMark(RømerTemperature) << " °GM\n";

	printf("\n___________________________________________\n\n");
}

//----------------------------------------------------------------------------
//RÉAUMUR FUNCTIONS :
//-------------------------

long double RéaumurToCelsius(long double RéaumurTemperature)
{
	return RéaumurTemperature * (5 / 4.0);
}

long double RéaumurToKelvin(long double RéaumurTemperature)
{
	return RéaumurTemperature * (5 / 4.0) + 273.15;
}

long double RéaumurToFahrenheit(long double RéaumurTemperature)
{
	return RéaumurTemperature * (9 / 4.0) + 32;
}

long double RéaumurToRankine(long double RéaumurTemperature)
{
	return RéaumurTemperature * (9 / 4.0) + 491.67;
}

long double RéaumurToNewton(long double RéaumurTemperature)
{
	return RéaumurTemperature * (33 / 80.0);
}

long double RéaumurToRømer(long double RéaumurTemperature)
{
	return (RéaumurTemperature * (21 / 32.0) + 7.5);
}

long double RéaumurToDelisle(long double RéaumurTemperature)
{
	return (80 - RéaumurTemperature) * (15 / 8.0);
}

long double RéaumurToGasMark(long double RéaumurTemperature)
{
	return CelsiusToGasMark(RéaumurToCelsius(RéaumurTemperature));
}

void PrintRéaumurToOtherScalesConversion(long double RéaumurTemperature)
{
	printf("\nRÉAUMUR TEMPERATURE [%.2lf °Ré] AFTER CONVERSION : \n", RéaumurTemperature);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "CELSIUS";
	cout << "| " << left << setw(12) << RéaumurToCelsius(RéaumurTemperature) << " °C\n";

	cout << "| " << left << setw(12) << "KELVIN";
	cout << "| " << left << setw(12) << RéaumurToKelvin(RéaumurTemperature) << " K\n";

	cout << "| " << left << setw(12) << "FAHRENHEIT";
	cout << "| " << left << setw(12) << RéaumurToFahrenheit(RéaumurTemperature) << " °F\n";

	cout << "| " << left << setw(12) << "RANKINE";
	cout << "| " << left << setw(12) << RéaumurToRankine(RéaumurTemperature) << " °R\n";

	cout << "| " << left << setw(12) << "NEWTON";
	cout << "| " << left << setw(12) << RéaumurToNewton(RéaumurTemperature) << " °N\n";

	cout << "| " << left << setw(12) << "ROMER";
	cout << "| " << left << setw(12) << RéaumurToRømer(RéaumurTemperature) << " °Rø\n";

	cout << "| " << left << setw(12) << "DELISLE";
	cout << "| " << left << setw(12) << RéaumurToDelisle(RéaumurTemperature) << " °D\n";

	cout << "| " << left << setw(12) << "GAS MARK";
	cout << "| " << left << setw(12) << RéaumurToGasMark(RéaumurTemperature) << " °GM\n";

	printf("\n___________________________________________\n\n");
}

//----------------------------------------------------------------------------
//DELISLE FUNCTIONS :
//-------------------------

long double DelisleToCelsius(long double DelisleTemperature)
{
	return (150 - DelisleTemperature) * (2 / 3.0);
}

long double DelisleToKelvin(long double DelisleTemperature)
{
	return (150 - DelisleTemperature) * (2 / 3.0) + 273.15 ;
}

long double DelisleToFahrenheit(long double DelisleTemperature)
{
	return (212 - (DelisleTemperature * (6 / 5.0)));
}

long double DelisleToRankine(long double DelisleTemperature)
{
	return (671.67 - (DelisleTemperature * (6 / 5.0)));
}

long double DelisleToNewton(long double DelisleTemperature)
{
	return (150 - DelisleTemperature) * (11 / 50.0);
}

long double DelisleToRømer(long double DelisleTemperature)
{
	return ((150 - DelisleTemperature) * (7 / 20.0) + 7.5);
}

long double DelisleToRéaumur(long double DelisleTemperature)
{
	return (150 - DelisleTemperature) * (8 / 15.0);
}

long double DelisleToGasMark(long double DelisleTemperature)
{
	return CelsiusToGasMark(DelisleToCelsius(DelisleTemperature));
}

void PrintDelisleToOtherScalesConversion(long double DelisleTemperature)
{
	printf("\nDELISLE TEMPERATURE [%.2lf °D] AFTER CONVERSION : \n", DelisleTemperature);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "CELSIUS";
	cout << "| " << left << setw(12) << DelisleToCelsius(DelisleTemperature) << " °C\n";

	cout << "| " << left << setw(12) << "KELVIN";
	cout << "| " << left << setw(12) << DelisleToKelvin(DelisleTemperature) << " K\n";

	cout << "| " << left << setw(12) << "FAHRENHEIT";
	cout << "| " << left << setw(12) << DelisleToFahrenheit(DelisleTemperature) << " °F\n";

	cout << "| " << left << setw(12) << "RANKINE";
	cout << "| " << left << setw(12) << DelisleToRankine(DelisleTemperature) << " °R\n";

	cout << "| " << left << setw(12) << "NEWTON";
	cout << "| " << left << setw(12) << DelisleToNewton(DelisleTemperature) << " °N\n";

	cout << "| " << left << setw(12) << "ROMER";
	cout << "| " << left << setw(12) << DelisleToRømer(DelisleTemperature) << " °Rø\n";

	cout << "| " << left << setw(12) << "REAUMUR";
	cout << "| " << left << setw(12) << DelisleToRéaumur(DelisleTemperature) << " °Ré\n";

	cout << "| " << left << setw(12) << "GAS MARK";
	cout << "| " << left << setw(12) << DelisleToGasMark(DelisleTemperature) << " °GM\n";

	printf("\n___________________________________________\n\n");
}

//----------------------------------------------------------------------------
//GAS MARK FUNCTIONS :
//-------------------------

long double GasMarkToCelsius(long double GasMark)
{
	return ((243 - (-25 * (log(GasMark) / log(2)))) / 1.8);
}

long double GasMarkToKelvin(long double GasMark)
{
	return CelsiusToKelvin(GasMarkToCelsius(GasMark));
}

long double GasMarkToFahrenheit(long double GasMark)
{
	return CelsiusToFahrenheit(GasMarkToCelsius(GasMark));
}

long double GasMarkToRankine(long double GasMark)
{
	return CelsiusToRankine(GasMarkToCelsius(GasMark));
}

long double GasMarkToNewton(long double GasMark)
{
	return CelsiusToNewton(GasMarkToCelsius(GasMark));
}

long double GasMarkToRømer(long double GasMark)
{
	return CelsiusToRømer(GasMarkToCelsius(GasMark));
}

long double GasMarkToRéaumur(long double GasMark)
{
	return CelsiusToRéaumur(GasMarkToCelsius(GasMark));
}

long double GasMarkToDelisle(long double GasMark)
{
	return CelsiusToDelisle(GasMarkToCelsius(GasMark));
}

void PrintGasMarkToOtherScalesConversion(long double GasMark)
{

	printf("\nGAS MARK TEMPERATURE [%.2lf °GM] AFTER CONVERSION : \n", GasMark);
	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "SCALE";
	cout << "| " << left << setw(12) << "TEMPERATURE";

	printf("\n\n___________________________________________\n\n");

	cout << "| " << left << setw(12) << "CELSIUS";
	cout << "| " << left << setw(12) << GasMarkToCelsius(GasMark) << " °C\n";

	cout << "| " << left << setw(12) << "KELVIN";
	cout << "| " << left << setw(12) << GasMarkToKelvin(GasMark) << " K\n";

	cout << "| " << left << setw(12) << "FAHRENHEIT";
	cout << "| " << left << setw(12) << GasMarkToFahrenheit(GasMark) << " °F\n";

	cout << "| " << left << setw(12) << "RANKINE";
	cout << "| " << left << setw(12) << GasMarkToRankine(GasMark) << " °R\n";

	cout << "| " << left << setw(12) << "NEWTON";
	cout << "| " << left << setw(12) << GasMarkToNewton(GasMark) << " °N\n";

	cout << "| " << left << setw(12) << "ROMER";
	cout << "| " << left << setw(12) << GasMarkToRømer(GasMark) << " °Rø\n";

	cout << "| " << left << setw(12) << "REAUMUR";
	cout << "| " << left << setw(12) << GasMarkToRéaumur(GasMark) << " °Ré\n";

	cout << "| " << left << setw(12) << "DELISLE";
	cout << "| " << left << setw(12) << GasMarkToDelisle(GasMark) << " °D\n";

	printf("\n___________________________________________\n\n");


}

//----------------------------------------------------------------------------

void PrintTemperatureScalesMenu()
{
	ClearScreen();
	cout << "====================================================================\n\n";
	cout << Tab(3) << "TEMPERATURE SCALES\n\n";
	cout << "====================================================================\n";
	cout << Tab(3) << "[1] CELSIUS." << "\n";
	cout << Tab(3) << "[2] KELVIN." << "\n";
	cout << Tab(3) << "[3] FAHRENHEIT." << "\n";
	cout << Tab(3) << "[4] RANKINE." << "\n";
	cout << Tab(3) << "[5] NEWTON." << "\n";
	cout << Tab(3) << "[6] RØMER." << "\n";
	cout << Tab(3) << "[7] RÉAUMUR." << "\n";
	cout << Tab(3) << "[8] DELISLE." << "\n";
	cout << Tab(3) << "[9] GAS MARK." << "\n";
	cout << Tab(3) << "[10] EXIT PROGRAM." << "\n";
	cout << "====================================================================\n\n";
}

TemperatureScalesMenuChoices ReadTemperatureScalesMenuChoice()
{
	return (TemperatureScalesMenuChoices)(ValidateNumberInRange(1 , 10 , "CHOOSE WHAT DO YOU WANT TO DO ? [1 TO 10] ?"));
}

void PerformTemperatureConverionProcess(long double Temperature, TemperatureScalesMenuChoices TemperatureScalesMenuChoice)
{
	if (Temperature < 0)
	{
		ChangeCLIColors(std::Aqua);
	}

	if (Temperature >= 273)
	{
		ChangeCLIColors(std::Red);
	}

	switch (TemperatureScalesMenuChoice)
	{
	case Celsius:
		ClearScreen();
		PrintCelsiusToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case Kelvin:
		ClearScreen();
		PrintKelvinToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case Fahrenheit:
		ClearScreen();
		PrintFahrenheitToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case Rankine:
		ClearScreen();
		PrintRankineToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case Newton:
		ClearScreen();
		PrintNewtonToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case Rømer:
		ClearScreen();
		PrintRømerToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case Réaumur:
		ClearScreen();
		PrintRéaumurToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case Delisle:
		ClearScreen();
		PrintDelisleToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case GasMark:
		ClearScreen();
		PrintGasMarkToOtherScalesConversion(Temperature);
		GoToPauseMessage("\n\nPRESS ANY KEY TO GO BACK TO TEMPERATURE SCALES MENU...");
		break;
	case Exit:
		ExitProgram("GOOD BYE , TEMPERATURE CONVERSION PROGRAM :-)" , 2 , "=" , 75);
		exit(0);
		break;
	}
}

void StartProgramBanner()
{
	ClearScreen();
	SectionBanner("TEMPERATURE CONVERSION PROGRAM", 2, "=");
	
	GoToPauseMessage("\n\nPRESS ANY KEY TO START :-) ...\n");
}

void TemperatureConversionProgram()
{
	StartProgramBanner();

	while (true)
	{
		ChangeCLIColors(Black);
		PrintTemperatureScalesMenu();
		TemperatureScalesMenuChoices TemperatureScalesMenuChoice = ReadTemperatureScalesMenuChoice();
		long double Temperature = 0;

		if(TemperatureScalesMenuChoice != Exit)
		{
			Temperature = ReadNumber("\nENTER TEMPERATURE");
		}

		PerformTemperatureConverionProcess(Temperature , TemperatureScalesMenuChoice);
	}
}

int main()
{

	TemperatureConversionProgram();

	return 0;
}