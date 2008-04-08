/* -*- buffer-read-only: t -*-
 *
 *    overload.c
 *
 *    Copyright (C) 1997, 1998, 2000, 2001, 2005, 2006, 2007 by Larry Wall
 *    and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 *  !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *  This file is built by overload.pl
 */

#define AMG_id2namelen(id) (PL_AMG_namelens[id]-1)

static const U8 PL_AMG_namelens[NofAMmeth] = {
    2,
    4,
    5,
    9,
    3,
    3,
    2,
    3,
    2,
    3,
    2,
    3,
    2,
    3,
    2,
    3,
    3,
    4,
    3,
    4,
    3,
    4,
    2,
    3,
    2,
    3,
    2,
    3,
    2,
    3,
    2,
    3,
    3,
    3,
    4,
    4,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    2,
    3,
    3,
    6,
    4,
    4,
    4,
    4,
    5,
    2,
    3,
    2,
    3,
    2,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    4,
    7
};
