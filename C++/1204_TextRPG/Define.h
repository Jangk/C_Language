#pragma once
#ifndef __DEFINE_H__

#define SAFE_DELETE(ptr) {delete(ptr); ptr = nullptr;}

#define __DEFINE_H__
#endif