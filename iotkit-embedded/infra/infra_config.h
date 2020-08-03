#ifndef _INFRA_CONFIG_H_
#define _INFRA_CONFIG_H_

#include "sdkconfig.h"

#define PLATFORM_HAS_STDINT
#define PLATFORM_HAS_DYNMEM
#define PLATFORM_HAS_OS
#define INFRA_STRING
#define INFRA_NET
#define INFRA_LIST
//#define INFRA_LOG_NETWORK_PAYLOAD
#define INFRA_LOG
//#define INFRA_LOG_ALL_MUTED
//#define INFRA_LOG_MUTE_FLW
//#define INFRA_LOG_MUTE_DBG
//#define INFRA_LOG_MUTE_INF
//#define INFRA_LOG_MUTE_WRN
//#define INFRA_LOG_MUTE_ERR
//#define INFRA_LOG_MUTE_CRT
#define INFRA_TIMER
#define INFRA_JSON_PARSER
#define INFRA_CJSON
#define INFRA_MD5
#define INFRA_SHA1
#define INFRA_SHA256
#define INFRA_REPORT
#define INFRA_HTTPC
#define INFRA_COMPAT
#define INFRA_CLASSIC
#define DEV_SIGN
#define MQTT_COMM_ENABLED
#define MQTT_DEFAULT_IMPL
#if CONFIG_MQTT_DIRECT
#define MQTT_DIRECT
#else
#define MQTT_PRE_AUTH
#define INFRA_PREAUTH
#endif
#define DEVICE_MODEL_CLASSIC
//#define LOG_REPORT_TO_CLOUD
#define DEVICE_MODEL_ENABLED
#if CONFIG_DEVICE_MODEL_GATEWAY
#define DEVICE_MODEL_GATEWAY
#endif
#if CONFIG_DEVICE_ALCS_ENABLE
#define ALCS_ENABLED
#endif
#define DEVICE_MODEL_SUBDEV_OTA
#define DEVICE_MODEL_SHADOW
#define HAL_KV
#define SUPPORT_TLS
#if defined(SUPPORT_TLS) && CONFIG_SUPPORT_TCP
#define SUPPORT_TCP
#endif
#define HAL_CRYPTO
#define HAL_UDP
//#define COAP_DTLS_SUPPORT
#define OTA_ENABLED
//#define COAP_COMM_ENABLED
#define COAP_PACKET
#define COAP_CLIENT
#define COAP_SERVER
#define DEV_RESET
#define HTTP_COMM_ENABLED
#define HTTP2_COMM_ENABLED
#define FS_ENABLED
#define AWSS_SUPPORT_APLIST
#define AWSS_SUPPORT_ADHA
#define AWSS_FRAMEWORKS
#define WIFI_PROVISION_ENABLED
#define AWSS_SUPPORT_SMARTCONFIG_WPS
#define AWSS_SUPPORT_SMARTCONFIG
#define AWSS_SUPPORT_ZEROCONFIG
#define AWSS_SUPPORT_AHA
#define AWSS_SUPPORT_DEV_AP
#define DEV_BIND_ENABLED

#endif
