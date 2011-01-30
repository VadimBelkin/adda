/* File: oclgetdev.h
 * $Author: yurkin $
 * $Date:: 2010-09-30 19:52:58 +0200 #$
 * Descr: function to get an OpenCL device
 *
 * Copyright (C) 2006-2008 University of Amsterdam
 * Copyright (C) 2009,2010 Institute of Chemical Kinetics and Combustion & University of Amsterdam
 * This file is part of ADDA.
 *
 * ADDA is free software: you can redistribute it and/or modify it under the terms of the GNU
 * General Public License as published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * ADDA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with ADDA. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef __oclgetdev_h
#define __oclgetdev_h
cl_int GetDevice(cl_platform_id *used_platform_id ,cl_device_id *device_id ,cl_int devtype);
#endif