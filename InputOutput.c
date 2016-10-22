//HW#2 - Danielle D'Alessio

#include <stdio.h>

int main()
{
    //Apple Maps
    #define NewYork 930
    #define Paris 4476
    #define London 4326
    #define Rome 5102
    #define Frankfurt 4722
    #define SanFrancisco 2444
    #define Tokyo 7255
    #define Havana 384

    //Wikipedia
    #define B747 614
    #define B777 590
    #define A330 567
    #define A380 634
    #define Concorde 1354

    char city;
    printf("Please enter the city you would like to fly to\n");
    printf("Enter the first character of the name of the city in a lower case letter\n");
    scanf("%c", &city);

    int distance;
    switch (city)
    {
        case 'n':
            {
                distance = NewYork;
                break;
            }

        case 'p':
            {
                distance = Paris;
                break;
            }

        case 'l':
            {
                distance = London;
                break;
            }

        case 'r':
            {
                distance = Rome;
                break;
            }

        case 'f':
            {
                distance = Frankfurt;
                break;
            }

        case 's':
            {
                distance = SanFrancisco;
                break;
            }

        case 't':
            {
                distance = Tokyo;
                break;
            }

        case 'h':
            {
                distance = Havana;
                break;
            }
        default:
            {
                printf("You've made an error..\n");
                return 0;
            }

    }

    int vel;
    printf("Enter the following values for the type of aircraft to be flown:\n\n");
    printf("Enter 1 if Boeing 747\n");
    printf("Enter 2 if Boeing 777\n");
    printf("Enter 3 if Airbus 330\n");
    printf("Enter 4 if Airbus 380\n");
    printf("Enter 5 if Concorde\n");
    scanf("%d", &vel);


    int speed;
    if (vel == 1)
    {
        speed = B747;
    }
    else if (vel == 2)
    {
        speed = B777;
    }
    else if (vel == 3)
    {
        speed = A330;
    }
    else if (vel == 4)
    {
        speed = A380;
    }
    else if (vel == 5)
    {
        speed = Concorde;
    }
    else
    {
       printf("Your entry is meaningless. Run the program again.\n");
       return 0;
    }

    int flight_hours;
    flight_hours = distance/speed;

    int flight_minutes;
    flight_minutes = ((float) (distance%speed) / (float) speed)* 60.;


    printf("Your flight from Orlando to your city of choice will take %d hours and %d minutes\n", flight_hours, flight_minutes);

    return 0;


}
