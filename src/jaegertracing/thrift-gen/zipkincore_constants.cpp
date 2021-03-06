/**
 * MODIFIED from code autogenerated by Thrift Compiler (0.9.2)
 *
 * WARNING WARNING WARNING
 * This file has been hand-patched. See
 * https://github.com/jaegertracing/jaeger-client-cpp/issues/45.
 */
#include "zipkincore_constants.h"

namespace twitter {
namespace zipkin {
namespace thrift {

const zipkincoreConstants g_zipkincore_constants;

zipkincoreConstants::zipkincoreConstants()
{
    CLIENT_SEND = "cs";

    CLIENT_RECV = "cr";

    SERVER_SEND = "ss";

    SERVER_RECV = "sr";

    WIRE_SEND = "ws";

    WIRE_RECV = "wr";

    CLIENT_SEND_FRAGMENT = "csf";

    CLIENT_RECV_FRAGMENT = "crf";

    SERVER_SEND_FRAGMENT = "ssf";

    SERVER_RECV_FRAGMENT = "srf";

    LOCAL_COMPONENT = "lc";

    CLIENT_ADDR = "ca";

    SERVER_ADDR = "sa";
}

}  // namespace thrift
}  // namespace zipkin
}  // namespace twitter

