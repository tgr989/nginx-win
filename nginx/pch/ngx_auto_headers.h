

#ifndef NGX_WIN32
#define NGX_WIN32  1
#endif

#ifdef NGX_IMPORTS
#define NGX_API __declspec(dllimport)
#else
#define NGX_API 
#endif