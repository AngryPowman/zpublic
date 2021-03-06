/********************************************************************
* @file      : zpublic.hpp
* @author    : zapline <zhuxianzhang@kingsoft.com>
* @date      : 2012/11/15 12:28
* @brief     : all in one
* 
* 
*********************************************************************/

#ifndef _ZPUBLIC_
#define _ZPUBLIC_

#include "basic/basic.hpp"
#include "algorithm/algorithm.hpp"
#include "container/container.hpp"
#include "detail/detail.hpp"
#include "memory/memory.hpp"
#include "crypt/crypt.hpp"
#include "time/time.hpp"

#ifdef _MSC_VER
#include "win/thread/thread.hpp"
#include "win/ptr/ptr.hpp"
#include "win/time/time.hpp"
#include "win/info/info.hpp"
#include "win/encode/encode.hpp"
#include "win/file/file.hpp"

#include "application/application.hpp"
#endif

#endif