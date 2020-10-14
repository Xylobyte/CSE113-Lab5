#include <stdio.h>
#include <stdlib.h>

enum month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUNE,
    JUL,
    AUG,
    SEPT,
    OCT,
    NOV,
    DEC
};

struct date_t {
    unsigned short month;
    unsigned short day;
    unsigned short year;
};

void printDate(struct date_t date);

int main() {
    struct date_t date;
    int menu;

    while(1) {
        printf("Enter a date in the following format MM/DD/YY: ");
        scanf(" %hu/%hu/%hu", &date.month, &date.day, &date.year);

        switch(date.month)
        {
        case MAR:
            if(date.day < 21) {
                printDate(date);
                printf("Pisces\n");
            }
            if(date.day >= 21) {
                printDate(date);
                printf("Aries\n");
            }
            break;
        case APR:
            if(date.day < 20) {
                printDate(date);
                printf("Aries\n");
            }
            if(date.day >= 20) {
                printDate(date);
                printf("Taurus\n");
            }
            break;
        case MAY:
            if(date.day < 21) {
                printDate(date);
                printf("Taurus\n");
            }
            if(date.day >= 21) {
                printDate(date);
                printf("Gemini\n");
            }
            break;
        case JUNE:
            if(date.day < 21) {
                printDate(date);
                printf("Gemini\n");
            }
            if(date.day >= 21) {
                printDate(date);
                printf("Cancer\n");
            }
            break;
        case JUL:
            if(date.day < 23) {
                printDate(date);
                printf("Cancer\n");
            }
            if(date.day >= 23) {
                printDate(date);
                printf("Leo\n");
            }
            break;
        case AUG:
            if(date.day < 23) {
                printDate(date);
                printf("Leo\n");
            }
            if(date.day >= 23) {
                printDate(date);
                printf("Virgo\n");
            }
            break;
        case SEPT:
            if(date.day < 23) {
                printDate(date);
                printf("Virgo\n");
            }
            if(date.day >= 23) {
                printDate(date);
                printf("Libra\n");
            }
            break;
        case OCT:
            if(date.day < 23) {
                printDate(date);
                printf("Libra\n");
            }
            if(date.day >= 23) {
                printDate(date);
                printf("Scorpio\n");
            }
            break;
        case NOV:
            if(date.day < 22) {
                printDate(date);
                printf("Scorpio\n");
            }
            if(date.day >= 23) {
                printDate(date);
                printf("Sagittarius\n");
            }
            break;
        case DEC:
            if(date.day < 22) {
                printDate(date);
                printf("Sagittarius\n");
            }
            if(date.day >= 22) {
                printDate(date);
                printf("Capricorn\n");
            }
            break;
        case JAN:
            if(date.day < 20) {
                printDate(date);
                printf("Capricorn\n");
            }
            if(date.day >= 20) {
                printDate(date);
                printf("Aquarius\n");
            }
            break;
        case FEB:
            if(date.day < 19) {
                printDate(date);
                printf("Aquarius\n");
            }
            if(date.day >= 19) {
                printDate(date);
                printf("Pisces\n");
            }
            break;
        
        default:
            break;
        }

        printf("----Menu----\n");
        printf("1. Enter another date\n");
        printf("2. Quit\n");
        printf("Enter your selection: ");
        scanf(" %d", &menu);
        switch(menu){
        case 1:
            continue;
            break;
        case 2:
            printf("Goodbye!\n");
            exit(0);
        default:
            break;
        }
    }

    

    return 0;
}

void printDate(struct date_t date) {
    switch(date.month) {
        case JAN:
            printf("January ");
            break;
        case FEB:
            printf("February ");
            break;
        case MAR:
            printf("March ");
            break;
        case APR:
            printf("April ");
            break;
        case MAY:
            printf("May ");
            break;
        case JUNE:
            printf("June ");
            break;
        case JUL:
            printf("July ");
            break;
        case AUG:
            printf("August ");
            break;
        case SEPT:
            printf("September ");
            break;
        case OCT:
            printf("October ");
            break;
        case NOV:
            printf("November ");
            break;
        case DEC:
            printf("December ");
            break;
    }
    printf("%hu, ", date.day);
}