/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(reed_solomon_dec_isdbt.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a1444d988ea18ca6ce09375056c87758)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/isdbt/reed_solomon_dec_isdbt.h>
// pydoc.h is automatically generated in the build directory
#include <reed_solomon_dec_isdbt_pydoc.h>

void bind_reed_solomon_dec_isdbt(py::module& m)
{

    using reed_solomon_dec_isdbt    = ::gr::isdbt::reed_solomon_dec_isdbt;


    py::class_<reed_solomon_dec_isdbt, gr::block, gr::basic_block,
        std::shared_ptr<reed_solomon_dec_isdbt>>(m, "reed_solomon_dec_isdbt", D(reed_solomon_dec_isdbt))

        .def(py::init(&reed_solomon_dec_isdbt::make),
           D(reed_solomon_dec_isdbt,make)
        )
        



        ;




}








