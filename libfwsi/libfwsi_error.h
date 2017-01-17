/*
 * Error functions
 *
 * Copyright (C) 2010-2017, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFWSI_INTERNAL_ERROR_H )
#define _LIBFWSI_INTERNAL_ERROR_H

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if !defined( HAVE_LOCAL_LIBFWSI )
#include <libfwsi/error.h>
#endif

#include "libfwsi_extern.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if !defined( HAVE_LOCAL_LIBFWSI )

LIBFWSI_EXTERN \
void libfwsi_error_free(
      libfwsi_error_t **error );

LIBFWSI_EXTERN \
int libfwsi_error_fprint(
     libfwsi_error_t *error,
     FILE *stream );

LIBFWSI_EXTERN \
int libfwsi_error_sprint(
     libfwsi_error_t *error,
     char *string,
     size_t size );

LIBFWSI_EXTERN \
int libfwsi_error_backtrace_fprint(
     libfwsi_error_t *error,
     FILE *stream );

LIBFWSI_EXTERN \
int libfwsi_error_backtrace_sprint(
     libfwsi_error_t *error,
     char *string,
     size_t size );

#endif /* !defined( HAVE_LOCAL_LIBFWSI ) */

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFWSI_INTERNAL_ERROR_H ) */

