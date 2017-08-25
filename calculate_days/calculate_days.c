#include <stdlib.h>
#include <stdio.h>
#include "calculate_days.h"
#include <assert.h>




//Calculare days 
//Given a month and day return the number of days
//Param: 
//	month
//	monthDay
//return
//	integer number of days

int calculateDays(Month currentMonth, int monthDay, int year){
	int daysPerMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int days = monthDay;
	Month i;

	//assert (year > 0);
	if (isLeapYear(year)){
		daysPerMonth[Feb] += 1;
	} 


	assert (monthDay >= 1 && monthDay <= daysPerMonth[currentMonth]);


	for (i=Jan; i<currentMonth; i++){
		days += daysPerMonth[i];
	}


	return days;


}



//isLeapYear
//Given a year return 1 if it is a leap year
//Param: 
//	year
//	
//return
//	integer 1 || 0

int isLeapYear (int year){
	assert (year > 0);
	if (year % 4 == 0 && (year % 100 != 0) || (year % 400 == 0)){
		return 1;
	}
	else 
		return 0;
	}