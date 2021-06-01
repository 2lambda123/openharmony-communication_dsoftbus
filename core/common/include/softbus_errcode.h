/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SOFTBUS_ERROR_CODE_H
#define SOFTBUS_ERROR_CODE_H

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

enum SoftBusErrNo {
    SOFTBUS_PUBLIC_ERR_BASE = (-13000),

    SOFTBUS_FRAMEWORK_ERR_BASE = (-12000),

    SOFTBUS_TRANS_ERR_BASE = (-11000),

    SOFTBUS_TRANS_INVALID_SESSION_NAME,
    SOFTBUS_TRANS_SESSION_REPEATED,
    SOFTBUS_TRANS_SESSION_CNT_EXCEEDS_LIMIT,
    SOFTBUS_TRANS_SESSIONSERVER_NOT_CREATED,
    SOFTBUS_TRANS_SESSION_OPENING,

    SOFTBUS_TRANS_PROXY_PACKMSG_ERR,
    SOFTBUS_TRANS_PROXY_SEND_CHANNELID_INVALID,
    SOFTBUS_TRANS_PROXY_CHANNLE_STATUS_INVALID,
    SOFTBUS_TRANS_PROXY_DEL_CHANNELID_INVALID,
    SOFTBUS_TRANS_PROXY_SESS_ENCRYPT_ERR,

    SOFTBUS_AUTH_ERR_BASE = (-9000),
    SOFTBUS_AUTH_VERIFIED,
    SOFTBUS_AUTH_VERIFYING,

    SOFTBUS_NETWORK_ERR_BASE = (-7000),

    SOFTBUS_CONN_ERR_BASE = (-5000),
    SOFTBUS_CONN_FAIL,
    SOFTBUS_CONN_MANAGER_TYPE_NOT_SUPPORT,
    SOFTBUS_CONN_MANAGER_OP_NOT_SUPPORT,
    SOFTBUS_CONN_MANAGER_PKT_LEN_INVALID,
    SOFTBUS_CONN_MANAGER_LIST_NOT_INIT,
    SOFTBUS_CONNECTION_BASE,
    SOFTBUS_CONNECTION_ERR_CLOSED,
    SOFTBUS_CONNECTION_ERR_DRIVER_CONGEST,
    SOFTBUS_CONNECTION_ERR_SOFTBUS_CONGEST,
    SOFTBUS_CONNECTION_ERR_CONNID_INVALID,
    SOFTBUS_CONNECTION_ERR_SENDQUEUE_FULL,
    SOFTBUS_BRCONNECTION_POSTBYTES_ERROR,
    SOFTBUS_BRCONNECTION_GETCONNINFO_ERROR,
    SOFTBUS_BRCONNECTION_STRNCPY_ERROR,
    SOFTBUS_BRCONNECTION_PACKJSON_ERROR,
    SOFTBUS_BRCONNECTION_CONNECTDEVICE_MALLOCFAIL,
    SOFTBUS_BRCONNECTION_CONNECTDEVICE_GETSOCKETIDFAIL,
    SOFTBUS_BRCONNECTION_DISCONNECT_NOTFIND,
    SOFTBUS_TCPCONNECTION_SOCKET_ERR,

    SOFTBUS_DISCOVER_ERR_BASE = (-3000),

    SOFTBUS_DISCOVER_NOT_INIT,
    SOFTBUS_DISCOVER_INVALID_PKGNAME,
    SOFTBUS_DISCOVER_SERVER_NO_PERMISSION,
    SOFTBUS_DISCOVER_MANAGER_NOT_INIT,
    SOFTBUS_DISCOVER_MANAGER_ITEM_NOT_CREATE,
    SOFTBUS_DISCOVER_MANAGER_INFO_NOT_CREATE,
    SOFTBUS_DISCOVER_MANAGER_INFO_NOT_DELETE,
    SOFTBUS_DISCOVER_MANAGER_INNERFUNCTION_FAIL,
    SOFTBUS_DISCOVER_MANAGER_CAPABILITY_INVALID,
    SOFTBUS_DISCOVER_MANAGER_DUPLICATE_PARAM,
    SOFTBUS_DISCOVER_MANAGER_INVALID_PARAM,
    SOFTBUS_DISCOVER_MANAGER_INVALID_MEDIUM,
    SOFTBUS_DISCOVER_MANAGER_INVALID_PKGNAME,
    SOFTBUS_DISCOVER_MANAGER_INVALID_MODULE,
    SOFTBUS_DISCOVER_COAP_NOT_INIT,
    SOFTBUS_DISCOVER_COAP_INIT_FAIL,
    SOFTBUS_DISCOVER_COAP_MERGE_CAP_FAIL,
    SOFTBUS_DISCOVER_COAP_CANCEL_CAP_FAIL,
    SOFTBUS_DISCOVER_COAP_REGISTER_CAP_FAIL,
    SOFTBUS_DISCOVER_COAP_SET_FILTER_CAP_FAIL,
    SOFTBUS_DISCOVER_COAP_REGISTER_DEVICE_FAIL,
    SOFTBUS_DISCOVER_COAP_START_PUBLISH_FAIL,
    SOFTBUS_DISCOVER_COAP_STOP_PUBLISH_FAIL,
    SOFTBUS_DISCOVER_COAP_START_DISCOVER_FAIL,
    SOFTBUS_DISCOVER_COAP_STOP_DISCOVER_FAIL,

    SOFTBUS_COMMOM_ERR_BASE = (-1000),
    SOFTBUS_TIMOUT,
    SOFTBUS_INVALID_PARAM,
    SOFTBUS_MEM_ERR,
    SOFTBUS_NOT_IMPLEMENT,
    SOFTBUS_NO_URI_QUERY_KEY,
    SOFTBUS_NO_INIT,
    SOFTBUS_PARSE_JSON_ERR,
    SOFTBUS_PERMISSION_DENIED,
    SOFTBUS_MALLOC_ERR,
    SOFTBUS_ENCRYPT_ERR,
    SOFTBUS_DECRYPT_ERR,
    SOFTBUS_INVALID_SESS_OPCODE,
    SOFTBUS_INVALID_NUM,
    SOFTBUS_SERVER_NAME_REPEATED,
    SOFTBUS_TCP_SOCKET_ERR,
    SOFTBUS_LOCK_ERR,
    SOFTBUS_GET_REMOTE_UUID_ERR,
    SOFTBUS_NO_ENOUGH_DATA,
    SOFTBUS_INVALID_DATA_HEAD,
    SOFTBUS_INVALID_FD,
    SOFTBUS_FILE_ERR,

    SOFTBUS_ERR = (-1),
    SOFTBUS_OK = 0,
};

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cplusplus */
#endif /* __cplusplus */
#endif /* SOFTBUS_ERRCODE_H */
