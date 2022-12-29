

typedef struct flights {
    int flight id ;
	int price;
	struct date departuredate;
	char destination [50];
	char departure[50];
	int departuretime;
	int arrivaltime;
}
typedef struct date {
	int day;
	int month;
	int year;
}
void deleteflightdescript(int id);
void addflight();
void showflightsdescription(int id);
void deleteflight(int id);
void findflight(char word[100]);
void modifyflight(int id );
void showallflights();



