/*Program 1:Write a C program for a tourism guide that contains information about four countries. 
Each country should have four cities, and for each city, the program should display information 
about its famous places.*/
#include<stdio.h>
int main()
{
	int country,city;
	printf("welcome to the Tourism Guide..\n");
	printf("Select a Country:\n");
	printf("1. Pakistan\n");
	printf("2. France\n");
	printf("3. Spain\n");
	printf("4. Italy\n");
	scanf("%d",&country);
	if (country==1)
	{
		printf("You Selected PAKISTAN\n");
		printf("Select a City:\n");
		printf("1. Karachi\n");
		printf("2. Lahore\n");
		printf("3. Islamabad\n");
		printf("4. Peshawar\n");
		scanf("%d",&city);
		if(city==1)
		{
		printf("You Selected KARACHI\n");
		printf("Famous Places in Karachi:\n");
		printf("Clifton Beach\n");
		printf("Frere Hall\n");
		printf("Empress Market\n");
		printf("Port Grand\n");
		}
		else
		if(city==2)
		{
		printf("You Selected LAHORE\n");
		printf("Famous Places in Lahore:\n");
		printf("Lahore Fort\n");
		printf("Badshahi Mosque\n");
		printf("Shalimar Gardens\n");
		printf("Gaddafi Stadium\n");
	    }
	    else
	    if(city==3)
	    {
	    printf("You Selected ISLAMABAD\n");
		printf("Famous Places in Islamabad:\n");
		printf("Faisal Mosque\n");
		printf("Margalla Hills\n");
		printf("Pakistan Monument\n");
		printf("Daman-e-Koh\n");
	    }
	    else
	    if(city==4)
	    {
	    printf("You Selected PESHAWAR\n");
		printf("Famous Places in Peshawar:\n");
		printf("Qissa Khawani Bazar\n");
		printf("Bala Hisar Fort\n");
		printf("Sethi House Museum \n");
		printf("Masjid Mahabat Khan\n");
		}
			else 
		{
			printf("Invalid City Selection...");
		}
	}
	else
	if(country==2)
	{
		printf("You Selected FRANCE\n");
		printf("Select a City:\n");
		printf("1. Paris\n");
		printf("2. Lyon\n");
		printf("3. Bordeaux\n");
		printf("4. Nice\n");
		scanf("%d",&city);
		if(city==1)
		{
		printf("You Selected PARIS\n");
		printf("Famous Places in Paris:\n");
		printf("Eiffel Tower\n");
		printf("Louvre Museum\n");
		printf("Notre-Dame Cathedral\n");
		printf("Arc de Triomphe\n");
		}
		else
		if(city==2)
		{
		printf("You Selected LYON\n");
		printf("Famous Places in Lyon:\n");
		printf("Basilica of Notre Dame of Fourvière\n");
		printf("Roman Theatres\n");
		printf("Lyon's gastronomy\n");
		printf("Vieux Lyon\n");
	    }
	    else
	    if(city==3)
	    {
	    printf("You Selected BORDEAUX\n");
		printf("Famous Places in Bordeaux:\n");
		printf("Wine region\n");
		printf("Place de la Bourse\n");
		printf("Grand Théâtre\n");
		printf("Pont de Pierre\n");
	    }
	    else
	    if(city==4)
	    {
	    printf("You Selected NICE\n");
		printf("Famous Places in Nice:\n");
		printf("Promenade des Anglais\n");
		printf("Negresco Hotel\n");
		printf("Chagall Museum \n");
		printf("Baie des Anges\n");
		}
			else 
		{
			printf("Invalid City Selection...");
		}
	}
	else
	if(country==3)
	{
		printf("You Selected SPAIN\n");
		printf("Select a City:\n");
		printf("1. Madrid\n");
		printf("2. Barcelona\n");
		printf("3. Seville\n");
		printf("4. Valencia\n");
		scanf("%d",&city);
		if(city==1)
		{
		printf("You Selected MADRID\n");
		printf("Famous Places in Madrid:\n");
		printf("Santiago Bernabéu Stadium\n");
		printf("Royal Palace of Madrid\n");
		printf("Prado Museum\n");
		printf("Puerto del Sol\n");
		}
		else
		if(city==2)
		{
		printf("You Selected BARCELONA\n");
		printf("Famous Places in Barcelona:\n");
		printf("Sagrada Familia\n");
		printf("Park Güell\n");
		printf("Las Ramblas\n");
		printf("Gothic Quarter\n");
	    }
	    else
	    if(city==3)
	    {
	    printf("You Selected SEVILLE\n");
		printf("Famous Places in Seville:\n");
		printf("Alcázar of Seville\n");
		printf("Seville Cathedral\n");
		printf("Plaza de España\n");
		printf("Metropol Parasol\n");
	    }
	    else
	    if(city==4)
	    {
	    printf("You Selected VALENCIA\n");
		printf("Famous Places in Valencia:\n");
		printf("City of Arts and Sciences\n");
		printf("Valencia Cathedral \n");
		printf("Mercado Central\n");
		printf("L'Oceanogràfic\n");
		}
		else 
		{
			printf("Invalid City Selection...");
		}
	}
	else
	if(country==4)
	{
		printf("You Selected ITALY\n");
		printf("Select a City:\n");
		printf("1. Rome\n");
		printf("2. Florence\n");
		printf("3. Venice\n");
		printf("4. Milan\n");
		scanf("%d",&city);
		if(city==1)
		{
		printf("You Selected ROME\n");
		printf("Famous Places in Rome:\n");
		printf("Colosseum\n");
		printf("Vatican City\n");
		printf("Trevi Fountain\n");
		printf("Roman Forum\n");
		}
		else
		if(city==2)
		{
		printf("You Selected FLORENCE\n");
		printf("Famous Places in Florence:\n");
		printf("Duomo\n");
		printf("Uffizi Gallery\n");
		printf("Ponte Vecchio\n");
		printf("Galleria dell'Accademia\n");
	    }
	    else
	    if(city==3)
	    {
	    printf("You Selected VENICE\n");
		printf("Famous Places in Venice:\n");
		printf("St. Mark's Basilica\n");
		printf("Doge's Palace\n");
		printf("Grand Canal\n");
		printf("Rialto Bridge\n");
	    }
	    else
	    if(city==4)
	    {
	    printf("You Selected MILAN\n");
		printf("Famous Places in Milan:\n");
		printf("Duomo di Milano\n");
		printf("Galleria Vittorio Emanuele II\n");
		printf("Sforza Castle\n");
		printf("The Last Supper\n");
		}
		else 
		{
			printf("Invalid City Selection...");
		}
	}
	else
	{
	  printf("Invalid City Selection...");
	}
   return 0;
}
