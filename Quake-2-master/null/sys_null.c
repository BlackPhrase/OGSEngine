#include "../qcommon/qcommon.h"

int	curtime;

unsigned	sys_frame_time;

void	Sys_UnloadGame (void)
{
}

void	*Sys_GetGameAPI (void *parms)
{
	return NULL;
}

void	Sys_ConsoleOutput (char *string)
{
}

void Sys_AppActivate (void)
{
}

void Sys_CopyProtect (void)
{
}

char *Sys_GetClipboardData( void )
{
	return NULL;
}

void	*Hunk_Begin (int maxsize)
{
	return NULL;
}

void	*Hunk_Alloc (int size)
{
	return NULL;
}

void	Hunk_Free (void *buf)
{
}

int		Hunk_End (void)
{
	return 0;
}

int		Sys_Milliseconds (void)
{
	return 0;
}

void	Sys_Mkdir (char *path)
{
}

char	*Sys_FindFirst (char *path, unsigned musthave, unsigned canthave)
{
	return NULL;
}

char	*Sys_FindNext (unsigned musthave, unsigned canthave)
{
	return NULL;
}

void	Sys_FindClose (void)
{
}

void	Sys_Init (void)
{
}


//=============================================================================

void main (int argc, char **argv)
{
	Qcommon_Init (argc, argv);

	while (1)
	{
		Qcommon_Frame (0.1);
	}
}


