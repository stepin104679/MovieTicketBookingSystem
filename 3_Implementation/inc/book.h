/**
	* @file book.h
	*/

#ifndef __BOOK_H__
#define __BOOK_H__
/**
	* Handles Ticket Booking
	* @param[in] ch Movie Name
	* @param[in] total_seat Total number of seats to be selected
	* @param[in] seat Seat numbers to be selected
	* @return Ticket Information
	*/

int book_ticket(char * ch,int total_seat,int* seat);

#endif
