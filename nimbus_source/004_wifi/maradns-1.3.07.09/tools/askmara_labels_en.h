/* Placed in the public domain 2001 by Sam Trenholme */

/* All of the labels for replies used in askmara */

#define L_NEWLINE "\n"
#define L_HARD_ERROR "Hard Error: "
#define L_QUERYING "Querying the server with the IP "
#define L_USAGE "Usage: askmara [-n] [-v | -t timeout] Query [server]\n#Example: askmara Ayahoo.com."
#define L_JS_CREATE_INDATA "js_create with indata"
#define L_JS_CREATE_UINDATA "js_create with uindata"
#define L_JS_CREATE_OUTDATA "js_create with outdata"
#define L_JS_CREATE_QNAME "js_create with qname"
#define L_SOCKET "Socket"
#define L_MAL_IP "Malformed IP"
#define L_INVALID_Q "Invalid Query"
#define L_INVALID_DQ "Invalid form of domain query.  Don't forget the trailing dot!"
#define L_UDP_NOSEND "Unable to send UDP packet!"
#define L_DNS_R_ERROR "Problem getting response from DNS server"
#define L_INHEADER_CONV "Problem converting inheader"
#define L_SERVER_REPLY "Server reply: "
#define L_QUERY_ID "Query id: "
#define L_QUERY_TYPE "Query type: "
#define L_OPCODE "Opcode: "
#define L_AUTHORITATIVE "Authoritative: "
#define L_TRUNCATED "Truncated: "
#define L_RD "Recurs desired: "
#define L_RA "Recurs available: "
#define L_Z_DATA "Z data: "
#define L_RC "Result code: "
#define L_QDCOUNT "Num Questions: "
#define L_ANCOUNT "Num Answers: "
#define L_NSCOUNT "Number NS records: "
#define L_ARCOUNT "Number additional records: "
#define L_QERROR "Error reading question"
#define L_QNAME "Question name: "
#define L_QTYPE "Question type: "
#define L_QCLASS "Question class: "
#define L_ANREP "AN replies:"
#define L_NSREP "NS replies:"
#define L_ARREP "AR replies:"
#define L_HNAME_OA "js_create with hname in oa"
#define L_C_MNAME "js_create with soa.mname in oa"
#define L_C_RNAME "js_create with soa.rname in oa"
#define L_C_MXEXC "js_create with mx.exchange in oa"
#define L_RR_ERR "Error reading rr in AN section"
#define L_RNAME "Record name: "
#define L_RTYPE "Record type: "
#define L_RCLASS "Record class: "
#define L_RTTL "Record TTL: "
#define L_RLENGTH "Record length: "
#define L_READSOA "read_soa"
#define L_S_MNAME "SOA mname: "
#define L_S_RNAME "SOA rname: "
#define L_S_SERIAL "SOA serial: "
#define L_S_REFRESH "SOA refresh: "
#define L_S_RETRY "SOA retry: "
#define L_S_EXPIRE "SOA expire: "
#define L_S_MINIMUM "SOA minimum: "
#define L_M_PREF "MX preference: "
#define L_M_EX "MX exchange: "
#define L_DATA "Data: "
#define L_IP "IP: "
#define L_DOT "."
#define L_TXT "Text string: "
#define L_UNSUP "Unsupported data type "
#define L_INVALID_TIMEOUT "Timeout must be 1 second or more"