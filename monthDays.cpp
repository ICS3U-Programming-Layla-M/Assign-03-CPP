// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 13, 2021
// This program asks the user to input a month and year
// and then displays how many days are in that month on that year

#include <iostream>
#include <string>

// declare global variables
std::string month, monthLowercase, yearAsString;
char c;
int yearAsInt, i = 0;


void outputMessage() {
    // display how many days are in a month and if it's a leap year or not
    if (monthLowercase == "jan" || monthLowercase == "january") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), January has 31 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), January has 31 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), January has 31 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), January has 31 days.\n";
        }
    } else if (monthLowercase == "feb" || monthLowercase == "february") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), February has 29 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), February has 28 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), February has 29 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), February has 28 days.\n";
        }
    } else if (monthLowercase == "mar" || monthLowercase == "march") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), March has 31 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                "(not a leap year), March has 31 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            "(a leap year), March has 31 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        "(not a leap year), March has 31 days.\n";
        }
    } else if (monthLowercase == "apr" || monthLowercase == "april") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                "(a leap year), April has 30 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                "(not a leap year), April has 30 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            "(a leap year), April has 30 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        "(not a leap year), April has 30 days.\n";
        }
    } else if (monthLowercase == "may") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), May has 31 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                "(not a leap year), May has 31 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), May has 31 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), May has 31 days.\n";
        }
    } else if (monthLowercase == "jun" || monthLowercase == "june") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), June has 30 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), June has 30 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), June has 30 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), June has 30 days.\n";
        }
    } else if (monthLowercase == "jul" || monthLowercase == "july") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), July has 31 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), July has 31 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), July has 31 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), July has 31 days.\n";
        }
    } else if (monthLowercase == "aug" || monthLowercase == "august") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), August has 31 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), August has 31 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), August has 31 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), August has 31 days.\n";
        }
    } else if (monthLowercase == "sep" || monthLowercase == "sept"
                || monthLowercase == "september") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), September has 30 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), September has 30 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), September has 30 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), September has 30 days.\n";
        }
    } else if (monthLowercase == "oct" || monthLowercase == "october") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), October has 31 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), October has 31 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), October has 31 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), October has 31 days.\n";
        }
    } else if (monthLowercase == "nov" || monthLowercase == "november") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), November has 30 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), November has 30 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), November has 30 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), November has 30 days.\n";
        }
    } else if (monthLowercase == "dec" || monthLowercase == "december") {
        if (yearAsInt % 4 == 0) {
           if (yearAsInt % 100 == 0) {
               if (yearAsInt % 400 == 0) {
                   std::cout << "In " << yearAsInt <<
                                " (a leap year), December has 31 days.\n";
               } else {
                   std::cout << "In " << yearAsInt <<
                                " (not a leap year), December has 31 days.\n";
               }
           } else {
               std::cout << "In " << yearAsInt <<
                            " (a leap year), December has 31 days.\n";
           }
        } else {
           std::cout << "In " << yearAsInt <<
                        " (not a leap year), December has 31 days.\n";
        }
    }
}


void yearInput() {
    // ask the user to input a year
    std::cout << "Enter a year: ";
    std::cin >> yearAsString;

    try {
        yearAsInt = std::stoi(yearAsString);
        // check if year is a negative number
        if (yearAsInt < 0) {
            std::cout << "Please enter a valid year.\n";
            yearInput();
        } else {
            std::cout << "\n";
            outputMessage();
        }
    }  // check if it's not an integer
    catch (std::invalid_argument) {
        // error message
        std::cout << "Please enter a valid year.\n";
        yearInput();
    }
}


int main() {
    // ask the user to input a month
    std::cout << "Enter a month: ";
    std::cin >> month;

    i = 0;
    monthLowercase = "";
    while (month[i]) {
        c = month[i];
        monthLowercase += tolower(c);
        i++;
    }

    if (monthLowercase == "jan" || monthLowercase == "january" ||
        monthLowercase == "feb" || monthLowercase == "february" ||
        monthLowercase == "mar" || monthLowercase == "march" ||
        monthLowercase == "apr" || monthLowercase == "april" ||
        monthLowercase == "may" ||
        monthLowercase == "jun" || monthLowercase == "june" ||
        monthLowercase == "jul" || monthLowercase == "july" ||
        monthLowercase == "aug" || monthLowercase == "august" ||
        monthLowercase == "sep" || monthLowercase == "sept" ||
        monthLowercase == "september" ||
        monthLowercase == "oct" || monthLowercase == "october" ||
        monthLowercase == "nov" || monthLowercase == "november" ||
        monthLowercase == "dec" || monthLowercase == "december") {
            yearInput();
    } else {
        std::cout << "Please enter a valid month.\n";
        main();
    }
}
