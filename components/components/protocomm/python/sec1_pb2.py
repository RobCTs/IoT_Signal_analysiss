# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sec1.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import constants_pb2 as constants__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\nsec1.proto\x1a\x0f\x63onstants.proto\")\n\x0bSessionCmd1\x12\x1a\n\x12\x63lient_verify_data\x18\x02 \x01(\x0c\"C\n\x0cSessionResp1\x12\x17\n\x06status\x18\x01 \x01(\x0e\x32\x07.Status\x12\x1a\n\x12\x64\x65vice_verify_data\x18\x03 \x01(\x0c\"$\n\x0bSessionCmd0\x12\x15\n\rclient_pubkey\x18\x01 \x01(\x0c\"U\n\x0cSessionResp0\x12\x17\n\x06status\x18\x01 \x01(\x0e\x32\x07.Status\x12\x15\n\rdevice_pubkey\x18\x02 \x01(\x0c\x12\x15\n\rdevice_random\x18\x03 \x01(\x0c\"\xa9\x01\n\x0bSec1Payload\x12\x19\n\x03msg\x18\x01 \x01(\x0e\x32\x0c.Sec1MsgType\x12\x1b\n\x03sc0\x18\x14 \x01(\x0b\x32\x0c.SessionCmd0H\x00\x12\x1c\n\x03sr0\x18\x15 \x01(\x0b\x32\r.SessionResp0H\x00\x12\x1b\n\x03sc1\x18\x16 \x01(\x0b\x32\x0c.SessionCmd1H\x00\x12\x1c\n\x03sr1\x18\x17 \x01(\x0b\x32\r.SessionResp1H\x00\x42\t\n\x07payload*g\n\x0bSec1MsgType\x12\x14\n\x10Session_Command0\x10\x00\x12\x15\n\x11Session_Response0\x10\x01\x12\x14\n\x10Session_Command1\x10\x02\x12\x15\n\x11Session_Response1\x10\x03\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'sec1_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _SEC1MSGTYPE._serialized_start=440
  _SEC1MSGTYPE._serialized_end=543
  _SESSIONCMD1._serialized_start=31
  _SESSIONCMD1._serialized_end=72
  _SESSIONRESP1._serialized_start=74
  _SESSIONRESP1._serialized_end=141
  _SESSIONCMD0._serialized_start=143
  _SESSIONCMD0._serialized_end=179
  _SESSIONRESP0._serialized_start=181
  _SESSIONRESP0._serialized_end=266
  _SEC1PAYLOAD._serialized_start=269
  _SEC1PAYLOAD._serialized_end=438
# @@protoc_insertion_point(module_scope)
