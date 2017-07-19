/***********************  I n c l u d e  -  F i l e  ************************
 *  
 *         Name: pld_var.h
 *
 *       Author: ds
 *        $Date: 1999/04/26 15:14:53 $
 *    $Revision: 1.1 $
 * 
 *  Description: PLD loader library defines for different variants
 *                      
 *     Switches: PLD_SW - swapped access
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: pld_var.h,v $
 * Revision 1.1  1999/04/26 15:14:53  Schmidt
 * Initial Revision
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 1999 by MEN mikro elektronik GmbH, Nuremberg, Germany 
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

#ifndef _PLD_VAR_H
#define _PLD_VAR_H

#ifdef __cplusplus
	extern "C" {
#endif

/*--------------------------------------+
|   DEFINES                             |
+--------------------------------------*/
/* swapped access */
#ifdef PLD_SW
#	define MAC_BYTESWAP
#endif

#ifdef __cplusplus
	}
#endif

#endif	/* _PLD_VAR_H */
