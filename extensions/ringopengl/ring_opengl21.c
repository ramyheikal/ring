#include "ring.h"


/*
	OpenGL 2.1 Extension
	Copyright (c) 2017 Mahmoud Fayed <msfclipper@yahoo.com>
*/


#include <GL/glew.h>
#include <GL/glut.h>


RING_FUNC(ring_glAccum)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glAccum( (GLenum )  (int) RING_API_GETNUMBER(1), (GLfloat ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glActiveTexture)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glActiveTexture( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glAlphaFunc)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glAlphaFunc( (GLenum )  (int) RING_API_GETNUMBER(1),* (GLclampf  *) RING_API_GETCPOINTER(2,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		free(RING_API_GETCPOINTER(2,"GLclampf"));
}


RING_FUNC(ring_glAreTexturesResident)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(glAreTexturesResident( (GLsizei )  (int) RING_API_GETNUMBER(1),(GLuint *) RING_API_GETCPOINTER(2,"GLuint"),(GLboolean *) RING_API_GETCPOINTER(3,"GLboolean")));
}


RING_FUNC(ring_glArrayElement)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glArrayElement( (GLint ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glAttachShader)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glAttachShader( (GLuint ) RING_API_GETNUMBER(1), (GLuint ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glBegin)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBegin( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glBeginQuery)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBeginQuery( (GLenum )  (int) RING_API_GETNUMBER(1), (GLuint ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glBindAttribLocation)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBindAttribLocation( (GLuint ) RING_API_GETNUMBER(1), (GLuint ) RING_API_GETNUMBER(2),(GLchar *) RING_API_GETCPOINTER(3,"GLchar"));
}


RING_FUNC(ring_glBindBuffer)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBindBuffer( (GLenum )  (int) RING_API_GETNUMBER(1), (GLuint ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glBindTexture)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBindTexture( (GLenum )  (int) RING_API_GETNUMBER(1), (GLuint ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glBitmap)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBitmap( (GLsizei )  (int) RING_API_GETNUMBER(1), (GLsizei )  (int) RING_API_GETNUMBER(2), (GLfloat ) RING_API_GETNUMBER(3), (GLfloat ) RING_API_GETNUMBER(4), (GLfloat ) RING_API_GETNUMBER(5), (GLfloat ) RING_API_GETNUMBER(6),(GLubyte *) RING_API_GETCPOINTER(7,"GLubyte"));
}


RING_FUNC(ring_glBlendColor)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	glBlendColor(* (GLclampf  *) RING_API_GETCPOINTER(1,"GLclampf"),* (GLclampf  *) RING_API_GETCPOINTER(2,"GLclampf"),* (GLclampf  *) RING_API_GETCPOINTER(3,"GLclampf"),* (GLclampf  *) RING_API_GETCPOINTER(4,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		free(RING_API_GETCPOINTER(1,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		free(RING_API_GETCPOINTER(2,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(3))
		free(RING_API_GETCPOINTER(3,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		free(RING_API_GETCPOINTER(4,"GLclampf"));
}


RING_FUNC(ring_glBlendEquation)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBlendEquation( (GLenum )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glBlendEquationSeparate)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBlendEquationSeparate( (GLenum )  (int) RING_API_GETNUMBER(1), (GLenum )  (int) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glBlendFunc)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBlendFunc( (GLenum )  (int) RING_API_GETNUMBER(1), (GLenum )  (int) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_glBlendFuncSeparate)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBlendFuncSeparate( (GLenum )  (int) RING_API_GETNUMBER(1), (GLenum )  (int) RING_API_GETNUMBER(2), (GLenum )  (int) RING_API_GETNUMBER(3), (GLenum )  (int) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glBufferData)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBufferData( (GLenum )  (int) RING_API_GETNUMBER(1), (GLsizeiptr ) RING_API_GETNUMBER(2),(GLvoid *) RING_API_GETCPOINTER(3,"GLvoid"), (GLenum )  (int) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glBufferSubData)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glBufferSubData( (GLenum )  (int) RING_API_GETNUMBER(1), (GLintptr ) RING_API_GETNUMBER(2), (GLsizeiptr ) RING_API_GETNUMBER(3),(GLvoid *) RING_API_GETCPOINTER(4,"GLvoid"));
}


RING_FUNC(ring_glCallList)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCallList( (GLuint ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glCallLists)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glCallLists( (GLsizei )  (int) RING_API_GETNUMBER(1), (GLenum )  (int) RING_API_GETNUMBER(2),(GLvoid *) RING_API_GETCPOINTER(3,"GLvoid"));
}


RING_FUNC(ring_glClear)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClear( (GLbitfield )  (int) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_glClearAccum)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	glClearAccum( (GLfloat ) RING_API_GETNUMBER(1), (GLfloat ) RING_API_GETNUMBER(2), (GLfloat ) RING_API_GETNUMBER(3), (GLfloat ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_glClearColor)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	glClearColor(* (GLclampf  *) RING_API_GETCPOINTER(1,"GLclampf"),* (GLclampf  *) RING_API_GETCPOINTER(2,"GLclampf"),* (GLclampf  *) RING_API_GETCPOINTER(3,"GLclampf"),* (GLclampf  *) RING_API_GETCPOINTER(4,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		free(RING_API_GETCPOINTER(1,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		free(RING_API_GETCPOINTER(2,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(3))
		free(RING_API_GETCPOINTER(3,"GLclampf"));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		free(RING_API_GETCPOINTER(4,"GLclampf"));
}


RING_FUNC(ring_glClearDepth)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	glClearDepth(* (GLclampd  *) RING_API_GETCPOINTER(1,"GLclampd"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		free(RING_API_GETCPOINTER(1,"GLclampd"));
}

RING_API void ringlib_init(RingState *pRingState)
{
	ring_vm_funcregister("glaccum",ring_glAccum);
	ring_vm_funcregister("glactivetexture",ring_glActiveTexture);
	ring_vm_funcregister("glalphafunc",ring_glAlphaFunc);
	ring_vm_funcregister("glaretexturesresident",ring_glAreTexturesResident);
	ring_vm_funcregister("glarrayelement",ring_glArrayElement);
	ring_vm_funcregister("glattachshader",ring_glAttachShader);
	ring_vm_funcregister("glbegin",ring_glBegin);
	ring_vm_funcregister("glbeginquery",ring_glBeginQuery);
	ring_vm_funcregister("glbindattriblocation",ring_glBindAttribLocation);
	ring_vm_funcregister("glbindbuffer",ring_glBindBuffer);
	ring_vm_funcregister("glbindtexture",ring_glBindTexture);
	ring_vm_funcregister("glbitmap",ring_glBitmap);
	ring_vm_funcregister("glblendcolor",ring_glBlendColor);
	ring_vm_funcregister("glblendequation",ring_glBlendEquation);
	ring_vm_funcregister("glblendequationseparate",ring_glBlendEquationSeparate);
	ring_vm_funcregister("glblendfunc",ring_glBlendFunc);
	ring_vm_funcregister("glblendfuncseparate",ring_glBlendFuncSeparate);
	ring_vm_funcregister("glbufferdata",ring_glBufferData);
	ring_vm_funcregister("glbuffersubdata",ring_glBufferSubData);
	ring_vm_funcregister("glcalllist",ring_glCallList);
	ring_vm_funcregister("glcalllists",ring_glCallLists);
	ring_vm_funcregister("glclear",ring_glClear);
	ring_vm_funcregister("glclearaccum",ring_glClearAccum);
	ring_vm_funcregister("glclearcolor",ring_glClearColor);
	ring_vm_funcregister("glcleardepth",ring_glClearDepth);
}
