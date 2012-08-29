/*
 * Copyright (C) 2003 Sun Microsystems Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * Authors: Mark McLoughlin <mark@skynet.ie>
 */

#include <config.h>

#include "mate-url.h"

#include <string.h>

/**
 * mate_url_show_on_screen:
 * @url: The url to display. Should begin with the protocol to use (e.g.
 * "http:", "ghelp:", etc)
 * @screen: a #GdkScreen.
 * @error: Used to store any errors that result from trying to display the @url.
 *
 * Description: Like mate_url_show(), but ensures that the viewer application
 * appears on @screen.
 *
 * Returns: %TRUE if everything went fine, %FALSE otherwise (in which case
 * @error will contain the actual error).
 * 
 * Since: 2.6
 **/
gboolean
mate_url_show_on_screen (const char  *url,
			  GdkScreen   *screen,
			  GError     **error)
{
	gboolean   retval;
	GdkAppLaunchContext *context;

	context = gdk_app_launch_context_new ();
	gdk_app_launch_context_set_screen (context, screen);

	retval = g_app_info_launch_default_for_uri (url, context, error);

	g_object_unref (context);

	return retval;
}
