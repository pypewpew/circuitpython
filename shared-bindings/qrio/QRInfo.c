/*
 * This file is part of the CircuitPython project, https://github.com/adafruit/circuitpython
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 Jeff Epler
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "shared-bindings/qrio/__init__.h"
#include "shared-bindings/qrio/QRInfo.h"
#include "py/obj.h"
#include "py/enum.h"

//| class QRInfo:
//|     """Information about a decoded QR code"""
//|
//|     payload: bytes
//|     """The content of the QR code"""
//|
//|     data_type: Union[str, int]
//|     """The encoding of the payload as a string (if a standard encoding) or int (if not standard)"""
//|

const mp_obj_namedtuple_type_t qrio_qrinfo_type_obj = {
    .base = {
        .base = {
            .type = &mp_type_type
        },
        .flags = MP_TYPE_FLAG_EXTENDED,
        .name = MP_QSTR_QRInfo,
        .print = namedtuple_print,
        .parent = &mp_type_tuple,
        .make_new = namedtuple_make_new,
        .attr = namedtuple_attr,
        MP_TYPE_EXTENDED_FIELDS(
            .unary_op = mp_obj_tuple_unary_op,
            .binary_op = mp_obj_tuple_binary_op,
            .subscr = mp_obj_tuple_subscr,
            .getiter = mp_obj_tuple_getiter,
            ),
    },
    .n_fields = 2,
    .fields = {
        MP_QSTR_payload,
        MP_QSTR_data_type,
    },
};

//| class QRPosition:
//|     """Information about a non-decoded QR code"""
//|

const mp_obj_namedtuple_type_t qrio_qrposition_type_obj = {
    .base = {
        .base = {
            .type = &mp_type_type
        },
        .flags = MP_TYPE_FLAG_EXTENDED,
        .name = MP_QSTR_QRPosition,
        .print = namedtuple_print,
        .parent = &mp_type_tuple,
        .make_new = namedtuple_make_new,
        .attr = namedtuple_attr,
        MP_TYPE_EXTENDED_FIELDS(
            .unary_op = mp_obj_tuple_unary_op,
            .binary_op = mp_obj_tuple_binary_op,
            .subscr = mp_obj_tuple_subscr,
            .getiter = mp_obj_tuple_getiter,
            ),
    },
    .n_fields = 9,
    .fields = {
        MP_QSTR_top_left_x,
        MP_QSTR_top_left_y,
        MP_QSTR_top_right_x,
        MP_QSTR_top_right_y,
        MP_QSTR_bottom_right_x,
        MP_QSTR_bottom_right_y,
        MP_QSTR_bottom_left_x,
        MP_QSTR_bottom_left_y,
        MP_QSTR_size,
    },
};
