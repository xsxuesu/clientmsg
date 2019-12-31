/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package clientmsg */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */


#line 2 "clientmsg.go"
 #include "bridge.h"

#line 1 "cgo-generated-wrapper"


/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt32 GoInt;
typedef GoUint32 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_32_bit_pointer_matching_GoInt[sizeof(void*)==32/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


extern void SetSyncReturnBack(ptfFuncCallBack p0); ///// 设置同步消息回调函数

extern void SetAsyncReturnBack(ptfFuncCallBack p0);    ////设置异步消息回调函数

extern void SetAnswerBack(ptfFuncCall p0);             ////异步消息回应，回调函数


extern void Run();                           //// 启动服务

extern CallReturnInfo Register(GoSlice p0);  ////注册服务  功能号

extern CallReturnInfo Publish(GoSlice p0);   ////发布服务  服务id

extern CallReturnInfo Subscribe(GoSlice p0); ////订阅服务  服务id

extern CallReturnInfo Broadcast(GoSlice p0, GoSlice p1, BodyInfo p2);   ///广播消息，  消息body,服务id,消息配置信息


////////body bytes  ////send info
extern GoSlice Sync(GoSlice p0, BodyInfo p1);       ////同步发送消息

extern GoSlice Async(GoSlice p0, BodyInfo p1);      ////异步发送消息

#ifdef __cplusplus
}
#endif