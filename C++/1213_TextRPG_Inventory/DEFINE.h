#pragma once


#ifndef __DEFINE_H__
#define __DEFINE_H__
#define SAFE_DELETE(ptr) {if(ptr != nullptr); delete(ptr); ptr = nullptr;}
#endif // !1
