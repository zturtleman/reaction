/*
===========================================================================
Copyright (C) 2010 James Canete (use.less01@gmail.com)

This file is part of Quake III Arena source code.

Quake III Arena source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Quake III Arena source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Quake III Arena source code; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/
// tr_extramath.c - extra math needed by the renderer not in qmath.c

#include "tr_local.h"

// Some matrix helper functions
// FIXME: do these already exist in ioq3 and I don't know about them?

void Matrix16Zero( matrix_t out )
{
	out[ 0] = 0.0f; out[ 4] = 0.0f; out[ 8] = 0.0f; out[12] = 0.0f;
	out[ 1] = 0.0f; out[ 5] = 0.0f; out[ 9] = 0.0f; out[13] = 0.0f;
	out[ 2] = 0.0f; out[ 6] = 0.0f; out[10] = 0.0f; out[14] = 0.0f;
	out[ 3] = 0.0f; out[ 7] = 0.0f; out[11] = 0.0f; out[15] = 0.0f;
}

void Matrix16Identity( matrix_t out )
{
	out[ 0] = 1.0f; out[ 4] = 0.0f; out[ 8] = 0.0f; out[12] = 0.0f;
	out[ 1] = 0.0f; out[ 5] = 1.0f; out[ 9] = 0.0f; out[13] = 0.0f;
	out[ 2] = 0.0f; out[ 6] = 0.0f; out[10] = 1.0f; out[14] = 0.0f;
	out[ 3] = 0.0f; out[ 7] = 0.0f; out[11] = 0.0f; out[15] = 1.0f;
}

void Matrix16Copy( const matrix_t in, matrix_t out )
{
	out[ 0] = in[ 0]; out[ 4] = in[ 4]; out[ 8] = in[ 8]; out[12] = in[12]; 
	out[ 1] = in[ 1]; out[ 5] = in[ 5]; out[ 9] = in[ 9]; out[13] = in[13]; 
	out[ 2] = in[ 2]; out[ 6] = in[ 6]; out[10] = in[10]; out[14] = in[14]; 
	out[ 3] = in[ 3]; out[ 7] = in[ 7]; out[11] = in[11]; out[15] = in[15]; 
}

void Matrix16Multiply( const matrix_t in1, const matrix_t in2, matrix_t out )
{
	out[ 0] = in1[ 0] * in2[ 0] + in1[ 4] * in2[ 1] + in1[ 8] * in2[ 2] + in1[12] * in2[ 3];
	out[ 1] = in1[ 1] * in2[ 0] + in1[ 5] * in2[ 1] + in1[ 9] * in2[ 2] + in1[13] * in2[ 3];
	out[ 2] = in1[ 2] * in2[ 0] + in1[ 6] * in2[ 1] + in1[10] * in2[ 2] + in1[14] * in2[ 3];
	out[ 3] = in1[ 3] * in2[ 0] + in1[ 7] * in2[ 1] + in1[11] * in2[ 2] + in1[15] * in2[ 3];

	out[ 4] = in1[ 0] * in2[ 4] + in1[ 4] * in2[ 5] + in1[ 8] * in2[ 6] + in1[12] * in2[ 7];
	out[ 5] = in1[ 1] * in2[ 4] + in1[ 5] * in2[ 5] + in1[ 9] * in2[ 6] + in1[13] * in2[ 7];
	out[ 6] = in1[ 2] * in2[ 4] + in1[ 6] * in2[ 5] + in1[10] * in2[ 6] + in1[14] * in2[ 7];
	out[ 7] = in1[ 3] * in2[ 4] + in1[ 7] * in2[ 5] + in1[11] * in2[ 6] + in1[15] * in2[ 7];

	out[ 8] = in1[ 0] * in2[ 8] + in1[ 4] * in2[ 9] + in1[ 8] * in2[10] + in1[12] * in2[11];
	out[ 9] = in1[ 1] * in2[ 8] + in1[ 5] * in2[ 9] + in1[ 9] * in2[10] + in1[13] * in2[11];
	out[10] = in1[ 2] * in2[ 8] + in1[ 6] * in2[ 9] + in1[10] * in2[10] + in1[14] * in2[11];
	out[11] = in1[ 3] * in2[ 8] + in1[ 7] * in2[ 9] + in1[11] * in2[10] + in1[15] * in2[11];

	out[12] = in1[ 0] * in2[12] + in1[ 4] * in2[13] + in1[ 8] * in2[14] + in1[12] * in2[15];
	out[13] = in1[ 1] * in2[12] + in1[ 5] * in2[13] + in1[ 9] * in2[14] + in1[13] * in2[15];
	out[14] = in1[ 2] * in2[12] + in1[ 6] * in2[13] + in1[10] * in2[14] + in1[14] * in2[15];
	out[15] = in1[ 3] * in2[12] + in1[ 7] * in2[13] + in1[11] * in2[14] + in1[15] * in2[15];
}

void Matrix16Transform( const matrix_t in1, const vec4_t in2, vec4_t out )
{
	out[ 0] = in1[ 0] * in2[ 0] + in1[ 4] * in2[ 1] + in1[ 8] * in2[ 2] + in1[12] * in2[ 3];
	out[ 1] = in1[ 1] * in2[ 0] + in1[ 5] * in2[ 1] + in1[ 9] * in2[ 2] + in1[13] * in2[ 3];
	out[ 2] = in1[ 2] * in2[ 0] + in1[ 6] * in2[ 1] + in1[10] * in2[ 2] + in1[14] * in2[ 3];
	out[ 3] = in1[ 3] * in2[ 0] + in1[ 7] * in2[ 1] + in1[11] * in2[ 2] + in1[15] * in2[ 3];
}

qboolean Matrix16Compare( const matrix_t a, const matrix_t b )
{
	return (a[ 0] == b[ 0] && a[ 4] == b[ 4] && a[ 8] == b[ 8] && a[12] == b[12] &&
            a[ 1] == b[ 1] && a[ 5] == b[ 5] && a[ 9] == b[ 9] && a[13] == b[13] &&
		    a[ 2] == b[ 2] && a[ 6] == b[ 6] && a[10] == b[10] && a[14] == b[14] &&
		    a[ 3] == b[ 3] && a[ 7] == b[ 7] && a[11] == b[11] && a[15] == b[15]);
}

void Matrix16Dump( const matrix_t in )
{
	ri.Printf(PRINT_ALL, "%3.5f %3.5f %3.5f %3.5f\n", in[ 0], in[ 4], in[ 8], in[12]);
	ri.Printf(PRINT_ALL, "%3.5f %3.5f %3.5f %3.5f\n", in[ 1], in[ 5], in[ 9], in[13]);
	ri.Printf(PRINT_ALL, "%3.5f %3.5f %3.5f %3.5f\n", in[ 2], in[ 6], in[10], in[14]);
	ri.Printf(PRINT_ALL, "%3.5f %3.5f %3.5f %3.5f\n", in[ 3], in[ 7], in[11], in[15]);
}

void Matrix16Translation( vec3_t vec, matrix_t out )
{
	out[ 0] = 1.0f; out[ 4] = 0.0f; out[ 8] = 0.0f; out[12] = vec[0];
	out[ 1] = 0.0f; out[ 5] = 1.0f; out[ 9] = 0.0f; out[13] = vec[1];
	out[ 2] = 0.0f; out[ 6] = 0.0f; out[10] = 1.0f; out[14] = vec[2];
	out[ 3] = 0.0f; out[ 7] = 0.0f; out[11] = 0.0f; out[15] = 1.0f;
}

void Matrix16Ortho( float left, float right, float bottom, float top, float znear, float zfar, matrix_t out )
{
	Matrix16Zero(out);
	out[ 0] = 2.0f / (right - left);
	out[ 5] = 2.0f / (top - bottom);
	out[10] = 2.0f / (zfar - znear);
	out[12] = -(right + left) / (right - left);
	out[13] = -(top + bottom) / (top - bottom);
	out[14] = -(zfar + znear)   / (zfar - znear);
	out[15] = 1.0f;
}

void VectorLerp( vec3_t a, vec3_t b, float lerp, vec3_t c)
{
	c[0] = a[0] * (1.0f - lerp) + b[0] * lerp;
	c[1] = a[1] * (1.0f - lerp) + b[1] * lerp;
	c[2] = a[2] * (1.0f - lerp) + b[2] * lerp;
}