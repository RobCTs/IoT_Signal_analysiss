/**
 * This file was generated by Apache newt version: 1.11.0-dev
 */

#ifndef H_MYNEWT_SYSCFG_
#define H_MYNEWT_SYSCFG_

/**
 * This macro exists to ensure code includes this header when needed.  If code
 * checks the existence of a setting directly via ifdef without including this
 * header, the setting macro will silently evaluate to 0.  In contrast, an
 * attempt to use these macros without including this header will result in a
 * compiler error.
 */
#define MYNEWT_VAL(_name)                       MYNEWT_VAL_ ## _name
#define MYNEWT_VAL_CHOICE(_name, _val)          MYNEWT_VAL_ ## _name ## __ ## _val

#ifndef MYNEWT_VAL_TINYCRYPT_SYSINIT_STAGE
#define MYNEWT_VAL_TINYCRYPT_SYSINIT_STAGE (200)
#endif

#ifndef MYNEWT_VAL_TINYCRYPT_UECC_RNG_TRNG_DEV_NAME
#define MYNEWT_VAL_TINYCRYPT_UECC_RNG_TRNG_DEV_NAME "trng"
#endif

#ifndef MYNEWT_VAL_TINYCRYPT_UECC_RNG_USE_TRNG
#define MYNEWT_VAL_TINYCRYPT_UECC_RNG_USE_TRNG (0)
#endif

/*** @apache-mynewt-core/hw/bsp/native */
#ifndef MYNEWT_VAL_BSP_SIMULATED
#define MYNEWT_VAL_BSP_SIMULATED (1)
#endif

/*** @apache-mynewt-core/hw/hal */
#ifndef MYNEWT_VAL_HAL_ENABLE_SOFTWARE_BREAKPOINTS
#define MYNEWT_VAL_HAL_ENABLE_SOFTWARE_BREAKPOINTS (1)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_MAX_DEVICE_COUNT
#define MYNEWT_VAL_HAL_FLASH_MAX_DEVICE_COUNT (0)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_BUF_SZ
#define MYNEWT_VAL_HAL_FLASH_VERIFY_BUF_SZ (16)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_ERASES
#define MYNEWT_VAL_HAL_FLASH_VERIFY_ERASES (0)
#endif

#ifndef MYNEWT_VAL_HAL_FLASH_VERIFY_WRITES
#define MYNEWT_VAL_HAL_FLASH_VERIFY_WRITES (0)
#endif

#ifndef MYNEWT_VAL_HAL_SBRK
#define MYNEWT_VAL_HAL_SBRK (1)
#endif

#ifndef MYNEWT_VAL_HAL_SYSTEM_RESET_CB
#define MYNEWT_VAL_HAL_SYSTEM_RESET_CB (0)
#endif

/*** @apache-mynewt-core/hw/mcu/native */
#ifndef MYNEWT_VAL_I2C_0
#define MYNEWT_VAL_I2C_0 (0)
#endif

#ifndef MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE
#define MYNEWT_VAL_MCU_FLASH_MIN_WRITE_SIZE (1)
#endif

#ifndef MYNEWT_VAL_MCU_FLASH_STYLE_NORDIC
#define MYNEWT_VAL_MCU_FLASH_STYLE_NORDIC (0)
#endif

#ifndef MYNEWT_VAL_MCU_FLASH_STYLE_ST
#define MYNEWT_VAL_MCU_FLASH_STYLE_ST (1)
#endif

#ifndef MYNEWT_VAL_MCU_NATIVE
#define MYNEWT_VAL_MCU_NATIVE (1)
#endif

#ifndef MYNEWT_VAL_MCU_NATIVE_USE_SIGNALS
#define MYNEWT_VAL_MCU_NATIVE_USE_SIGNALS (1)
#endif

#ifndef MYNEWT_VAL_MCU_TIMER_POLLER_PRIO
#define MYNEWT_VAL_MCU_TIMER_POLLER_PRIO (0)
#endif

#ifndef MYNEWT_VAL_MCU_UART_POLLER_PRIO
#define MYNEWT_VAL_MCU_UART_POLLER_PRIO (1)
#endif

/*** @apache-mynewt-core/kernel/os */
#ifndef MYNEWT_VAL_FLOAT_USER
#define MYNEWT_VAL_FLOAT_USER (0)
#endif

#ifndef MYNEWT_VAL_MSYS_1_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_1_BLOCK_COUNT (12)
#endif

#ifndef MYNEWT_VAL_MSYS_1_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_1_BLOCK_SIZE (292)
#endif

#ifndef MYNEWT_VAL_MSYS_1_SANITY_MIN_COUNT
#define MYNEWT_VAL_MSYS_1_SANITY_MIN_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_COUNT
#define MYNEWT_VAL_MSYS_2_BLOCK_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_BLOCK_SIZE
#define MYNEWT_VAL_MSYS_2_BLOCK_SIZE (0)
#endif

#ifndef MYNEWT_VAL_MSYS_2_SANITY_MIN_COUNT
#define MYNEWT_VAL_MSYS_2_SANITY_MIN_COUNT (0)
#endif

#ifndef MYNEWT_VAL_MSYS_SANITY_TIMEOUT
#define MYNEWT_VAL_MSYS_SANITY_TIMEOUT (60000)
#endif

#ifndef MYNEWT_VAL_OS_ASSERT_CB
#define MYNEWT_VAL_OS_ASSERT_CB (0)
#endif

#ifndef MYNEWT_VAL_OS_CLI
#define MYNEWT_VAL_OS_CLI (0)
#endif

#ifndef MYNEWT_VAL_OS_COREDUMP
#define MYNEWT_VAL_OS_COREDUMP (0)
#endif

