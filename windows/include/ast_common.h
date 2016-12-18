/* $Id$ $Revision$ */
/* vim:set shiftwidth=4 ts=8: */

/*************************************************************************
 * Copyright (c) 2011 AT&T Intellectual Property 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors: See CVS logs. Details at http://www.graphviz.org/
 *************************************************************************/

/* : : generated from features/common by iffe version 1999-08-11 : : */
#ifndef _AST_COMMON_H
#define _AST_COMMON_H	1

#undef _sys_types
#define _sys_types	1	/* #include <sys/types.h> ok */

#undef _typ_ssize_t
#define _typ_ssize_t	0	/* ssize_t is a type */

/* dynamic linked library external scope handling */
#undef extern
#if defined(_dll_import) && !defined(__EXPORT__) && defined(_DLL_BLD)
#define __EXPORT__	__declspec(dllexport)
#endif
#if defined(_dll_import) && !defined(__IMPORT__)
#define __IMPORT__	__declspec(dllimport)
#endif
#if !defined(_astimport)
#if defined(__IMPORT__) && defined(_DLL_BLD)
#define _astimport	__IMPORT__
#else
#define _astimport	extern
#endif
#endif /*_astimport*/
#ifndef _AST_STD_H
#	if _sys_types
#	include	<sys/types.h>
#	endif
#endif
#if !_typ_ssize_t
#   undef _typ_ssize_t
#	define _typ_ssize_t	1
typedef int ssize_t;
#endif

#ifndef va_listref
#define va_listref(p) (p)	/* pass va_list to varargs function */
#define va_listval(p) (p)	/* retrieve va_list from va_arg(ap,va_listarg) */
#define va_listarg va_list	/* va_arg() va_list type */
#ifndef va_copy
#define va_copy(to,fr) ((to)=(fr))	/* copy va_list fr -> to */
#endif
#undef	_ast_va_list
#ifdef	va_start
#define _ast_va_list va_list
#else
#define _ast_va_list void*	/* va_list that avoids #include */
#endif

#endif
#endif
