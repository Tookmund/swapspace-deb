/*
This file is part of Swapspace.

Copyright (C) 2005,2006, Software Industry Industry Promotion Agency (SIPA)
Copyright (C) 2010, Jeroen T. Vermeulen
Written by Jeroen T. Vermeulen.

Swapspace is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

Swapspace is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with swapspace; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/
#ifndef SWAPSPACE_STATE_H
#define SWAPSPACE_STATE_H

/// Perform one iteration of the allocation algorithm.  Clobbers localbuf.
void handle_requirements(void);

/// Log state information.  Clubbers localbuf.
void dump_state(void);

/// Request a transition to "diet" state
void request_diet(void);

#ifndef NO_CONFIG
char *set_cooldown(long long duration);
#endif

#endif

