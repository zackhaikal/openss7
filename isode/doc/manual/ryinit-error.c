/*****************************************************************************

 @(#) $RCSfile$ $Name$($Revision$) $Date$

 -----------------------------------------------------------------------------

 Copyright (c) 2001-2007  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2000  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software: you can redistribute it and/or modify it under
 the terms of the GNU General Public License as published by the Free Software
 Foundation, version 3 of the license.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 details.

 You should have received a copy of the GNU General Public License along with
 this program.  If not, see <http://www.gnu.org/licenses/>, or write to the
 Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 -----------------------------------------------------------------------------

 Last Modified $Date$ by $Author$

 -----------------------------------------------------------------------------

 $Log$
 *****************************************************************************/

#ident "@(#) $RCSfile$ $Name$($Revision$) $Date$"

static char const ident[] = "$RCSfile$ $Name$($Revision$) $Date$";

...void
ros_adios(rop, event)
	register struct RoSAPpreject *rop;
	char *event;
{
	ros_advise(rop, event);

	_exit(1);
}

void
ros_advise(rop, event)
	register struct RoSAPpreject *rop;
	char *event;
{
	char buffer[BUFSIZ];

	if (rop->rop_cc > 0)
		(void) sprintf(buffer, "[%s] %*.*s", RoErrString(rop->rop_reason),
			       rop->rop_cc, rop->rop_cc, rop->rop_data);
	else
		(void) sprintf(buffer, "[%s]", RoErrString(rop->rop_reason));

	advise(NULLCP, "%s: %s", event, buffer);
}

void
acs_adios(aca, event)
	register struct AcSAPabort *aca;
	char *event;
{
	acs_advise(aca, event);

	_exit(1);
}

void
acs_advise(aca, event)
	register struct AcSAPabort *aca;
	char *event;
{
	char buffer[BUFSIZ];

	if (aca->aca_cc > 0)
		(void) sprintf(buffer, "[%s] %*.*s",
			       AcErrString(aca->aca_reason),
			       aca->aca_cc, aca->aca_cc, aca->aca_data);
	else
		(void) sprintf(buffer, "[%s]", AcErrString(aca->aca_reason));

	advise(NULLCP, "%s: %s (source %d)", event, buffer, aca->aca_source);
}

#ifndef	lint
void _advise();

void
adios(va_alist)
	va_dcl
{
	va_list ap;

	va_start(ap);

	_advise(ap);

	va_end(ap);

	_exit(1);
}
#else
/* VARARGS */

void
adios(what, fmt)
	char *what, *fmt;
{
	adios(what, fmt);
}
#endif

#ifndef	lint
void
advise(va_alist)
	va_dcl
{
	va_list ap;

	va_start(ap);

	_advise(ap);

	va_end(ap);
}

static void
_advise(ap)
	va_list ap;
{
	char buffer[BUFSIZ];

    xsprintf (buffer, ap);

	(void) fflush(stdout);

	fprintf(stderr, "%s: ", myname);
	(void) fputs(buffer, stderr);
	(void) fputc('\n', stderr);

	(void) fflush(stderr);
}
#else
/* VARARGS */

void
advise(what, fmt)
	char *what, *fmt;
{
	advise(what, fmt);
}
#endif