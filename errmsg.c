/*********************  P r o g r a m  -  M o d u l e ***********************
 *  
 *         Name: errmsg.c
 *      Project: PLD loader library
 *
 *       Author: see
 *
 *  Description: Return PLD Loader error message string
 *                      
 *     Required: - 
 *     Switches: -
 *
 *---------------------------[ Public Functions ]----------------------------
 *  
 * PLD_ErrorMsg - Return PLD error message string
 *  
 *---------------------------------------------------------------------------
 * Copyright 1998-2019, MEN Mikro Elektronik GmbH
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 

#include "pld_var.h"		/* defines variants */
#include <MEN/men_typs.h>
#include <MEN/dbg.h>
#include <MEN/oss.h>
#include <MEN/maccess.h>
#include <MEN/pld_load.h>

/*--------------------------------------+
|   DEFINES                             |
+--------------------------------------*/
/* none */

/*--------------------------------------+
|   TYPDEFS                             |
+--------------------------------------*/
/* none */

/*--------------------------------------+
|   EXTERNALS                           |
+--------------------------------------*/
/* none */

/*--------------------------------------+
|   GLOBALS                             |
+--------------------------------------*/
/* none */

/*--------------------------------------+
|   PROTOTYPES                          |
+--------------------------------------*/
/* none */

/********************************* PLD_ErrorMsg *****************************
 *
 *  Description: Return PLD error message string
 *			   
 *---------------------------------------------------------------------------
 *  Input......: error		PLD_ERR_xxx error number
 *  Output.....: return		pointer to error message
 *  Globals....: -
 ****************************************************************************/
char *PLD_ErrorMsg(int32 error)
{
	switch(error) {
		case 0:					return("PLD successful loaded");
		case PLD_ERR_NOTFOUND:	return("PLD did not respond");
		case PLD_ERR_INIT:		return("PLD initialization failed");
		case PLD_ERR_LOAD:		return("PLD data loading failed");
		case PLD_ERR_TERM:		return("PLD termination failed");
	}

	return("PLD unknown error");
}