#ifndef MYNEWT_VAL_OS_COREDUMP_CB
#define MYNEWT_VAL_OS_COREDUMP_CB (0)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_FREQ
#define MYNEWT_VAL_OS_CPUTIME_FREQ (1000000)
#endif

#ifndef MYNEWT_VAL_OS_CPUTIME_TIMER_NUM
#define MYNEWT_VAL_OS_CPUTIME_TIMER_NUM (0)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/native (defined by @apache-mynewt-core/kernel/os) */
#ifndef MYNEWT_VAL_OS_CRASH_FILE_LINE
#define MYNEWT_VAL_OS_CRASH_FILE_LINE (1)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_LOG
#define MYNEWT_VAL_OS_CRASH_LOG (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_RESTORE_REGS
#define MYNEWT_VAL_OS_CRASH_RESTORE_REGS (0)
#endif

#ifndef MYNEWT_VAL_OS_CRASH_STACKTRACE
#define MYNEWT_VAL_OS_CRASH_STACKTRACE (0)
#endif

#ifndef MYNEWT_VAL_OS_CTX_SW_STACK_CHECK
#define MYNEWT_VAL_OS_CTX_SW_STACK_CHECK (0)
#endif

#ifndef MYNEWT_VAL_OS_CTX_SW_STACK_GUARD
#define MYNEWT_VAL_OS_CTX_SW_STACK_GUARD (4)
#endif

#ifndef MYNEWT_VAL_OS_DEBUG_MODE
#define MYNEWT_VAL_OS_DEBUG_MODE (0)
#endif

#ifndef MYNEWT_VAL_OS_EVENTQ_DEBUG
#define MYNEWT_VAL_OS_EVENTQ_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_OS_EVENTQ_MONITOR
#define MYNEWT_VAL_OS_EVENTQ_MONITOR (0)
#endif

#ifndef MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MAX
#define MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MAX (600000)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/native (defined by @apache-mynewt-core/kernel/os) */
#ifndef MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MIN
#define MYNEWT_VAL_OS_IDLE_TICKLESS_MS_MIN (1)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_STACK_SIZE
#define MYNEWT_VAL_OS_MAIN_STACK_SIZE (1024)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_TASK_PRIO
#define MYNEWT_VAL_OS_MAIN_TASK_PRIO (127)
#endif

#ifndef MYNEWT_VAL_OS_MAIN_TASK_SANITY_ITVL_MS
#define MYNEWT_VAL_OS_MAIN_TASK_SANITY_ITVL_MS (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_CHECK
#define MYNEWT_VAL_OS_MEMPOOL_CHECK (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_GUARD
#define MYNEWT_VAL_OS_MEMPOOL_GUARD (0)
#endif

#ifndef MYNEWT_VAL_OS_MEMPOOL_POISON
#define MYNEWT_VAL_OS_MEMPOOL_POISON (0)
#endif

