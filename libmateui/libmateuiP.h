/*  -*- Mode: C; c-set-style: linux; indent-tabs-mode: nil; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 1997, 1998, 1999, 2000 Free Software Foundation
 * All rights reserved.
 *
 * This file is part of the Mate Library.
 *
 * The Mate Library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * The Mate Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with the Mate Library; see the file COPYING.LIB.  If not,
 * write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */
/*
  @NOTATION@
 */

#ifndef LIBMATEUIP_H
#define LIBMATEUIP_H

#include <glib.h>


#include <libmate/libmate.h>
#include "matetypebuiltins.h"
#include "mate-mateconf-ui.h"

#ifdef __cplusplus
extern "C" {
#endif

void mate_type_init(void);

#ifdef G_OS_WIN32
const char *_mate_ui_get_localedir      (void);
const char *_mate_ui_get_datadir        (void);

#undef MATEUILOCALEDIR
#define MATEUILOCALEDIR _mate_ui_get_localedir()
#undef LIBMATEUI_DATADIR
#define LIBMATEUI_DATADIR _mate_ui_get_datadir()

#endif

#ifdef __cplusplus
}
#endif

#endif /* LIBMATEUIP_H */

