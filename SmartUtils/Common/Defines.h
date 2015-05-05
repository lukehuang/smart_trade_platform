//============================================================================
// Name        : Defines.h
// Author      : TheRockLiuHY
// Date        : Apr 29, 2015
// Copyright   : liuhongyang's copyright
// Description : SmartUtils
//============================================================================

#ifndef UTILS_DEFINES_H_
#define UTILS_DEFINES_H_

#include <cassert> ///for c++ assert

#ifdef NDEBUG
#define ST_ASSERT(expr) assert(expr) ///to do ...
#else
#define ST_ASSERT(expr) assert(expr)
#endif

#define DISABLE_CONSTRUCT_AND_DESTRUCT(class_name) \
	class_name () = delete; \
	~class_name () = delete;

#define DISABLE_COPY(class_name) \
	class_name ( class_name &) = delete; \
	class_name & operator= (class_name & ) = delete;

#define DISABLE_MOVE(class_name) \
	class_name ( class_name && ) = delete; \
	class_name & operator= ( class_name && ) = delete;

#endif /* UTILS_DEFINES_H_ */