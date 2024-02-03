/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2024 admin <admin@pop-os>
 * 
 * lpt is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * lpt is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*Program closes with a mouse click or keypress */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>

#include <SDL/SDL_net.h>


int main (int argc, char *argv[])
{
	int i;

	IPaddress local = {0x0100007F, 0x50};

	
	printf ("Initializing SDL.\n");
	
	/* Initializes Audio and the CDROM, add SDL_INIT_VIDEO for Video */
	if (SDL_Init(SDL_INIT_AUDIO | SDL_INIT_CDROM)< 0)
	{
    	printf("Could not initialize SDL:%s\n", SDL_GetError());
		SDL_Quit();
		
		return 1;
	}
	printf("Audio & CDROM initialized correctly\n");
	
    /* Trying to read number of CD devices on system */
	printf("Drives available: %d\n", SDL_CDNumDrives());
    	for (i=0; i < SDL_CDNumDrives(); ++i)
	{
		printf("Drive %d\"%s\"\n", i, SDL_CDName(i));
    	}
	

	if (SDLNet_Init() < 0)
	{
		printf("Could not initialize SDL_net:%s\n", SDLNet_GetError());
		SDL_Quit();

		return 1;
	}
	printf("\n\nNetwork initialized correctly\n");
	
	/* Get host name */
	printf("Hostname: %s\n", SDLNet_ResolveIP(&local));

	SDLNet_Quit();

	
	SDL_Quit();
	
	return(0);
}

