/*
 *	This file is part of OGS Engine
 *	Copyright (C) 1996-1997 Id Software, Inc.
 *	Copyright (C) 2018-2019 BlackPhrase
 *
 *	OGS Engine is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	OGS Engine is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with OGS Engine. If not, see <http://www.gnu.org/licenses/>.
 */

/// @file

#include "quakedef.h"

/*
===========
IN_MouseEvent
===========
*/
void IN_MouseEvent(int mstate)
{
	//if(mouseactive && !dinput)
	{
		ClientDLL_MouseEvent(mstate); // TODO: here or below???
	};
};

/*
===========
IN_Accumulate
===========
*/
void IN_Accumulate()
{
	//if(!dinput) // TODO: not present in qw
	{
		ClientDLL_IN_Accumulate();
	}
}

/*
===================
IN_ClearStates
===================
*/
void IN_ClearStates()
{
	ClientDLL_ClearStates();
};