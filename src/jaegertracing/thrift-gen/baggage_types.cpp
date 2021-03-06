/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "baggage_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace jaegertracing { namespace thrift {


BaggageRestriction::~BaggageRestriction() throw() {
}


void BaggageRestriction::__set_baggageKey(const std::string& val) {
  this->baggageKey = val;
}

void BaggageRestriction::__set_maxValueLength(const int32_t val) {
  this->maxValueLength = val;
}

const char* BaggageRestriction::ascii_fingerprint = "EEBC915CE44901401D881E6091423036";
const uint8_t BaggageRestriction::binary_fingerprint[16] = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};

uint32_t BaggageRestriction::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_baggageKey = false;
  bool isset_maxValueLength = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->baggageKey);
          isset_baggageKey = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->maxValueLength);
          isset_maxValueLength = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_baggageKey)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_maxValueLength)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t BaggageRestriction::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("BaggageRestriction");

  xfer += oprot->writeFieldBegin("baggageKey", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->baggageKey);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("maxValueLength", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->maxValueLength);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(BaggageRestriction &a, BaggageRestriction &b) {
  using ::std::swap;
  swap(a.baggageKey, b.baggageKey);
  swap(a.maxValueLength, b.maxValueLength);
}

BaggageRestriction::BaggageRestriction(const BaggageRestriction& other0) {
  baggageKey = other0.baggageKey;
  maxValueLength = other0.maxValueLength;
}
BaggageRestriction& BaggageRestriction::operator=(const BaggageRestriction& other1) {
  baggageKey = other1.baggageKey;
  maxValueLength = other1.maxValueLength;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const BaggageRestriction& obj) {
  using apache::thrift::to_string;
  out << "BaggageRestriction(";
  out << "baggageKey=" << to_string(obj.baggageKey);
  out << ", " << "maxValueLength=" << to_string(obj.maxValueLength);
  out << ")";
  return out;
}

}} // namespace
