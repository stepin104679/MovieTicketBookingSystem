/**
	* @file admin.h
	**/
#ifndef __ADMIN_H__
#define __ADMIN_H__
/**
	* Handles admin login information
	* @param[in] aname admin name
	* @param[in] pword password
	* @return Login successful or not
	*/

int login_admin(char* aname, char* pword);

#endif
