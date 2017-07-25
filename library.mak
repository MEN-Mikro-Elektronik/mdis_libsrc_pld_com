#**************************  M a k e f i l e ********************************
#  
#         Author: kp
#          $Date: 1999/04/26 15:14:46 $
#      $Revision: 1.2 $
#  
#    Description: makefile descriptor for PLD library (all sources)
#                      
#---------------------------------[ History ]---------------------------------
#
#   $Log: library.mak,v $
#   Revision 1.2  1999/04/26 15:14:46  Schmidt
#   includes added, MAK_OPTIM removed
#
#   Revision 1.1  1999/04/14 15:33:15  kp
#   Initial Revision
#
#-----------------------------------------------------------------------------
#   (c) Copyright 1998 by MEN mikro elektronik GmbH, Nuremberg, Germany 
#*****************************************************************************
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.



MAK_NAME=pld

MAK_LIBS=

MAK_SWITCH=$(SW_PREFIX)MAC_MEM_MAPPED

MAK_INCL=$(MEN_MOD_DIR)/pld_var.h \
         $(MEN_INC_DIR)/men_typs.h \
         $(MEN_INC_DIR)/dbg.h \
         $(MEN_INC_DIR)/oss.h \
         $(MEN_INC_DIR)/maccess.h \
         $(MEN_INC_DIR)/pld_load.h

MAK_INP1=errmsg$(INP_SUFFIX)
MAK_INP2=flex10k$(INP_SUFFIX)

MAK_INP=$(MAK_INP1) $(MAK_INP2) 