#ifndef MYNEWT_VAL_OS_SCHEDULING
#define MYNEWT_VAL_OS_SCHEDULING (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSINIT_STAGE
#define MYNEWT_VAL_OS_SYSINIT_STAGE (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW
#define MYNEWT_VAL_OS_SYSVIEW (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_CALLOUT
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_CALLOUT (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_EVENTQ
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_EVENTQ (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MBUF
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MBUF (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MEMPOOL
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MEMPOOL (0)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_MUTEX
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_MUTEX (1)
#endif

#ifndef MYNEWT_VAL_OS_SYSVIEW_TRACE_SEM
#define MYNEWT_VAL_OS_SYSVIEW_TRACE_SEM (1)
#endif

#ifndef MYNEWT_VAL_OS_TASK_RUN_TIME_CPUTIME
#define MYNEWT_VAL_OS_TASK_RUN_TIME_CPUTIME (0)
#endif

/* Overridden by @apache-mynewt-core/hw/mcu/native (defined by @apache-mynewt-core/kernel/os) */
#ifndef MYNEWT_VAL_OS_TICKS_PER_SEC
#define MYNEWT_VAL_OS_TICKS_PER_SEC (100)
#endif

#ifndef MYNEWT_VAL_OS_TIME_DEBUG
#define MYNEWT_VAL_OS_TIME_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_OS_WATCHDOG_MONITOR
#define MYNEWT_VAL_OS_WATCHDOG_MONITOR (0)
#endif

#ifndef MYNEWT_VAL_SANITY_INTERVAL
#define MYNEWT_VAL_SANITY_INTERVAL (15000)
#endif

#ifndef MYNEWT_VAL_WATCHDOG_INTERVAL
#define MYNEWT_VAL_WATCHDOG_INTERVAL (30000)
#endif

/*** @apache-mynewt-core/net/ip/native_sockets */
#ifndef MYNEWT_VAL_NATIVE_SOCKETS_MAX
#define MYNEWT_VAL_NATIVE_SOCKETS_MAX (8)
#endif

#ifndef MYNEWT_VAL_NATIVE_SOCKETS_MAX_UDP
#define MYNEWT_VAL_NATIVE_SOCKETS_MAX_UDP (2048)
#endif

#ifndef MYNEWT_VAL_NATIVE_SOCKETS_POLL_INTERVAL_MS
#define MYNEWT_VAL_NATIVE_SOCKETS_POLL_INTERVAL_MS (200)
#endif

#undef MYNEWT_VAL_NATIVE_SOCKETS_POLL_ITVL

#ifndef MYNEWT_VAL_NATIVE_SOCKETS_PRIO
#define MYNEWT_VAL_NATIVE_SOCKETS_PRIO (2)
#endif

#ifndef MYNEWT_VAL_NATIVE_SOCKETS_STACK_SZ
#define MYNEWT_VAL_NATIVE_SOCKETS_STACK_SZ (4096)
#endif

#ifndef MYNEWT_VAL_NATIVE_SOCKETS_SYSINIT_STAGE
#define MYNEWT_VAL_NATIVE_SOCKETS_SYSINIT_STAGE (200)
#endif

/*** @apache-mynewt-core/sys/console/stub */
#ifndef MYNEWT_VAL_CONSOLE_UART_BAUD
#define MYNEWT_VAL_CONSOLE_UART_BAUD (115200)
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_DEV
#define MYNEWT_VAL_CONSOLE_UART_DEV "uart0"
#endif

#ifndef MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL
#define MYNEWT_VAL_CONSOLE_UART_FLOW_CONTROL (UART_FLOW_CTL_NONE)
#endif

/*** @apache-mynewt-core/sys/flash_map */
#ifndef MYNEWT_VAL_FLASH_MAP_MAX_AREAS
#define MYNEWT_VAL_FLASH_MAP_MAX_AREAS (10)
#endif

#ifndef MYNEWT_VAL_FLASH_MAP_SUPPORT_MFG
#define MYNEWT_VAL_FLASH_MAP_SUPPORT_MFG (0)
#endif

#ifndef MYNEWT_VAL_FLASH_MAP_SYSINIT_STAGE
#define MYNEWT_VAL_FLASH_MAP_SYSINIT_STAGE (9)
#endif

/*** @apache-mynewt-core/sys/log/common */
#ifndef MYNEWT_VAL_DFLT_LOG_LVL
#define MYNEWT_VAL_DFLT_LOG_LVL (1)
#endif

#ifndef MYNEWT_VAL_DFLT_LOG_MOD
#define MYNEWT_VAL_DFLT_LOG_MOD (0)
#endif

#ifndef MYNEWT_VAL_LOG_GLOBAL_IDX
#define MYNEWT_VAL_LOG_GLOBAL_IDX (1)
#endif

/*** @apache-mynewt-core/sys/log/modlog */
#ifndef MYNEWT_VAL_MODLOG_CONSOLE_DFLT
#define MYNEWT_VAL_MODLOG_CONSOLE_DFLT (1)
#endif

#ifndef MYNEWT_VAL_MODLOG_LOG_MACROS
#define MYNEWT_VAL_MODLOG_LOG_MACROS (0)
#endif

#ifndef MYNEWT_VAL_MODLOG_MAX_MAPPINGS
#define MYNEWT_VAL_MODLOG_MAX_MAPPINGS (16)
#endif

#ifndef MYNEWT_VAL_MODLOG_MAX_PRINTF_LEN
#define MYNEWT_VAL_MODLOG_MAX_PRINTF_LEN (128)
#endif

#ifndef MYNEWT_VAL_MODLOG_SYSINIT_STAGE
#define MYNEWT_VAL_MODLOG_SYSINIT_STAGE (100)
#endif

/*** @apache-mynewt-core/sys/log/stub */
#ifndef MYNEWT_VAL_LOG_CONSOLE
#define MYNEWT_VAL_LOG_CONSOLE (1)
#endif

#ifndef MYNEWT_VAL_LOG_FCB
#define MYNEWT_VAL_LOG_FCB (0)
#endif

#ifndef MYNEWT_VAL_LOG_FCB_SLOT1
#define MYNEWT_VAL_LOG_FCB_SLOT1 (0)
#endif

/* Overridden by @apache-mynewt-nimble/porting/targets/nuttx (defined by @apache-mynewt-core/sys/log/stub) */
#ifndef MYNEWT_VAL_LOG_LEVEL
#define MYNEWT_VAL_LOG_LEVEL (2)
#endif

/*** @apache-mynewt-core/sys/sys */
#ifndef MYNEWT_VAL_DEBUG_PANIC_ENABLED
#define MYNEWT_VAL_DEBUG_PANIC_ENABLED (1)
#endif

/*** @apache-mynewt-core/sys/sysdown */
#ifndef MYNEWT_VAL_SYSDOWN_CONSTRAIN_DOWN
#define MYNEWT_VAL_SYSDOWN_CONSTRAIN_DOWN (1)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_PANIC_FILE_LINE
#define MYNEWT_VAL_SYSDOWN_PANIC_FILE_LINE (0)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_PANIC_MESSAGE
#define MYNEWT_VAL_SYSDOWN_PANIC_MESSAGE (0)
#endif

#ifndef MYNEWT_VAL_SYSDOWN_TIMEOUT_MS
#define MYNEWT_VAL_SYSDOWN_TIMEOUT_MS (10000)
#endif

/*** @apache-mynewt-core/sys/sysinit */
#ifndef MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT
#define MYNEWT_VAL_SYSINIT_CONSTRAIN_INIT (1)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/native (defined by @apache-mynewt-core/sys/sysinit) */
#ifndef MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE
#define MYNEWT_VAL_SYSINIT_PANIC_FILE_LINE (1)
#endif

/* Overridden by @apache-mynewt-core/hw/bsp/native (defined by @apache-mynewt-core/sys/sysinit) */
#ifndef MYNEWT_VAL_SYSINIT_PANIC_MESSAGE
#define MYNEWT_VAL_SYSINIT_PANIC_MESSAGE (1)
#endif

/*** @apache-mynewt-core/util/rwlock */
#ifndef MYNEWT_VAL_RWLOCK_DEBUG
#define MYNEWT_VAL_RWLOCK_DEBUG (0)
#endif

/*** @apache-mynewt-nimble/nimble */
#ifndef MYNEWT_VAL_BLE_CONN_SUBRATING
#define MYNEWT_VAL_BLE_CONN_SUBRATING (0)
#endif

#ifndef MYNEWT_VAL_BLE_EXT_ADV
#define MYNEWT_VAL_BLE_EXT_ADV (0)
#endif

#ifndef MYNEWT_VAL_BLE_EXT_ADV_MAX_SIZE
#define MYNEWT_VAL_BLE_EXT_ADV_MAX_SIZE (31)
#endif

#ifndef MYNEWT_VAL_ENC_ADV_DATA
#define MYNEWT_VAL_ENC_ADV_DATA (0)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_VS
#define MYNEWT_VAL_BLE_HCI_VS (0)
#endif

#ifndef MYNEWT_VAL_BLE_HCI_VS_OCF_OFFSET
#define MYNEWT_VAL_BLE_HCI_VS_OCF_OFFSET (0)
#endif

#ifndef MYNEWT_VAL_BLE_ISO
#define MYNEWT_VAL_BLE_ISO (0)
#endif

#ifndef MYNEWT_VAL_BLE_ISO_TEST
#define MYNEWT_VAL_BLE_ISO_TEST (0)
#endif

#ifndef MYNEWT_VAL_BLE_MAX_CONNECTIONS
#define MYNEWT_VAL_BLE_MAX_CONNECTIONS (1)
#endif

#ifndef MYNEWT_VAL_BLE_MAX_PERIODIC_SYNCS
#define MYNEWT_VAL_BLE_MAX_PERIODIC_SYNCS (1)
#endif

#ifndef MYNEWT_VAL_BLE_MULTI_ADV_INSTANCES
#define MYNEWT_VAL_BLE_MULTI_ADV_INSTANCES (0)
#endif

#ifndef MYNEWT_VAL_BLE_PERIODIC_ADV
#define MYNEWT_VAL_BLE_PERIODIC_ADV (0)
#endif

#ifndef MYNEWT_VAL_BLE_PERIODIC_ADV_SYNC_TRANSFER
#define MYNEWT_VAL_BLE_PERIODIC_ADV_SYNC_TRANSFER (0)
#endif

#ifndef MYNEWT_VAL_BLE_POWER_CONTROL
#define MYNEWT_VAL_BLE_POWER_CONTROL (0)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_BROADCASTER
#define MYNEWT_VAL_BLE_ROLE_BROADCASTER (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_CENTRAL
#define MYNEWT_VAL_BLE_ROLE_CENTRAL (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_OBSERVER
#define MYNEWT_VAL_BLE_ROLE_OBSERVER (1)
#endif

#ifndef MYNEWT_VAL_BLE_ROLE_PERIPHERAL
#define MYNEWT_VAL_BLE_ROLE_PERIPHERAL (1)
#endif

#ifndef MYNEWT_VAL_BLE_VERSION
#define MYNEWT_VAL_BLE_VERSION (50)
#endif

#ifndef MYNEWT_VAL_BLE_WHITELIST
#define MYNEWT_VAL_BLE_WHITELIST (1)
#endif

/*** @apache-mynewt-nimble/nimble/host */
#ifndef MYNEWT_VAL_BLE_ATT_PREFERRED_MTU
#define MYNEWT_VAL_BLE_ATT_PREFERRED_MTU (256)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_FIND_INFO
#define MYNEWT_VAL_BLE_ATT_SVR_FIND_INFO (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_FIND_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_FIND_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_INDICATE
#define MYNEWT_VAL_BLE_ATT_SVR_INDICATE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_MAX_PREP_ENTRIES
#define MYNEWT_VAL_BLE_ATT_SVR_MAX_PREP_ENTRIES (64)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_NOTIFY
#define MYNEWT_VAL_BLE_ATT_SVR_NOTIFY (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE_TMO
#define MYNEWT_VAL_BLE_ATT_SVR_QUEUED_WRITE_TMO (30000)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ
#define MYNEWT_VAL_BLE_ATT_SVR_READ (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_BLOB
#define MYNEWT_VAL_BLE_ATT_SVR_READ_BLOB (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_GROUP_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_READ_GROUP_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_MULT
#define MYNEWT_VAL_BLE_ATT_SVR_READ_MULT (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_READ_TYPE
#define MYNEWT_VAL_BLE_ATT_SVR_READ_TYPE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_SIGNED_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_SIGNED_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_WRITE
#define MYNEWT_VAL_BLE_ATT_SVR_WRITE (1)
#endif

#ifndef MYNEWT_VAL_BLE_ATT_SVR_WRITE_NO_RSP
#define MYNEWT_VAL_BLE_ATT_SVR_WRITE_NO_RSP (1)
#endif

#ifndef MYNEWT_VAL_BLE_GAP_MAX_PENDING_CONN_PARAM_UPDATE
#define MYNEWT_VAL_BLE_GAP_MAX_PENDING_CONN_PARAM_UPDATE (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_CHRS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_CHRS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_DSCS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_DSCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_ALL_SVCS
#define MYNEWT_VAL_BLE_GATT_DISC_ALL_SVCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_CHR_UUID
#define MYNEWT_VAL_BLE_GATT_DISC_CHR_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_DISC_SVC_UUID
#define MYNEWT_VAL_BLE_GATT_DISC_SVC_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_FIND_INC_SVCS
#define MYNEWT_VAL_BLE_GATT_FIND_INC_SVCS (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_INDICATE
#define MYNEWT_VAL_BLE_GATT_INDICATE (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_MAX_PROCS
#define MYNEWT_VAL_BLE_GATT_MAX_PROCS (4)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_NOTIFY
#define MYNEWT_VAL_BLE_GATT_NOTIFY (1)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ
#define MYNEWT_VAL_BLE_GATT_READ (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_LONG
#define MYNEWT_VAL_BLE_GATT_READ_LONG (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_MAX_ATTRS
#define MYNEWT_VAL_BLE_GATT_READ_MAX_ATTRS (8)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_MULT
#define MYNEWT_VAL_BLE_GATT_READ_MULT (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_MULT_VAR
#define MYNEWT_VAL_BLE_GATT_READ_MULT_VAR (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_READ_UUID
#define MYNEWT_VAL_BLE_GATT_READ_UUID (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_RESUME_RATE
#define MYNEWT_VAL_BLE_GATT_RESUME_RATE (1000)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_SIGNED_WRITE
#define MYNEWT_VAL_BLE_GATT_SIGNED_WRITE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE
#define MYNEWT_VAL_BLE_GATT_WRITE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_LONG
#define MYNEWT_VAL_BLE_GATT_WRITE_LONG (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_MAX_ATTRS
#define MYNEWT_VAL_BLE_GATT_WRITE_MAX_ATTRS (4)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_NO_RSP
#define MYNEWT_VAL_BLE_GATT_WRITE_NO_RSP (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_WRITE_RELIABLE
#define MYNEWT_VAL_BLE_GATT_WRITE_RELIABLE (MYNEWT_VAL_BLE_ROLE_CENTRAL)
#endif

#ifndef MYNEWT_VAL_BLE_GATT_BLOB_TRANSFER
#define MYNEWT_VAL_BLE_GATT_BLOB_TRANSFER (0)
#endif

#ifndef MYNEWT_VAL_BLE_HOST
#define MYNEWT_VAL_BLE_HOST (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_AUTO_START
#define MYNEWT_VAL_BLE_HS_AUTO_START (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_DEBUG
#define MYNEWT_VAL_BLE_HS_DEBUG (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_ITVL
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_ITVL (1000)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_THRESH
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_THRESH (2)
#endif

#ifndef MYNEWT_VAL_BLE_HS_FLOW_CTRL_TX_ON_DISCONNECT
#define MYNEWT_VAL_BLE_HS_FLOW_CTRL_TX_ON_DISCONNECT (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_LOG_LVL
#define MYNEWT_VAL_BLE_HS_LOG_LVL (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_LOG_MOD
#define MYNEWT_VAL_BLE_HS_LOG_MOD (4)
#endif

#ifndef MYNEWT_VAL_BLE_HS_PHONY_HCI_ACKS
#define MYNEWT_VAL_BLE_HS_PHONY_HCI_ACKS (0)
#endif

#ifndef MYNEWT_VAL_BLE_HS_REQUIRE_OS
#define MYNEWT_VAL_BLE_HS_REQUIRE_OS (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_STOP_ON_SHUTDOWN
#define MYNEWT_VAL_BLE_HS_STOP_ON_SHUTDOWN (1)
#endif

#ifndef MYNEWT_VAL_BLE_HS_STOP_ON_SHUTDOWN_TIMEOUT
#define MYNEWT_VAL_BLE_HS_STOP_ON_SHUTDOWN_TIMEOUT (2000)
#endif

#ifndef MYNEWT_VAL_BLE_HS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_HS_SYSINIT_STAGE (200)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_COC_MAX_NUM
#define MYNEWT_VAL_BLE_L2CAP_COC_MAX_NUM (0)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_COC_MPS
#define MYNEWT_VAL_BLE_L2CAP_COC_MPS (MYNEWT_VAL_MSYS_1_BLOCK_SIZE-8)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_COC_SDU_BUFF_COUNT
#define MYNEWT_VAL_BLE_L2CAP_COC_SDU_BUFF_COUNT (1)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_ENHANCED_COC
#define MYNEWT_VAL_BLE_L2CAP_ENHANCED_COC (0)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_JOIN_RX_FRAGS
#define MYNEWT_VAL_BLE_L2CAP_JOIN_RX_FRAGS (1)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_MAX_CHANS
#define MYNEWT_VAL_BLE_L2CAP_MAX_CHANS (3*MYNEWT_VAL_BLE_MAX_CONNECTIONS)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_RX_FRAG_TIMEOUT
#define MYNEWT_VAL_BLE_L2CAP_RX_FRAG_TIMEOUT (30000)
#endif

#ifndef MYNEWT_VAL_BLE_L2CAP_SIG_MAX_PROCS
#define MYNEWT_VAL_BLE_L2CAP_SIG_MAX_PROCS (1)
#endif

#ifndef MYNEWT_VAL_BLE_MESH
#define MYNEWT_VAL_BLE_MESH (0)
#endif

#ifndef MYNEWT_VAL_BLE_RPA_TIMEOUT
#define MYNEWT_VAL_BLE_RPA_TIMEOUT (300)
#endif

#ifndef MYNEWT_VAL_BLE_SM_BONDING
#define MYNEWT_VAL_BLE_SM_BONDING (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_IO_CAP
#define MYNEWT_VAL_BLE_SM_IO_CAP (BLE_HS_IO_NO_INPUT_OUTPUT)
#endif

#ifndef MYNEWT_VAL_BLE_SM_KEYPRESS
#define MYNEWT_VAL_BLE_SM_KEYPRESS (0)
#endif

/* Overridden by @apache-mynewt-nimble/porting/targets/nuttx (defined by @apache-mynewt-nimble/nimble/host) */
#ifndef MYNEWT_VAL_BLE_SM_LEGACY
#define MYNEWT_VAL_BLE_SM_LEGACY (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_LVL
#define MYNEWT_VAL_BLE_SM_LVL (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_MAX_PROCS
#define MYNEWT_VAL_BLE_SM_MAX_PROCS (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_MITM
#define MYNEWT_VAL_BLE_SM_MITM (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_OOB_DATA_FLAG
#define MYNEWT_VAL_BLE_SM_OOB_DATA_FLAG (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_OUR_KEY_DIST
#define MYNEWT_VAL_BLE_SM_OUR_KEY_DIST (0)
#endif

/* Overridden by @apache-mynewt-nimble/porting/targets/nuttx (defined by @apache-mynewt-nimble/nimble/host) */
#ifndef MYNEWT_VAL_BLE_SM_SC
#define MYNEWT_VAL_BLE_SM_SC (1)
#endif

#ifndef MYNEWT_VAL_BLE_SM_SC_DEBUG_KEYS
#define MYNEWT_VAL_BLE_SM_SC_DEBUG_KEYS (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_SC_ONLY
#define MYNEWT_VAL_BLE_SM_SC_ONLY (0)
#endif

#ifndef MYNEWT_VAL_BLE_SM_THEIR_KEY_DIST
#define MYNEWT_VAL_BLE_SM_THEIR_KEY_DIST (0)
#endif

#ifndef MYNEWT_VAL_BLE_STORE_MAX_BONDS
#define MYNEWT_VAL_BLE_STORE_MAX_BONDS (3)
#endif

#ifndef MYNEWT_VAL_BLE_STORE_MAX_CCCDS
#define MYNEWT_VAL_BLE_STORE_MAX_CCCDS (8)
#endif

#ifdef CONFIG_BT_NIMBLE_MAX_EADS
#define MYNEWT_VAL_BLE_STORE_MAX_EADS CONFIG_BT_NIMBLE_MAX_EADS
#endif

/*** @apache-mynewt-nimble/nimble/host/services/ans */
#ifndef MYNEWT_VAL_BLE_SVC_ANS_NEW_ALERT_CAT
#define MYNEWT_VAL_BLE_SVC_ANS_NEW_ALERT_CAT (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_ANS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_ANS_SYSINIT_STAGE (303)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_ANS_UNR_ALERT_CAT
#define MYNEWT_VAL_BLE_SVC_ANS_UNR_ALERT_CAT (0)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/bas */
#ifndef MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_NOTIFY_ENABLE
#define MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_NOTIFY_ENABLE (1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_READ_PERM
#define MYNEWT_VAL_BLE_SVC_BAS_BATTERY_LEVEL_READ_PERM (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_BAS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_BAS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/dis */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_DEFAULT_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_DEFAULT_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_FIRMWARE_REVISION_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_FIRMWARE_REVISION_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_FIRMWARE_REVISION_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_FIRMWARE_REVISION_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_HARDWARE_REVISION_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_HARDWARE_REVISION_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_HARDWARE_REVISION_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_HARDWARE_REVISION_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_MANUFACTURER_NAME_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_MANUFACTURER_NAME_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_MANUFACTURER_NAME_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_MANUFACTURER_NAME_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_MODEL_NUMBER_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_MODEL_NUMBER_DEFAULT "Apache Mynewt NimBLE"
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_MODEL_NUMBER_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_MODEL_NUMBER_READ_PERM (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_SERIAL_NUMBER_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_SERIAL_NUMBER_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_SERIAL_NUMBER_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_SERIAL_NUMBER_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_SOFTWARE_REVISION_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_SOFTWARE_REVISION_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_SOFTWARE_REVISION_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_SOFTWARE_REVISION_READ_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_DIS_SYSINIT_STAGE (303)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_SYSTEM_ID_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_SYSTEM_ID_DEFAULT (NULL)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_DIS_PNP_ID_DEFAULT
#define MYNEWT_VAL_BLE_SVC_DIS_PNP_ID_DEFAULT (NULL)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_SYSTEM_ID_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_SYSTEM_ID_READ_PERM (-1)
#endif

/* Value copied from BLE_SVC_DIS_DEFAULT_READ_PERM */
#ifndef MYNEWT_VAL_BLE_SVC_DIS_PNP_ID_READ_PERM
#define MYNEWT_VAL_BLE_SVC_DIS_PNP_ID_READ_PERM (-1)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/gap */
#ifndef MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE
#define MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE_WRITE_PERM
#define MYNEWT_VAL_BLE_SVC_GAP_APPEARANCE_WRITE_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_CENTRAL_ADDRESS_RESOLUTION
#define MYNEWT_VAL_BLE_SVC_GAP_CENTRAL_ADDRESS_RESOLUTION (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME "nimble"
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_MAX_LENGTH
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_MAX_LENGTH (31)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_WRITE_PERM
#define MYNEWT_VAL_BLE_SVC_GAP_DEVICE_NAME_WRITE_PERM (-1)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_MAX_CONN_INTERVAL
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_MAX_CONN_INTERVAL (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_MIN_CONN_INTERVAL
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_MIN_CONN_INTERVAL (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_SLAVE_LATENCY
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_SLAVE_LATENCY (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_PPCP_SUPERVISION_TMO
#define MYNEWT_VAL_BLE_SVC_GAP_PPCP_SUPERVISION_TMO (0)
#endif

#ifndef MYNEWT_VAL_BLE_SVC_GAP_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_GAP_SYSINIT_STAGE (301)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/gatt */
#ifndef MYNEWT_VAL_BLE_SVC_GATT_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_GATT_SYSINIT_STAGE (302)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/ias */
#ifndef MYNEWT_VAL_BLE_SVC_IAS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_IAS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/ipss */
#ifndef MYNEWT_VAL_BLE_SVC_IPSS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_IPSS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/lls */
#ifndef MYNEWT_VAL_BLE_SVC_LLS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_LLS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/host/services/tps */
#ifndef MYNEWT_VAL_BLE_SVC_TPS_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SVC_TPS_SYSINIT_STAGE (303)
#endif

/*** @apache-mynewt-nimble/nimble/transport */
#undef MYNEWT_VAL_BLE_ACL_BUF_COUNT

#undef MYNEWT_VAL_BLE_ACL_BUF_SIZE

#undef MYNEWT_VAL_BLE_HCI_BRIDGE

#undef MYNEWT_VAL_BLE_HCI_EVT_BUF_SIZE

#undef MYNEWT_VAL_BLE_HCI_EVT_HI_BUF_COUNT

#undef MYNEWT_VAL_BLE_HCI_EVT_LO_BUF_COUNT

#undef MYNEWT_VAL_BLE_HCI_TRANSPORT

#ifndef MYNEWT_VAL_BLE_MONITOR_CONSOLE_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_CONSOLE_BUFFER_SIZE (128)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT
#define MYNEWT_VAL_BLE_MONITOR_RTT (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFERED
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFERED (1)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_NAME
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_NAME "btmonitor"
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_RTT_BUFFER_SIZE (256)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART
#define MYNEWT_VAL_BLE_MONITOR_UART (0)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_BAUDRATE
#define MYNEWT_VAL_BLE_MONITOR_UART_BAUDRATE (1000000)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_BUFFER_SIZE
#define MYNEWT_VAL_BLE_MONITOR_UART_BUFFER_SIZE (64)
#endif

#ifndef MYNEWT_VAL_BLE_MONITOR_UART_DEV
#define MYNEWT_VAL_BLE_MONITOR_UART_DEV "uart0"
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT
#define MYNEWT_VAL_BLE_TRANSPORT (1)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_ACL_COUNT
#define MYNEWT_VAL_BLE_TRANSPORT_ACL_COUNT (10)
#endif

/* Value copied from BLE_TRANSPORT_ACL_COUNT */
#ifndef MYNEWT_VAL_BLE_TRANSPORT_ACL_FROM_HS_COUNT
#define MYNEWT_VAL_BLE_TRANSPORT_ACL_FROM_HS_COUNT (10)
#endif

/* Value copied from BLE_TRANSPORT_ACL_COUNT */
#ifndef MYNEWT_VAL_BLE_TRANSPORT_ACL_FROM_LL_COUNT
#define MYNEWT_VAL_BLE_TRANSPORT_ACL_FROM_LL_COUNT (10)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_ACL_SIZE
#define MYNEWT_VAL_BLE_TRANSPORT_ACL_SIZE (251)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_EVT_COUNT
#define MYNEWT_VAL_BLE_TRANSPORT_EVT_COUNT (4)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_EVT_DISCARDABLE_COUNT
#define MYNEWT_VAL_BLE_TRANSPORT_EVT_DISCARDABLE_COUNT (16)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_EVT_SIZE
#define MYNEWT_VAL_BLE_TRANSPORT_EVT_SIZE (70)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_HS__cdc
#define MYNEWT_VAL_BLE_TRANSPORT_HS__cdc (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_HS__custom
#define MYNEWT_VAL_BLE_TRANSPORT_HS__custom (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_HS__dialog_cmac
#define MYNEWT_VAL_BLE_TRANSPORT_HS__dialog_cmac (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_HS__native
#define MYNEWT_VAL_BLE_TRANSPORT_HS__native (1)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_HS__nrf5340
#define MYNEWT_VAL_BLE_TRANSPORT_HS__nrf5340 (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_HS__uart
#define MYNEWT_VAL_BLE_TRANSPORT_HS__uart (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_HS__usb
#define MYNEWT_VAL_BLE_TRANSPORT_HS__usb (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_HS
#define MYNEWT_VAL_BLE_TRANSPORT_HS (1)
#endif

/* Overridden by @apache-mynewt-nimble/porting/targets/nuttx (defined by @apache-mynewt-nimble/nimble/transport) */
#ifndef MYNEWT_VAL_BLE_TRANSPORT_LL__apollo3
#define MYNEWT_VAL_BLE_TRANSPORT_LL__apollo3 (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_LL__custom
#define MYNEWT_VAL_BLE_TRANSPORT_LL__custom (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_LL__dialog_cmac
#define MYNEWT_VAL_BLE_TRANSPORT_LL__dialog_cmac (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_LL__emspi
#define MYNEWT_VAL_BLE_TRANSPORT_LL__emspi (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_LL__native
#define MYNEWT_VAL_BLE_TRANSPORT_LL__native (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_LL__nrf5340
#define MYNEWT_VAL_BLE_TRANSPORT_LL__nrf5340 (0)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_LL__socket
#define MYNEWT_VAL_BLE_TRANSPORT_LL__socket (1)
#endif
#ifndef MYNEWT_VAL_BLE_TRANSPORT_LL
#define MYNEWT_VAL_BLE_TRANSPORT_LL (1)
#endif

/*** @apache-mynewt-nimble/nimble/transport/socket */
#ifndef MYNEWT_VAL_BLE_SOCK_CLI_SYSINIT_STAGE
#define MYNEWT_VAL_BLE_SOCK_CLI_SYSINIT_STAGE (500)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_LINUX_DEV
#define MYNEWT_VAL_BLE_SOCK_LINUX_DEV (0)
#endif

/* Overridden by @apache-mynewt-nimble/porting/targets/nuttx (defined by @apache-mynewt-nimble/nimble/transport/socket) */
#ifndef MYNEWT_VAL_BLE_SOCK_STACK_SIZE
#define MYNEWT_VAL_BLE_SOCK_STACK_SIZE (1028)
#endif

/* Overridden by @apache-mynewt-nimble/porting/targets/nuttx (defined by @apache-mynewt-nimble/nimble/transport/socket) */
#ifndef MYNEWT_VAL_BLE_SOCK_TASK_PRIO
#define MYNEWT_VAL_BLE_SOCK_TASK_PRIO (3)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_TCP_PORT
#define MYNEWT_VAL_BLE_SOCK_TCP_PORT (14433)
#endif

#ifndef MYNEWT_VAL_BLE_SOCK_USE_LINUX_BLUE
#define MYNEWT_VAL_BLE_SOCK_USE_LINUX_BLUE (0)
#endif

/* Overridden by @apache-mynewt-nimble/porting/targets/nuttx (defined by @apache-mynewt-nimble/nimble/transport/socket) */
#ifndef MYNEWT_VAL_BLE_SOCK_USE_NUTTX
#define MYNEWT_VAL_BLE_SOCK_USE_NUTTX (1)
#endif

/* Overridden by @apache-mynewt-nimble/porting/targets/nuttx (defined by @apache-mynewt-nimble/nimble/transport/socket) */
#ifndef MYNEWT_VAL_BLE_SOCK_USE_TCP
#define MYNEWT_VAL_BLE_SOCK_USE_TCP (0)
#endif

/*** newt */
#ifndef MYNEWT_VAL_APP_NAME
#define MYNEWT_VAL_APP_NAME "dummy_app"
#endif

#ifndef MYNEWT_VAL_APP_dummy_app
#define MYNEWT_VAL_APP_dummy_app (1)
#endif

#ifndef MYNEWT_VAL_ARCH_NAME
#define MYNEWT_VAL_ARCH_NAME "sim"
#endif

#ifndef MYNEWT_VAL_ARCH_sim
#define MYNEWT_VAL_ARCH_sim (1)
#endif

#ifndef MYNEWT_VAL_BSP_NAME
#define MYNEWT_VAL_BSP_NAME "native"
#endif

#ifndef MYNEWT_VAL_BSP_native
#define MYNEWT_VAL_BSP_native (1)
#endif

#ifndef MYNEWT_VAL_NEWT_FEATURE_LOGCFG
#define MYNEWT_VAL_NEWT_FEATURE_LOGCFG (1)
#endif

#ifndef MYNEWT_VAL_NEWT_FEATURE_SYSDOWN
#define MYNEWT_VAL_NEWT_FEATURE_SYSDOWN (1)
#endif

#ifndef MYNEWT_VAL_TARGET_NAME
#define MYNEWT_VAL_TARGET_NAME "nuttx"
#endif

#ifndef MYNEWT_VAL_TARGET_nuttx
#define MYNEWT_VAL_TARGET_nuttx (1)
#endif

/*** Included packages */
#define MYNEWT_PKG_apache_mynewt_core__compiler_sim 1
#define MYNEWT_PKG_apache_mynewt_core__crypto_tinycrypt 1
#define MYNEWT_PKG_apache_mynewt_core__hw_bsp_native 1
#define MYNEWT_PKG_apache_mynewt_core__hw_drivers_flash_enc_flash 1
#define MYNEWT_PKG_apache_mynewt_core__hw_drivers_flash_enc_flash_ef_tinycrypt 1
#define MYNEWT_PKG_apache_mynewt_core__hw_drivers_trng 1
#define MYNEWT_PKG_apache_mynewt_core__hw_drivers_trng_trng_sw 1
#define MYNEWT_PKG_apache_mynewt_core__hw_drivers_uart 1
#define MYNEWT_PKG_apache_mynewt_core__hw_drivers_uart_uart_hal 1
#define MYNEWT_PKG_apache_mynewt_core__hw_hal 1
#define MYNEWT_PKG_apache_mynewt_core__hw_mcu_native 1
#define MYNEWT_PKG_apache_mynewt_core__kernel_os 1
#define MYNEWT_PKG_apache_mynewt_core__kernel_sim 1
#define MYNEWT_PKG_apache_mynewt_core__net_ip_mn_socket 1
#define MYNEWT_PKG_apache_mynewt_core__net_ip_native_sockets 1
#define MYNEWT_PKG_apache_mynewt_core__sys_console_stub 1
#define MYNEWT_PKG_apache_mynewt_core__sys_defs 1
#define MYNEWT_PKG_apache_mynewt_core__sys_flash_map 1
#define MYNEWT_PKG_apache_mynewt_core__sys_log_common 1
#define MYNEWT_PKG_apache_mynewt_core__sys_log_modlog 1
#define MYNEWT_PKG_apache_mynewt_core__sys_log_stub 1
#define MYNEWT_PKG_apache_mynewt_core__sys_stats_stub 1
#define MYNEWT_PKG_apache_mynewt_core__sys_sys 1
#define MYNEWT_PKG_apache_mynewt_core__sys_sysdown 1
#define MYNEWT_PKG_apache_mynewt_core__sys_sysinit 1
#define MYNEWT_PKG_apache_mynewt_core__util_mem 1
#define MYNEWT_PKG_apache_mynewt_core__util_rwlock 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_ans 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_bas 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_dis 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_gap 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_gatt 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_ias 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_ipss 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_lls 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_host_services_tps 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_transport 1
#define MYNEWT_PKG_apache_mynewt_nimble__nimble_transport_socket 1
#define MYNEWT_PKG_apache_mynewt_nimble__porting_npl_mynewt 1
#define MYNEWT_PKG_apache_mynewt_nimble__porting_targets_dummy_app 1
#define MYNEWT_PKG_apache_mynewt_nimble__porting_targets_nuttx 1

#endif
