# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: wifi_scan.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import constants_pb2 as constants__pb2
import wifi_constants_pb2 as wifi__constants__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0fwifi_scan.proto\x1a\x0f\x63onstants.proto\x1a\x14wifi_constants.proto\"\\\n\x0c\x43mdScanStart\x12\x10\n\x08\x62locking\x18\x01 \x01(\x08\x12\x0f\n\x07passive\x18\x02 \x01(\x08\x12\x16\n\x0egroup_channels\x18\x03 \x01(\r\x12\x11\n\tperiod_ms\x18\x04 \x01(\r\"\x0f\n\rRespScanStart\"\x0f\n\rCmdScanStatus\"=\n\x0eRespScanStatus\x12\x15\n\rscan_finished\x18\x01 \x01(\x08\x12\x14\n\x0cresult_count\x18\x02 \x01(\r\"3\n\rCmdScanResult\x12\x13\n\x0bstart_index\x18\x01 \x01(\r\x12\r\n\x05\x63ount\x18\x02 \x01(\r\"i\n\x0eWiFiScanResult\x12\x0c\n\x04ssid\x18\x01 \x01(\x0c\x12\x0f\n\x07\x63hannel\x18\x02 \x01(\r\x12\x0c\n\x04rssi\x18\x03 \x01(\x05\x12\r\n\x05\x62ssid\x18\x04 \x01(\x0c\x12\x1b\n\x04\x61uth\x18\x05 \x01(\x0e\x32\r.WifiAuthMode\"2\n\x0eRespScanResult\x12 \n\x07\x65ntries\x18\x01 \x03(\x0b\x32\x0f.WiFiScanResult\"\xd8\x02\n\x0fWiFiScanPayload\x12\x1d\n\x03msg\x18\x01 \x01(\x0e\x32\x10.WiFiScanMsgType\x12\x17\n\x06status\x18\x02 \x01(\x0e\x32\x07.Status\x12\'\n\x0e\x63md_scan_start\x18\n \x01(\x0b\x32\r.CmdScanStartH\x00\x12)\n\x0fresp_scan_start\x18\x0b \x01(\x0b\x32\x0e.RespScanStartH\x00\x12)\n\x0f\x63md_scan_status\x18\x0c \x01(\x0b\x32\x0e.CmdScanStatusH\x00\x12+\n\x10resp_scan_status\x18\r \x01(\x0b\x32\x0f.RespScanStatusH\x00\x12)\n\x0f\x63md_scan_result\x18\x0e \x01(\x0b\x32\x0e.CmdScanResultH\x00\x12+\n\x10resp_scan_result\x18\x0f \x01(\x0b\x32\x0f.RespScanResultH\x00\x42\t\n\x07payload*\x9c\x01\n\x0fWiFiScanMsgType\x12\x14\n\x10TypeCmdScanStart\x10\x00\x12\x15\n\x11TypeRespScanStart\x10\x01\x12\x15\n\x11TypeCmdScanStatus\x10\x02\x12\x16\n\x12TypeRespScanStatus\x10\x03\x12\x15\n\x11TypeCmdScanResult\x10\x04\x12\x16\n\x12TypeRespScanResult\x10\x05\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'wifi_scan_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _WIFISCANMSGTYPE._serialized_start=809
  _WIFISCANMSGTYPE._serialized_end=965
  _CMDSCANSTART._serialized_start=58
  _CMDSCANSTART._serialized_end=150
  _RESPSCANSTART._serialized_start=152
  _RESPSCANSTART._serialized_end=167
  _CMDSCANSTATUS._serialized_start=169
  _CMDSCANSTATUS._serialized_end=184
  _RESPSCANSTATUS._serialized_start=186
  _RESPSCANSTATUS._serialized_end=247
  _CMDSCANRESULT._serialized_start=249
  _CMDSCANRESULT._serialized_end=300
  _WIFISCANRESULT._serialized_start=302
  _WIFISCANRESULT._serialized_end=407
  _RESPSCANRESULT._serialized_start=409
  _RESPSCANRESULT._serialized_end=459
  _WIFISCANPAYLOAD._serialized_start=462
  _WIFISCANPAYLOAD._serialized_end=806
# @@protoc_insertion_point(module_scope)
