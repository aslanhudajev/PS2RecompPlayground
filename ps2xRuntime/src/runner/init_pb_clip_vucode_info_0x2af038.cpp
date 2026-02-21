#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_pb_clip_vucode_info
// Address: 0x2af038 - 0x2b2fb4
void init_pb_clip_vucode_info_0x2af038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2af038u;

    // 0x2af038: 0x27bdfb20
    ctx->pc = 0x2af038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966048));
    // 0x2af03c: 0x3c040037
    ctx->pc = 0x2af03cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2af040: 0x24841908
    ctx->pc = 0x2af040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6408));
    // 0x2af044: 0x3c020031
    ctx->pc = 0x2af044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2af048: 0x2442b9d0
    ctx->pc = 0x2af048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949328));
    // 0x2af04c: 0x3c030000
    ctx->pc = 0x2af04cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2af050: 0x24630000
    ctx->pc = 0x2af050u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2af054: 0x431023
    ctx->pc = 0x2af054u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af058: 0xa4820006
    ctx->pc = 0x2af058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af05c: 0xa480000a
    ctx->pc = 0x2af05cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x2af060: 0x3c020000
    ctx->pc = 0x2af060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af064: 0x24420000
    ctx->pc = 0x2af064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 0));
    // 0x2af068: 0x431023
    ctx->pc = 0x2af068u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af06c: 0xa482000e
    ctx->pc = 0x2af06cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af070: 0x3c020000
    ctx->pc = 0x2af070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af074: 0x24420010
    ctx->pc = 0x2af074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x2af078: 0x431023
    ctx->pc = 0x2af078u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af07c: 0xa4820012
    ctx->pc = 0x2af07cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af080: 0x3c020000
    ctx->pc = 0x2af080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af084: 0x24420000
    ctx->pc = 0x2af084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 0));
    // 0x2af088: 0x431023
    ctx->pc = 0x2af088u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af08c: 0xa4820016
    ctx->pc = 0x2af08cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af090: 0x3c020000
    ctx->pc = 0x2af090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af094: 0x244203b0
    ctx->pc = 0x2af094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 944));
    // 0x2af098: 0x431023
    ctx->pc = 0x2af098u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af09c: 0xa482001a
    ctx->pc = 0x2af09cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af0a0: 0x3c020000
    ctx->pc = 0x2af0a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af0a4: 0x24420418
    ctx->pc = 0x2af0a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1048));
    // 0x2af0a8: 0x431023
    ctx->pc = 0x2af0a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af0ac: 0xa482001e
    ctx->pc = 0x2af0acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af0b0: 0x3c020000
    ctx->pc = 0x2af0b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af0b4: 0x24420490
    ctx->pc = 0x2af0b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1168));
    // 0x2af0b8: 0x431023
    ctx->pc = 0x2af0b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af0bc: 0xa4820022
    ctx->pc = 0x2af0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af0c0: 0x3c020000
    ctx->pc = 0x2af0c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af0c4: 0x24420520
    ctx->pc = 0x2af0c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1312));
    // 0x2af0c8: 0x431023
    ctx->pc = 0x2af0c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af0cc: 0xa4820026
    ctx->pc = 0x2af0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af0d0: 0x3c020000
    ctx->pc = 0x2af0d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af0d4: 0x244207e0
    ctx->pc = 0x2af0d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2016));
    // 0x2af0d8: 0x431023
    ctx->pc = 0x2af0d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af0dc: 0xa482002a
    ctx->pc = 0x2af0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af0e0: 0x3c020000
    ctx->pc = 0x2af0e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af0e4: 0x24420b30
    ctx->pc = 0x2af0e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2864));
    // 0x2af0e8: 0x431023
    ctx->pc = 0x2af0e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af0ec: 0xa482002e
    ctx->pc = 0x2af0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af0f0: 0x3c020000
    ctx->pc = 0x2af0f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af0f4: 0x24422e60
    ctx->pc = 0x2af0f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11872));
    // 0x2af0f8: 0x431023
    ctx->pc = 0x2af0f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af0fc: 0xa4820032
    ctx->pc = 0x2af0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af100: 0x3c020000
    ctx->pc = 0x2af100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af104: 0x244236e8
    ctx->pc = 0x2af104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2af108: 0x431023
    ctx->pc = 0x2af108u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af10c: 0xa4820036
    ctx->pc = 0x2af10cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af110: 0x3c020000
    ctx->pc = 0x2af110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af114: 0x24420000
    ctx->pc = 0x2af114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 0));
    // 0x2af118: 0x431023
    ctx->pc = 0x2af118u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af11c: 0xa482003a
    ctx->pc = 0x2af11cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af120: 0x3c020000
    ctx->pc = 0x2af120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af124: 0x24420000
    ctx->pc = 0x2af124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 0));
    // 0x2af128: 0x431023
    ctx->pc = 0x2af128u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af12c: 0xa482003e
    ctx->pc = 0x2af12cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af130: 0x3c020000
    ctx->pc = 0x2af130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af134: 0x24420d60
    ctx->pc = 0x2af134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2af138: 0x431023
    ctx->pc = 0x2af138u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af13c: 0xa4820042
    ctx->pc = 0x2af13cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af140: 0x3c020000
    ctx->pc = 0x2af140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af144: 0x24420020
    ctx->pc = 0x2af144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2af148: 0x431023
    ctx->pc = 0x2af148u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af14c: 0xa4820046
    ctx->pc = 0x2af14cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af150: 0x3c020000
    ctx->pc = 0x2af150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af154: 0x24420310
    ctx->pc = 0x2af154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 784));
    // 0x2af158: 0x431023
    ctx->pc = 0x2af158u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af15c: 0xa482004a
    ctx->pc = 0x2af15cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af160: 0x3c020000
    ctx->pc = 0x2af160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af164: 0x24420020
    ctx->pc = 0x2af164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2af168: 0x431023
    ctx->pc = 0x2af168u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af16c: 0xa482004e
    ctx->pc = 0x2af16cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af170: 0x3c020000
    ctx->pc = 0x2af170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af174: 0x244201d8
    ctx->pc = 0x2af174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 472));
    // 0x2af178: 0x431023
    ctx->pc = 0x2af178u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af17c: 0xa4820052
    ctx->pc = 0x2af17cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af180: 0x3c020000
    ctx->pc = 0x2af180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af184: 0x244201f8
    ctx->pc = 0x2af184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 504));
    // 0x2af188: 0x431023
    ctx->pc = 0x2af188u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af18c: 0xa4820056
    ctx->pc = 0x2af18cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af190: 0x3c020000
    ctx->pc = 0x2af190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af194: 0x24420220
    ctx->pc = 0x2af194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 544));
    // 0x2af198: 0x431023
    ctx->pc = 0x2af198u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af19c: 0xa482005a
    ctx->pc = 0x2af19cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af1a0: 0x3c020000
    ctx->pc = 0x2af1a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af1a4: 0x24420238
    ctx->pc = 0x2af1a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 568));
    // 0x2af1a8: 0x431023
    ctx->pc = 0x2af1a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af1ac: 0xa482005e
    ctx->pc = 0x2af1acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af1b0: 0x3c020000
    ctx->pc = 0x2af1b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af1b4: 0x24420238
    ctx->pc = 0x2af1b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 568));
    // 0x2af1b8: 0x431023
    ctx->pc = 0x2af1b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af1bc: 0xa4820062
    ctx->pc = 0x2af1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af1c0: 0x3c020000
    ctx->pc = 0x2af1c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af1c4: 0x24420278
    ctx->pc = 0x2af1c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 632));
    // 0x2af1c8: 0x431023
    ctx->pc = 0x2af1c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af1cc: 0xa4820066
    ctx->pc = 0x2af1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af1d0: 0x3c020000
    ctx->pc = 0x2af1d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af1d4: 0x24420298
    ctx->pc = 0x2af1d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 664));
    // 0x2af1d8: 0x431023
    ctx->pc = 0x2af1d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af1dc: 0xa482006a
    ctx->pc = 0x2af1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af1e0: 0x3c020000
    ctx->pc = 0x2af1e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af1e4: 0x244202c0
    ctx->pc = 0x2af1e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 704));
    // 0x2af1e8: 0x431023
    ctx->pc = 0x2af1e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af1ec: 0xa482006e
    ctx->pc = 0x2af1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 110), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af1f0: 0x3c020000
    ctx->pc = 0x2af1f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af1f4: 0x244202d8
    ctx->pc = 0x2af1f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 728));
    // 0x2af1f8: 0x431023
    ctx->pc = 0x2af1f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af1fc: 0xa4820072
    ctx->pc = 0x2af1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af200: 0x3c020000
    ctx->pc = 0x2af200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af204: 0x244202d8
    ctx->pc = 0x2af204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 728));
    // 0x2af208: 0x431023
    ctx->pc = 0x2af208u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af20c: 0xa4820076
    ctx->pc = 0x2af20cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af210: 0x3c020000
    ctx->pc = 0x2af210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af214: 0x244202e0
    ctx->pc = 0x2af214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 736));
    // 0x2af218: 0x431023
    ctx->pc = 0x2af218u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af21c: 0xa482007a
    ctx->pc = 0x2af21cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af220: 0x3c020000
    ctx->pc = 0x2af220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af224: 0x24420300
    ctx->pc = 0x2af224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 768));
    // 0x2af228: 0x431023
    ctx->pc = 0x2af228u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af22c: 0xa482007e
    ctx->pc = 0x2af22cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 126), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af230: 0x3c020000
    ctx->pc = 0x2af230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af234: 0x24420310
    ctx->pc = 0x2af234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 784));
    // 0x2af238: 0x431023
    ctx->pc = 0x2af238u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af23c: 0xa4820082
    ctx->pc = 0x2af23cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af240: 0x3c020000
    ctx->pc = 0x2af240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af244: 0x24420310
    ctx->pc = 0x2af244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 784));
    // 0x2af248: 0x431023
    ctx->pc = 0x2af248u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af24c: 0xa4820086
    ctx->pc = 0x2af24cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af250: 0x3c020000
    ctx->pc = 0x2af250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af254: 0x24420858
    ctx->pc = 0x2af254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2af258: 0x431023
    ctx->pc = 0x2af258u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af25c: 0xa482008a
    ctx->pc = 0x2af25cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 138), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af260: 0x3c020000
    ctx->pc = 0x2af260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af264: 0x24420380
    ctx->pc = 0x2af264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 896));
    // 0x2af268: 0x431023
    ctx->pc = 0x2af268u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af26c: 0xa482008e
    ctx->pc = 0x2af26cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af270: 0x3c020000
    ctx->pc = 0x2af270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af274: 0x244203a0
    ctx->pc = 0x2af274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 928));
    // 0x2af278: 0x431023
    ctx->pc = 0x2af278u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af27c: 0xa4820092
    ctx->pc = 0x2af27cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af280: 0x3c020000
    ctx->pc = 0x2af280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af284: 0x244203b0
    ctx->pc = 0x2af284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 944));
    // 0x2af288: 0x431023
    ctx->pc = 0x2af288u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af28c: 0xa4820096
    ctx->pc = 0x2af28cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af290: 0x3c020000
    ctx->pc = 0x2af290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af294: 0x244203e8
    ctx->pc = 0x2af294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2af298: 0x431023
    ctx->pc = 0x2af298u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af29c: 0xa482009a
    ctx->pc = 0x2af29cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 154), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af2a0: 0x3c020000
    ctx->pc = 0x2af2a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af2a4: 0x24420408
    ctx->pc = 0x2af2a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1032));
    // 0x2af2a8: 0x431023
    ctx->pc = 0x2af2a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af2ac: 0xa482009e
    ctx->pc = 0x2af2acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af2b0: 0x3c020000
    ctx->pc = 0x2af2b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af2b4: 0x24420418
    ctx->pc = 0x2af2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1048));
    // 0x2af2b8: 0x431023
    ctx->pc = 0x2af2b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af2bc: 0xa48200a2
    ctx->pc = 0x2af2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af2c0: 0x3c020000
    ctx->pc = 0x2af2c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af2c4: 0x24420490
    ctx->pc = 0x2af2c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1168));
    // 0x2af2c8: 0x431023
    ctx->pc = 0x2af2c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af2cc: 0xa48200a6
    ctx->pc = 0x2af2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 166), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af2d0: 0x3c020000
    ctx->pc = 0x2af2d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af2d4: 0x244204f0
    ctx->pc = 0x2af2d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1264));
    // 0x2af2d8: 0x431023
    ctx->pc = 0x2af2d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af2dc: 0xa48200aa
    ctx->pc = 0x2af2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af2e0: 0x3c020000
    ctx->pc = 0x2af2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af2e4: 0x24420510
    ctx->pc = 0x2af2e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1296));
    // 0x2af2e8: 0x431023
    ctx->pc = 0x2af2e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af2ec: 0xa48200ae
    ctx->pc = 0x2af2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 174), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af2f0: 0x3c020000
    ctx->pc = 0x2af2f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af2f4: 0x24420520
    ctx->pc = 0x2af2f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1312));
    // 0x2af2f8: 0x431023
    ctx->pc = 0x2af2f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af2fc: 0xa48200b2
    ctx->pc = 0x2af2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 178), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af300: 0x3c020000
    ctx->pc = 0x2af300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af304: 0x24420520
    ctx->pc = 0x2af304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1312));
    // 0x2af308: 0x431023
    ctx->pc = 0x2af308u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af30c: 0xa48200b6
    ctx->pc = 0x2af30cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 182), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af310: 0x3c020000
    ctx->pc = 0x2af310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af314: 0x244207b8
    ctx->pc = 0x2af314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x2af318: 0x431023
    ctx->pc = 0x2af318u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af31c: 0xa48200ba
    ctx->pc = 0x2af31cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 186), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af320: 0x3c020000
    ctx->pc = 0x2af320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af324: 0x24420540
    ctx->pc = 0x2af324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2af328: 0x431023
    ctx->pc = 0x2af328u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af32c: 0xa48200be
    ctx->pc = 0x2af32cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 190), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af330: 0x3c020000
    ctx->pc = 0x2af330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af334: 0x244205e8
    ctx->pc = 0x2af334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1512));
    // 0x2af338: 0x431023
    ctx->pc = 0x2af338u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af33c: 0xa48200c2
    ctx->pc = 0x2af33cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af340: 0x3c020000
    ctx->pc = 0x2af340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af344: 0x24420628
    ctx->pc = 0x2af344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1576));
    // 0x2af348: 0x431023
    ctx->pc = 0x2af348u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af34c: 0xa48200c6
    ctx->pc = 0x2af34cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af350: 0x3c020000
    ctx->pc = 0x2af350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af354: 0x24420648
    ctx->pc = 0x2af354u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1608));
    // 0x2af358: 0x431023
    ctx->pc = 0x2af358u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af35c: 0xa48200ca
    ctx->pc = 0x2af35cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af360: 0x3c020000
    ctx->pc = 0x2af360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af364: 0x24420668
    ctx->pc = 0x2af364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1640));
    // 0x2af368: 0x431023
    ctx->pc = 0x2af368u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af36c: 0xa48200ce
    ctx->pc = 0x2af36cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 206), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af370: 0x3c020000
    ctx->pc = 0x2af370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af374: 0x244206d8
    ctx->pc = 0x2af374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1752));
    // 0x2af378: 0x431023
    ctx->pc = 0x2af378u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af37c: 0xa48200d2
    ctx->pc = 0x2af37cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 210), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af380: 0x3c020000
    ctx->pc = 0x2af380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af384: 0x244206e8
    ctx->pc = 0x2af384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1768));
    // 0x2af388: 0x431023
    ctx->pc = 0x2af388u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af38c: 0xa48200d6
    ctx->pc = 0x2af38cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 214), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af390: 0x3c020000
    ctx->pc = 0x2af390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af394: 0x24420708
    ctx->pc = 0x2af394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1800));
    // 0x2af398: 0x431023
    ctx->pc = 0x2af398u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af39c: 0xa48200da
    ctx->pc = 0x2af39cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af3a0: 0x3c020000
    ctx->pc = 0x2af3a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af3a4: 0x24420718
    ctx->pc = 0x2af3a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1816));
    // 0x2af3a8: 0x431023
    ctx->pc = 0x2af3a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af3ac: 0xa48200de
    ctx->pc = 0x2af3acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 222), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af3b0: 0x3c020000
    ctx->pc = 0x2af3b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af3b4: 0x24420738
    ctx->pc = 0x2af3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1848));
    // 0x2af3b8: 0x431023
    ctx->pc = 0x2af3b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af3bc: 0xa48200e2
    ctx->pc = 0x2af3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 226), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af3c0: 0x3c020000
    ctx->pc = 0x2af3c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af3c4: 0x24420758
    ctx->pc = 0x2af3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1880));
    // 0x2af3c8: 0x431023
    ctx->pc = 0x2af3c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af3cc: 0xa48200e6
    ctx->pc = 0x2af3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 230), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af3d0: 0x3c020000
    ctx->pc = 0x2af3d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af3d4: 0x24420768
    ctx->pc = 0x2af3d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1896));
    // 0x2af3d8: 0x431023
    ctx->pc = 0x2af3d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af3dc: 0xa48200ea
    ctx->pc = 0x2af3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 234), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af3e0: 0x3c020000
    ctx->pc = 0x2af3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af3e4: 0x24420788
    ctx->pc = 0x2af3e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1928));
    // 0x2af3e8: 0x431023
    ctx->pc = 0x2af3e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af3ec: 0xa48200ee
    ctx->pc = 0x2af3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 238), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af3f0: 0x3c020000
    ctx->pc = 0x2af3f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af3f4: 0x244207b8
    ctx->pc = 0x2af3f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x2af3f8: 0x431023
    ctx->pc = 0x2af3f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af3fc: 0xa48200f2
    ctx->pc = 0x2af3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af400: 0x3c020000
    ctx->pc = 0x2af400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af404: 0x24420858
    ctx->pc = 0x2af404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2af408: 0x431023
    ctx->pc = 0x2af408u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af40c: 0xa48200f6
    ctx->pc = 0x2af40cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 246), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af410: 0x3c020000
    ctx->pc = 0x2af410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af414: 0x24420858
    ctx->pc = 0x2af414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2af418: 0x431023
    ctx->pc = 0x2af418u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af41c: 0xa48200fa
    ctx->pc = 0x2af41cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 250), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af420: 0x3c020000
    ctx->pc = 0x2af420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af424: 0x24420968
    ctx->pc = 0x2af424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2408));
    // 0x2af428: 0x431023
    ctx->pc = 0x2af428u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af42c: 0xa48200fe
    ctx->pc = 0x2af42cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 254), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af430: 0x3c020000
    ctx->pc = 0x2af430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af434: 0x24420858
    ctx->pc = 0x2af434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2af438: 0x431023
    ctx->pc = 0x2af438u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af43c: 0xa4820102
    ctx->pc = 0x2af43cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af440: 0x3c020000
    ctx->pc = 0x2af440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af444: 0x24420878
    ctx->pc = 0x2af444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2168));
    // 0x2af448: 0x431023
    ctx->pc = 0x2af448u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af44c: 0xa4820106
    ctx->pc = 0x2af44cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 262), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af450: 0x3c020000
    ctx->pc = 0x2af450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af454: 0x244208e8
    ctx->pc = 0x2af454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2280));
    // 0x2af458: 0x431023
    ctx->pc = 0x2af458u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af45c: 0xa482010a
    ctx->pc = 0x2af45cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 266), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af460: 0x3c020000
    ctx->pc = 0x2af460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af464: 0x24420908
    ctx->pc = 0x2af464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2312));
    // 0x2af468: 0x431023
    ctx->pc = 0x2af468u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af46c: 0xa482010e
    ctx->pc = 0x2af46cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 270), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af470: 0x3c020000
    ctx->pc = 0x2af470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af474: 0x24420938
    ctx->pc = 0x2af474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2360));
    // 0x2af478: 0x431023
    ctx->pc = 0x2af478u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af47c: 0xa4820112
    ctx->pc = 0x2af47cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 274), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af480: 0x3c020000
    ctx->pc = 0x2af480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af484: 0x24420958
    ctx->pc = 0x2af484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2392));
    // 0x2af488: 0x431023
    ctx->pc = 0x2af488u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af48c: 0xa4820116
    ctx->pc = 0x2af48cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 278), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af490: 0x3c020000
    ctx->pc = 0x2af490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af494: 0x24420968
    ctx->pc = 0x2af494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2408));
    // 0x2af498: 0x431023
    ctx->pc = 0x2af498u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af49c: 0xa482011a
    ctx->pc = 0x2af49cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 282), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af4a0: 0x3c020000
    ctx->pc = 0x2af4a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af4a4: 0x24420968
    ctx->pc = 0x2af4a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2408));
    // 0x2af4a8: 0x431023
    ctx->pc = 0x2af4a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4ac: 0xa482011e
    ctx->pc = 0x2af4acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af4b0: 0x3c020000
    ctx->pc = 0x2af4b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af4b4: 0x24420a90
    ctx->pc = 0x2af4b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2704));
    // 0x2af4b8: 0x431023
    ctx->pc = 0x2af4b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4bc: 0xa4820122
    ctx->pc = 0x2af4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 290), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af4c0: 0x3c020000
    ctx->pc = 0x2af4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af4c4: 0x24420970
    ctx->pc = 0x2af4c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2416));
    // 0x2af4c8: 0x431023
    ctx->pc = 0x2af4c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4cc: 0xa4820126
    ctx->pc = 0x2af4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af4d0: 0x3c020000
    ctx->pc = 0x2af4d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af4d4: 0x24420990
    ctx->pc = 0x2af4d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2af4d8: 0x431023
    ctx->pc = 0x2af4d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4dc: 0xa482012a
    ctx->pc = 0x2af4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 298), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af4e0: 0x3c020000
    ctx->pc = 0x2af4e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af4e4: 0x244209c8
    ctx->pc = 0x2af4e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2504));
    // 0x2af4e8: 0x431023
    ctx->pc = 0x2af4e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4ec: 0xa482012e
    ctx->pc = 0x2af4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 302), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af4f0: 0x3c020000
    ctx->pc = 0x2af4f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af4f4: 0x244209e8
    ctx->pc = 0x2af4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2536));
    // 0x2af4f8: 0x431023
    ctx->pc = 0x2af4f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4fc: 0xa4820132
    ctx->pc = 0x2af4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af500: 0x3c020000
    ctx->pc = 0x2af500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af504: 0x24420a90
    ctx->pc = 0x2af504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2704));
    // 0x2af508: 0x431023
    ctx->pc = 0x2af508u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af50c: 0xa4820136
    ctx->pc = 0x2af50cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 310), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af510: 0x3c020000
    ctx->pc = 0x2af510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af514: 0x24420a98
    ctx->pc = 0x2af514u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2712));
    // 0x2af518: 0x431023
    ctx->pc = 0x2af518u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af51c: 0xa482013a
    ctx->pc = 0x2af51cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 314), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af520: 0x3c020000
    ctx->pc = 0x2af520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af524: 0x24420ac0
    ctx->pc = 0x2af524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2752));
    // 0x2af528: 0x431023
    ctx->pc = 0x2af528u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af52c: 0xa482013e
    ctx->pc = 0x2af52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 318), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af530: 0x3c020000
    ctx->pc = 0x2af530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af534: 0x24420ad8
    ctx->pc = 0x2af534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2776));
    // 0x2af538: 0x431023
    ctx->pc = 0x2af538u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af53c: 0xa4820142
    ctx->pc = 0x2af53cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 322), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af540: 0x3c020000
    ctx->pc = 0x2af540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af544: 0x24420ad8
    ctx->pc = 0x2af544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2776));
    // 0x2af548: 0x431023
    ctx->pc = 0x2af548u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af54c: 0xa4820146
    ctx->pc = 0x2af54cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 326), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af550: 0x3c020000
    ctx->pc = 0x2af550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af554: 0x24420b10
    ctx->pc = 0x2af554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2832));
    // 0x2af558: 0x431023
    ctx->pc = 0x2af558u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af55c: 0xa482014a
    ctx->pc = 0x2af55cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af560: 0x3c020000
    ctx->pc = 0x2af560u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af564: 0x24420b30
    ctx->pc = 0x2af564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2864));
    // 0x2af568: 0x431023
    ctx->pc = 0x2af568u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af56c: 0xa482014e
    ctx->pc = 0x2af56cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 334), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af570: 0x3c020000
    ctx->pc = 0x2af570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af574: 0x24420b30
    ctx->pc = 0x2af574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2864));
    // 0x2af578: 0x431023
    ctx->pc = 0x2af578u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af57c: 0xa4820152
    ctx->pc = 0x2af57cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 338), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af580: 0x3c020000
    ctx->pc = 0x2af580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af584: 0x24420c50
    ctx->pc = 0x2af584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3152));
    // 0x2af588: 0x431023
    ctx->pc = 0x2af588u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af58c: 0xa4820156
    ctx->pc = 0x2af58cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 342), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af590: 0x3c020000
    ctx->pc = 0x2af590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af594: 0x24420b58
    ctx->pc = 0x2af594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2904));
    // 0x2af598: 0x431023
    ctx->pc = 0x2af598u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af59c: 0xa482015a
    ctx->pc = 0x2af59cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af5a0: 0x3c020000
    ctx->pc = 0x2af5a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af5a4: 0x24420c50
    ctx->pc = 0x2af5a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3152));
    // 0x2af5a8: 0x431023
    ctx->pc = 0x2af5a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af5ac: 0xa482015e
    ctx->pc = 0x2af5acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af5b0: 0x3c020000
    ctx->pc = 0x2af5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af5b4: 0x24420b58
    ctx->pc = 0x2af5b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2904));
    // 0x2af5b8: 0x431023
    ctx->pc = 0x2af5b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af5bc: 0xa4820162
    ctx->pc = 0x2af5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af5c0: 0x3c020000
    ctx->pc = 0x2af5c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af5c4: 0x24420b78
    ctx->pc = 0x2af5c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2936));
    // 0x2af5c8: 0x431023
    ctx->pc = 0x2af5c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af5cc: 0xa4820166
    ctx->pc = 0x2af5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af5d0: 0x3c020000
    ctx->pc = 0x2af5d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af5d4: 0x24420c20
    ctx->pc = 0x2af5d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3104));
    // 0x2af5d8: 0x431023
    ctx->pc = 0x2af5d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af5dc: 0xa482016a
    ctx->pc = 0x2af5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af5e0: 0x3c020000
    ctx->pc = 0x2af5e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af5e4: 0x24420c40
    ctx->pc = 0x2af5e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3136));
    // 0x2af5e8: 0x431023
    ctx->pc = 0x2af5e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af5ec: 0xa482016e
    ctx->pc = 0x2af5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 366), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af5f0: 0x3c020000
    ctx->pc = 0x2af5f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af5f4: 0x24420c50
    ctx->pc = 0x2af5f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3152));
    // 0x2af5f8: 0x431023
    ctx->pc = 0x2af5f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af5fc: 0xa4820172
    ctx->pc = 0x2af5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 370), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af600: 0x3c020000
    ctx->pc = 0x2af600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af604: 0x24420c58
    ctx->pc = 0x2af604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3160));
    // 0x2af608: 0x431023
    ctx->pc = 0x2af608u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af60c: 0xa4820176
    ctx->pc = 0x2af60cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 374), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af610: 0x3c020000
    ctx->pc = 0x2af610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af614: 0x24420c80
    ctx->pc = 0x2af614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2af618: 0x431023
    ctx->pc = 0x2af618u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af61c: 0xa482017a
    ctx->pc = 0x2af61cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 378), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af620: 0x3c020000
    ctx->pc = 0x2af620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af624: 0x24420c98
    ctx->pc = 0x2af624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3224));
    // 0x2af628: 0x431023
    ctx->pc = 0x2af628u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af62c: 0xa482017e
    ctx->pc = 0x2af62cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 382), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af630: 0x3c020000
    ctx->pc = 0x2af630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af634: 0x24420c98
    ctx->pc = 0x2af634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3224));
    // 0x2af638: 0x431023
    ctx->pc = 0x2af638u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af63c: 0xa4820182
    ctx->pc = 0x2af63cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 386), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af640: 0x3c020000
    ctx->pc = 0x2af640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af644: 0x24420ca0
    ctx->pc = 0x2af644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3232));
    // 0x2af648: 0x431023
    ctx->pc = 0x2af648u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af64c: 0xa4820186
    ctx->pc = 0x2af64cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 390), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af650: 0x3c020000
    ctx->pc = 0x2af650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af654: 0x24420cb0
    ctx->pc = 0x2af654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x2af658: 0x431023
    ctx->pc = 0x2af658u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af65c: 0xa482018a
    ctx->pc = 0x2af65cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 394), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af660: 0x3c020000
    ctx->pc = 0x2af660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af664: 0x24420d40
    ctx->pc = 0x2af664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3392));
    // 0x2af668: 0x431023
    ctx->pc = 0x2af668u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af66c: 0xa482018e
    ctx->pc = 0x2af66cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 398), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af670: 0x3c020000
    ctx->pc = 0x2af670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af674: 0x24420d60
    ctx->pc = 0x2af674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2af678: 0x431023
    ctx->pc = 0x2af678u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af67c: 0xa4820192
    ctx->pc = 0x2af67cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 402), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af680: 0x3c020000
    ctx->pc = 0x2af680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af684: 0x24420d60
    ctx->pc = 0x2af684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2af688: 0x431023
    ctx->pc = 0x2af688u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af68c: 0xa4820196
    ctx->pc = 0x2af68cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 406), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af690: 0x3c040037
    ctx->pc = 0x2af690u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2af694: 0x24841908
    ctx->pc = 0x2af694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6408));
    // 0x2af698: 0x3c020000
    ctx->pc = 0x2af698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af69c: 0x24422478
    ctx->pc = 0x2af69cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2af6a0: 0x3c030000
    ctx->pc = 0x2af6a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2af6a4: 0x24630000
    ctx->pc = 0x2af6a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2af6a8: 0x431023
    ctx->pc = 0x2af6a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af6ac: 0xa482019a
    ctx->pc = 0x2af6acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 410), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af6b0: 0x3c020000
    ctx->pc = 0x2af6b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af6b4: 0x24420d60
    ctx->pc = 0x2af6b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2af6b8: 0x431023
    ctx->pc = 0x2af6b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af6bc: 0xa482019e
    ctx->pc = 0x2af6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 414), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af6c0: 0x3c020000
    ctx->pc = 0x2af6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af6c4: 0x24420ed8
    ctx->pc = 0x2af6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3800));
    // 0x2af6c8: 0x431023
    ctx->pc = 0x2af6c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af6cc: 0xa48201a2
    ctx->pc = 0x2af6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 418), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af6d0: 0x3c020000
    ctx->pc = 0x2af6d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af6d4: 0x24420d60
    ctx->pc = 0x2af6d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2af6d8: 0x431023
    ctx->pc = 0x2af6d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af6dc: 0xa48201a6
    ctx->pc = 0x2af6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 422), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af6e0: 0x3c020000
    ctx->pc = 0x2af6e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af6e4: 0x24421aa8
    ctx->pc = 0x2af6e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6824));
    // 0x2af6e8: 0x431023
    ctx->pc = 0x2af6e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af6ec: 0xa48201aa
    ctx->pc = 0x2af6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 426), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af6f0: 0x3c020000
    ctx->pc = 0x2af6f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af6f4: 0x24420d68
    ctx->pc = 0x2af6f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3432));
    // 0x2af6f8: 0x431023
    ctx->pc = 0x2af6f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af6fc: 0xa48201ae
    ctx->pc = 0x2af6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 430), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af700: 0x3c020000
    ctx->pc = 0x2af700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af704: 0x24420df0
    ctx->pc = 0x2af704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3568));
    // 0x2af708: 0x431023
    ctx->pc = 0x2af708u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af70c: 0xa48201b2
    ctx->pc = 0x2af70cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 434), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af710: 0x3c020000
    ctx->pc = 0x2af710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af714: 0x24420e20
    ctx->pc = 0x2af714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3616));
    // 0x2af718: 0x431023
    ctx->pc = 0x2af718u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af71c: 0xa48201b6
    ctx->pc = 0x2af71cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 438), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af720: 0x3c020000
    ctx->pc = 0x2af720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af724: 0x24420e40
    ctx->pc = 0x2af724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3648));
    // 0x2af728: 0x431023
    ctx->pc = 0x2af728u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af72c: 0xa48201ba
    ctx->pc = 0x2af72cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 442), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af730: 0x3c020000
    ctx->pc = 0x2af730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af734: 0x24420e88
    ctx->pc = 0x2af734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3720));
    // 0x2af738: 0x431023
    ctx->pc = 0x2af738u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af73c: 0xa48201be
    ctx->pc = 0x2af73cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 446), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af740: 0x3c020000
    ctx->pc = 0x2af740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af744: 0x24420ea8
    ctx->pc = 0x2af744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3752));
    // 0x2af748: 0x431023
    ctx->pc = 0x2af748u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af74c: 0xa48201c2
    ctx->pc = 0x2af74cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af750: 0x3c020000
    ctx->pc = 0x2af750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af754: 0x24420ec8
    ctx->pc = 0x2af754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3784));
    // 0x2af758: 0x431023
    ctx->pc = 0x2af758u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af75c: 0xa48201c6
    ctx->pc = 0x2af75cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 454), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af760: 0x3c020000
    ctx->pc = 0x2af760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af764: 0x24420ed8
    ctx->pc = 0x2af764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3800));
    // 0x2af768: 0x431023
    ctx->pc = 0x2af768u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af76c: 0xa48201ca
    ctx->pc = 0x2af76cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 458), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af770: 0x3c020000
    ctx->pc = 0x2af770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af774: 0x24420ed8
    ctx->pc = 0x2af774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3800));
    // 0x2af778: 0x431023
    ctx->pc = 0x2af778u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af77c: 0xa48201ce
    ctx->pc = 0x2af77cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 462), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af780: 0x3c020000
    ctx->pc = 0x2af780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af784: 0x24422478
    ctx->pc = 0x2af784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2af788: 0x431023
    ctx->pc = 0x2af788u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af78c: 0xa48201d2
    ctx->pc = 0x2af78cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 466), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af790: 0x3c020000
    ctx->pc = 0x2af790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af794: 0x24420ef8
    ctx->pc = 0x2af794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3832));
    // 0x2af798: 0x431023
    ctx->pc = 0x2af798u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af79c: 0xa48201d6
    ctx->pc = 0x2af79cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 470), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af7a0: 0x3c020000
    ctx->pc = 0x2af7a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af7a4: 0x24420f58
    ctx->pc = 0x2af7a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3928));
    // 0x2af7a8: 0x431023
    ctx->pc = 0x2af7a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af7ac: 0xa48201da
    ctx->pc = 0x2af7acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 474), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af7b0: 0x3c020000
    ctx->pc = 0x2af7b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af7b4: 0x24420f78
    ctx->pc = 0x2af7b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3960));
    // 0x2af7b8: 0x431023
    ctx->pc = 0x2af7b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af7bc: 0xa48201de
    ctx->pc = 0x2af7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 478), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af7c0: 0x3c020000
    ctx->pc = 0x2af7c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af7c4: 0x24420f98
    ctx->pc = 0x2af7c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3992));
    // 0x2af7c8: 0x431023
    ctx->pc = 0x2af7c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af7cc: 0xa48201e2
    ctx->pc = 0x2af7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 482), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af7d0: 0x3c020000
    ctx->pc = 0x2af7d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af7d4: 0x24420fe0
    ctx->pc = 0x2af7d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4064));
    // 0x2af7d8: 0x431023
    ctx->pc = 0x2af7d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af7dc: 0xa48201e6
    ctx->pc = 0x2af7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 486), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af7e0: 0x3c020000
    ctx->pc = 0x2af7e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af7e4: 0x24420ff8
    ctx->pc = 0x2af7e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4088));
    // 0x2af7e8: 0x431023
    ctx->pc = 0x2af7e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af7ec: 0xa48201ea
    ctx->pc = 0x2af7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 490), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af7f0: 0x3c020000
    ctx->pc = 0x2af7f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af7f4: 0x24421018
    ctx->pc = 0x2af7f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4120));
    // 0x2af7f8: 0x431023
    ctx->pc = 0x2af7f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af7fc: 0xa48201ee
    ctx->pc = 0x2af7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 494), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af800: 0x3c020000
    ctx->pc = 0x2af800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af804: 0x24421058
    ctx->pc = 0x2af804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4184));
    // 0x2af808: 0x431023
    ctx->pc = 0x2af808u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af80c: 0xa48201f2
    ctx->pc = 0x2af80cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 498), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af810: 0x3c020000
    ctx->pc = 0x2af810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af814: 0x24421130
    ctx->pc = 0x2af814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4400));
    // 0x2af818: 0x431023
    ctx->pc = 0x2af818u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af81c: 0xa48201f6
    ctx->pc = 0x2af81cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 502), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af820: 0x3c020000
    ctx->pc = 0x2af820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af824: 0x24421150
    ctx->pc = 0x2af824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4432));
    // 0x2af828: 0x431023
    ctx->pc = 0x2af828u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af82c: 0xa48201fa
    ctx->pc = 0x2af82cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af830: 0x3c020000
    ctx->pc = 0x2af830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af834: 0x244211e8
    ctx->pc = 0x2af834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4584));
    // 0x2af838: 0x431023
    ctx->pc = 0x2af838u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af83c: 0xa48201fe
    ctx->pc = 0x2af83cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 510), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af840: 0x3c020000
    ctx->pc = 0x2af840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af844: 0x24421200
    ctx->pc = 0x2af844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2af848: 0x431023
    ctx->pc = 0x2af848u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af84c: 0xa4820202
    ctx->pc = 0x2af84cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 514), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af850: 0x3c020000
    ctx->pc = 0x2af850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af854: 0x24421220
    ctx->pc = 0x2af854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4640));
    // 0x2af858: 0x431023
    ctx->pc = 0x2af858u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af85c: 0xa4820206
    ctx->pc = 0x2af85cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 518), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af860: 0x3c020000
    ctx->pc = 0x2af860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af864: 0x24421230
    ctx->pc = 0x2af864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4656));
    // 0x2af868: 0x431023
    ctx->pc = 0x2af868u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af86c: 0xa482020a
    ctx->pc = 0x2af86cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 522), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af870: 0x3c020000
    ctx->pc = 0x2af870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af874: 0x24421258
    ctx->pc = 0x2af874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4696));
    // 0x2af878: 0x431023
    ctx->pc = 0x2af878u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af87c: 0xa482020e
    ctx->pc = 0x2af87cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 526), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af880: 0x3c020000
    ctx->pc = 0x2af880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af884: 0x24421288
    ctx->pc = 0x2af884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4744));
    // 0x2af888: 0x431023
    ctx->pc = 0x2af888u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af88c: 0xa4820212
    ctx->pc = 0x2af88cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 530), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af890: 0x3c020000
    ctx->pc = 0x2af890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af894: 0x24421298
    ctx->pc = 0x2af894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4760));
    // 0x2af898: 0x431023
    ctx->pc = 0x2af898u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af89c: 0xa4820216
    ctx->pc = 0x2af89cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 534), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af8a0: 0x3c020000
    ctx->pc = 0x2af8a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af8a4: 0x244212e8
    ctx->pc = 0x2af8a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4840));
    // 0x2af8a8: 0x431023
    ctx->pc = 0x2af8a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af8ac: 0xa482021a
    ctx->pc = 0x2af8acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 538), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af8b0: 0x3c020000
    ctx->pc = 0x2af8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af8b4: 0x24421308
    ctx->pc = 0x2af8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4872));
    // 0x2af8b8: 0x431023
    ctx->pc = 0x2af8b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af8bc: 0xa482021e
    ctx->pc = 0x2af8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 542), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af8c0: 0x3c020000
    ctx->pc = 0x2af8c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af8c4: 0x24421318
    ctx->pc = 0x2af8c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4888));
    // 0x2af8c8: 0x431023
    ctx->pc = 0x2af8c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af8cc: 0xa4820222
    ctx->pc = 0x2af8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af8d0: 0x3c020000
    ctx->pc = 0x2af8d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af8d4: 0x24421360
    ctx->pc = 0x2af8d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4960));
    // 0x2af8d8: 0x431023
    ctx->pc = 0x2af8d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af8dc: 0xa4820226
    ctx->pc = 0x2af8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 550), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af8e0: 0x3c020000
    ctx->pc = 0x2af8e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af8e4: 0x24421380
    ctx->pc = 0x2af8e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4992));
    // 0x2af8e8: 0x431023
    ctx->pc = 0x2af8e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af8ec: 0xa482022a
    ctx->pc = 0x2af8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af8f0: 0x3c020000
    ctx->pc = 0x2af8f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af8f4: 0x244213a8
    ctx->pc = 0x2af8f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5032));
    // 0x2af8f8: 0x431023
    ctx->pc = 0x2af8f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af8fc: 0xa482022e
    ctx->pc = 0x2af8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af900: 0x3c020000
    ctx->pc = 0x2af900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af904: 0x244213c8
    ctx->pc = 0x2af904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5064));
    // 0x2af908: 0x431023
    ctx->pc = 0x2af908u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af90c: 0xa4820232
    ctx->pc = 0x2af90cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 562), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af910: 0x3c020000
    ctx->pc = 0x2af910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af914: 0x244213c8
    ctx->pc = 0x2af914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5064));
    // 0x2af918: 0x431023
    ctx->pc = 0x2af918u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af91c: 0xa4820236
    ctx->pc = 0x2af91cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 566), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af920: 0x3c020000
    ctx->pc = 0x2af920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af924: 0x24421410
    ctx->pc = 0x2af924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5136));
    // 0x2af928: 0x431023
    ctx->pc = 0x2af928u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af92c: 0xa482023a
    ctx->pc = 0x2af92cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 570), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af930: 0x3c020000
    ctx->pc = 0x2af930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af934: 0x24421440
    ctx->pc = 0x2af934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5184));
    // 0x2af938: 0x431023
    ctx->pc = 0x2af938u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af93c: 0xa482023e
    ctx->pc = 0x2af93cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 574), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af940: 0x3c020000
    ctx->pc = 0x2af940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af944: 0x24421460
    ctx->pc = 0x2af944u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5216));
    // 0x2af948: 0x431023
    ctx->pc = 0x2af948u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af94c: 0xa4820242
    ctx->pc = 0x2af94cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af950: 0x3c020000
    ctx->pc = 0x2af950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af954: 0x244214d0
    ctx->pc = 0x2af954u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2af958: 0x431023
    ctx->pc = 0x2af958u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af95c: 0xa4820246
    ctx->pc = 0x2af95cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af960: 0x3c020000
    ctx->pc = 0x2af960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af964: 0x244214f0
    ctx->pc = 0x2af964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5360));
    // 0x2af968: 0x431023
    ctx->pc = 0x2af968u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af96c: 0xa482024a
    ctx->pc = 0x2af96cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 586), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af970: 0x3c020000
    ctx->pc = 0x2af970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af974: 0x24421540
    ctx->pc = 0x2af974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5440));
    // 0x2af978: 0x431023
    ctx->pc = 0x2af978u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af97c: 0xa482024e
    ctx->pc = 0x2af97cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 590), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af980: 0x3c020000
    ctx->pc = 0x2af980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af984: 0x24421560
    ctx->pc = 0x2af984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5472));
    // 0x2af988: 0x431023
    ctx->pc = 0x2af988u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af98c: 0xa4820252
    ctx->pc = 0x2af98cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af990: 0x3c020000
    ctx->pc = 0x2af990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af994: 0x24421580
    ctx->pc = 0x2af994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5504));
    // 0x2af998: 0x431023
    ctx->pc = 0x2af998u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af99c: 0xa4820256
    ctx->pc = 0x2af99cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 598), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af9a0: 0x3c020000
    ctx->pc = 0x2af9a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af9a4: 0x244215a0
    ctx->pc = 0x2af9a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5536));
    // 0x2af9a8: 0x431023
    ctx->pc = 0x2af9a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af9ac: 0xa482025a
    ctx->pc = 0x2af9acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 602), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af9b0: 0x3c020000
    ctx->pc = 0x2af9b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af9b4: 0x244215c8
    ctx->pc = 0x2af9b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5576));
    // 0x2af9b8: 0x431023
    ctx->pc = 0x2af9b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af9bc: 0xa482025e
    ctx->pc = 0x2af9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 606), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af9c0: 0x3c020000
    ctx->pc = 0x2af9c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af9c4: 0x244215e8
    ctx->pc = 0x2af9c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5608));
    // 0x2af9c8: 0x431023
    ctx->pc = 0x2af9c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af9cc: 0xa4820262
    ctx->pc = 0x2af9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 610), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af9d0: 0x3c020000
    ctx->pc = 0x2af9d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af9d4: 0x24421630
    ctx->pc = 0x2af9d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5680));
    // 0x2af9d8: 0x431023
    ctx->pc = 0x2af9d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af9dc: 0xa4820266
    ctx->pc = 0x2af9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af9e0: 0x3c020000
    ctx->pc = 0x2af9e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af9e4: 0x24421650
    ctx->pc = 0x2af9e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5712));
    // 0x2af9e8: 0x431023
    ctx->pc = 0x2af9e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af9ec: 0xa482026a
    ctx->pc = 0x2af9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 618), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af9f0: 0x3c020000
    ctx->pc = 0x2af9f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2af9f4: 0x24421658
    ctx->pc = 0x2af9f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5720));
    // 0x2af9f8: 0x431023
    ctx->pc = 0x2af9f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af9fc: 0xa482026e
    ctx->pc = 0x2af9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 622), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa00: 0x3c020000
    ctx->pc = 0x2afa00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa04: 0x24421668
    ctx->pc = 0x2afa04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5736));
    // 0x2afa08: 0x431023
    ctx->pc = 0x2afa08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa0c: 0xa4820272
    ctx->pc = 0x2afa0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 626), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa10: 0x3c020000
    ctx->pc = 0x2afa10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa14: 0x24421690
    ctx->pc = 0x2afa14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5776));
    // 0x2afa18: 0x431023
    ctx->pc = 0x2afa18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa1c: 0xa4820276
    ctx->pc = 0x2afa1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 630), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa20: 0x3c020000
    ctx->pc = 0x2afa20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa24: 0x244216b0
    ctx->pc = 0x2afa24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5808));
    // 0x2afa28: 0x431023
    ctx->pc = 0x2afa28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa2c: 0xa482027a
    ctx->pc = 0x2afa2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 634), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa30: 0x3c020000
    ctx->pc = 0x2afa30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa34: 0x244216b8
    ctx->pc = 0x2afa34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5816));
    // 0x2afa38: 0x431023
    ctx->pc = 0x2afa38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa3c: 0xa482027e
    ctx->pc = 0x2afa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 638), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa40: 0x3c020000
    ctx->pc = 0x2afa40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa44: 0x244216d8
    ctx->pc = 0x2afa44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5848));
    // 0x2afa48: 0x431023
    ctx->pc = 0x2afa48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa4c: 0xa4820282
    ctx->pc = 0x2afa4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 642), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa50: 0x3c020000
    ctx->pc = 0x2afa50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa54: 0x244216f8
    ctx->pc = 0x2afa54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5880));
    // 0x2afa58: 0x431023
    ctx->pc = 0x2afa58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa5c: 0xa4820286
    ctx->pc = 0x2afa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 646), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa60: 0x3c020000
    ctx->pc = 0x2afa60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa64: 0x244217e8
    ctx->pc = 0x2afa64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6120));
    // 0x2afa68: 0x431023
    ctx->pc = 0x2afa68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa6c: 0xa482028a
    ctx->pc = 0x2afa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 650), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa70: 0x3c020000
    ctx->pc = 0x2afa70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa74: 0x244216f8
    ctx->pc = 0x2afa74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5880));
    // 0x2afa78: 0x431023
    ctx->pc = 0x2afa78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa7c: 0xa482028e
    ctx->pc = 0x2afa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 654), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa80: 0x3c020000
    ctx->pc = 0x2afa80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa84: 0x24421718
    ctx->pc = 0x2afa84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5912));
    // 0x2afa88: 0x431023
    ctx->pc = 0x2afa88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa8c: 0xa4820292
    ctx->pc = 0x2afa8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 658), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afa90: 0x3c020000
    ctx->pc = 0x2afa90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afa94: 0x24421730
    ctx->pc = 0x2afa94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5936));
    // 0x2afa98: 0x431023
    ctx->pc = 0x2afa98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afa9c: 0xa4820296
    ctx->pc = 0x2afa9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 662), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afaa0: 0x3c020000
    ctx->pc = 0x2afaa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afaa4: 0x24421740
    ctx->pc = 0x2afaa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5952));
    // 0x2afaa8: 0x431023
    ctx->pc = 0x2afaa8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afaac: 0xa482029a
    ctx->pc = 0x2afaacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 666), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afab0: 0x3c020000
    ctx->pc = 0x2afab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afab4: 0x24421760
    ctx->pc = 0x2afab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5984));
    // 0x2afab8: 0x431023
    ctx->pc = 0x2afab8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afabc: 0xa482029e
    ctx->pc = 0x2afabcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 670), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afac0: 0x3c020000
    ctx->pc = 0x2afac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afac4: 0x24421778
    ctx->pc = 0x2afac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6008));
    // 0x2afac8: 0x431023
    ctx->pc = 0x2afac8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afacc: 0xa48202a2
    ctx->pc = 0x2afaccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 674), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afad0: 0x3c020000
    ctx->pc = 0x2afad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afad4: 0x24421798
    ctx->pc = 0x2afad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6040));
    // 0x2afad8: 0x431023
    ctx->pc = 0x2afad8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afadc: 0xa48202a6
    ctx->pc = 0x2afadcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 678), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afae0: 0x3c020000
    ctx->pc = 0x2afae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afae4: 0x244217b8
    ctx->pc = 0x2afae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6072));
    // 0x2afae8: 0x431023
    ctx->pc = 0x2afae8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afaec: 0xa48202aa
    ctx->pc = 0x2afaecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 682), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afaf0: 0x3c020000
    ctx->pc = 0x2afaf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afaf4: 0x244217d8
    ctx->pc = 0x2afaf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6104));
    // 0x2afaf8: 0x431023
    ctx->pc = 0x2afaf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afafc: 0xa48202ae
    ctx->pc = 0x2afafcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 686), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb00: 0x3c020000
    ctx->pc = 0x2afb00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb04: 0x244217e8
    ctx->pc = 0x2afb04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6120));
    // 0x2afb08: 0x431023
    ctx->pc = 0x2afb08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb0c: 0xa48202b2
    ctx->pc = 0x2afb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 690), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb10: 0x3c020000
    ctx->pc = 0x2afb10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb14: 0x24421800
    ctx->pc = 0x2afb14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6144));
    // 0x2afb18: 0x431023
    ctx->pc = 0x2afb18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb1c: 0xa48202b6
    ctx->pc = 0x2afb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 694), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb20: 0x3c020000
    ctx->pc = 0x2afb20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb24: 0x24421820
    ctx->pc = 0x2afb24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6176));
    // 0x2afb28: 0x431023
    ctx->pc = 0x2afb28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb2c: 0xa48202ba
    ctx->pc = 0x2afb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 698), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb30: 0x3c020000
    ctx->pc = 0x2afb30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb34: 0x24421848
    ctx->pc = 0x2afb34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6216));
    // 0x2afb38: 0x431023
    ctx->pc = 0x2afb38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb3c: 0xa48202be
    ctx->pc = 0x2afb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 702), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb40: 0x3c020000
    ctx->pc = 0x2afb40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb44: 0x24421868
    ctx->pc = 0x2afb44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6248));
    // 0x2afb48: 0x431023
    ctx->pc = 0x2afb48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb4c: 0xa48202c2
    ctx->pc = 0x2afb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 706), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb50: 0x3c020000
    ctx->pc = 0x2afb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb54: 0x24421890
    ctx->pc = 0x2afb54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6288));
    // 0x2afb58: 0x431023
    ctx->pc = 0x2afb58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb5c: 0xa48202c6
    ctx->pc = 0x2afb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 710), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb60: 0x3c020000
    ctx->pc = 0x2afb60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb64: 0x244218b8
    ctx->pc = 0x2afb64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6328));
    // 0x2afb68: 0x431023
    ctx->pc = 0x2afb68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb6c: 0xa48202ca
    ctx->pc = 0x2afb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 714), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb70: 0x3c020000
    ctx->pc = 0x2afb70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb74: 0x244218d8
    ctx->pc = 0x2afb74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6360));
    // 0x2afb78: 0x431023
    ctx->pc = 0x2afb78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb7c: 0xa48202ce
    ctx->pc = 0x2afb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb80: 0x3c020000
    ctx->pc = 0x2afb80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb84: 0x24421970
    ctx->pc = 0x2afb84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6512));
    // 0x2afb88: 0x431023
    ctx->pc = 0x2afb88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb8c: 0xa48202d2
    ctx->pc = 0x2afb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 722), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afb90: 0x3c020000
    ctx->pc = 0x2afb90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afb94: 0x24421980
    ctx->pc = 0x2afb94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6528));
    // 0x2afb98: 0x431023
    ctx->pc = 0x2afb98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afb9c: 0xa48202d6
    ctx->pc = 0x2afb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 726), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afba0: 0x3c020000
    ctx->pc = 0x2afba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afba4: 0x244219a0
    ctx->pc = 0x2afba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6560));
    // 0x2afba8: 0x431023
    ctx->pc = 0x2afba8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afbac: 0xa48202da
    ctx->pc = 0x2afbacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 730), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afbb0: 0x3c020000
    ctx->pc = 0x2afbb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afbb4: 0x24421a48
    ctx->pc = 0x2afbb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6728));
    // 0x2afbb8: 0x431023
    ctx->pc = 0x2afbb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afbbc: 0xa48202de
    ctx->pc = 0x2afbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afbc0: 0x3c020000
    ctx->pc = 0x2afbc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afbc4: 0x24421a58
    ctx->pc = 0x2afbc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6744));
    // 0x2afbc8: 0x431023
    ctx->pc = 0x2afbc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afbcc: 0xa48202e2
    ctx->pc = 0x2afbccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 738), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afbd0: 0x3c020000
    ctx->pc = 0x2afbd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afbd4: 0x24421a88
    ctx->pc = 0x2afbd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6792));
    // 0x2afbd8: 0x431023
    ctx->pc = 0x2afbd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afbdc: 0xa48202e6
    ctx->pc = 0x2afbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afbe0: 0x3c020000
    ctx->pc = 0x2afbe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afbe4: 0x24421aa8
    ctx->pc = 0x2afbe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6824));
    // 0x2afbe8: 0x431023
    ctx->pc = 0x2afbe8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afbec: 0xa48202ea
    ctx->pc = 0x2afbecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 746), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afbf0: 0x3c020000
    ctx->pc = 0x2afbf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afbf4: 0x24421aa8
    ctx->pc = 0x2afbf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6824));
    // 0x2afbf8: 0x431023
    ctx->pc = 0x2afbf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afbfc: 0xa48202ee
    ctx->pc = 0x2afbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 750), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc00: 0x3c020000
    ctx->pc = 0x2afc00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc04: 0x24422478
    ctx->pc = 0x2afc04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2afc08: 0x431023
    ctx->pc = 0x2afc08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc0c: 0xa48202f2
    ctx->pc = 0x2afc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 754), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc10: 0x3c020000
    ctx->pc = 0x2afc10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc14: 0x24421ac8
    ctx->pc = 0x2afc14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6856));
    // 0x2afc18: 0x431023
    ctx->pc = 0x2afc18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc1c: 0xa48202f6
    ctx->pc = 0x2afc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 758), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc20: 0x3c020000
    ctx->pc = 0x2afc20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc24: 0x24421ae0
    ctx->pc = 0x2afc24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6880));
    // 0x2afc28: 0x431023
    ctx->pc = 0x2afc28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc2c: 0xa48202fa
    ctx->pc = 0x2afc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 762), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc30: 0x3c020000
    ctx->pc = 0x2afc30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc34: 0x24421ae0
    ctx->pc = 0x2afc34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6880));
    // 0x2afc38: 0x431023
    ctx->pc = 0x2afc38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc3c: 0xa48202fe
    ctx->pc = 0x2afc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 766), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc40: 0x3c020000
    ctx->pc = 0x2afc40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc44: 0x24421b00
    ctx->pc = 0x2afc44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6912));
    // 0x2afc48: 0x431023
    ctx->pc = 0x2afc48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc4c: 0xa4820302
    ctx->pc = 0x2afc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 770), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc50: 0x3c020000
    ctx->pc = 0x2afc50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc54: 0x24421b60
    ctx->pc = 0x2afc54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7008));
    // 0x2afc58: 0x431023
    ctx->pc = 0x2afc58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc5c: 0xa4820306
    ctx->pc = 0x2afc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 774), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc60: 0x3c020000
    ctx->pc = 0x2afc60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc64: 0x24421b80
    ctx->pc = 0x2afc64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7040));
    // 0x2afc68: 0x431023
    ctx->pc = 0x2afc68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc6c: 0xa482030a
    ctx->pc = 0x2afc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 778), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc70: 0x3c020000
    ctx->pc = 0x2afc70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc74: 0x24421ba0
    ctx->pc = 0x2afc74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7072));
    // 0x2afc78: 0x431023
    ctx->pc = 0x2afc78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc7c: 0xa482030e
    ctx->pc = 0x2afc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 782), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc80: 0x3c020000
    ctx->pc = 0x2afc80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc84: 0x24421be8
    ctx->pc = 0x2afc84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7144));
    // 0x2afc88: 0x431023
    ctx->pc = 0x2afc88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc8c: 0xa4820312
    ctx->pc = 0x2afc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 786), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afc90: 0x3c020000
    ctx->pc = 0x2afc90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afc94: 0x24421c00
    ctx->pc = 0x2afc94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7168));
    // 0x2afc98: 0x431023
    ctx->pc = 0x2afc98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afc9c: 0xa4820316
    ctx->pc = 0x2afc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 790), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afca0: 0x3c020000
    ctx->pc = 0x2afca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afca4: 0x24421c20
    ctx->pc = 0x2afca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7200));
    // 0x2afca8: 0x431023
    ctx->pc = 0x2afca8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afcac: 0xa482031a
    ctx->pc = 0x2afcacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 794), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afcb0: 0x3c020000
    ctx->pc = 0x2afcb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afcb4: 0x24421c28
    ctx->pc = 0x2afcb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7208));
    // 0x2afcb8: 0x431023
    ctx->pc = 0x2afcb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afcbc: 0xa482031e
    ctx->pc = 0x2afcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 798), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afcc0: 0x3c020000
    ctx->pc = 0x2afcc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afcc4: 0x24421d00
    ctx->pc = 0x2afcc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7424));
    // 0x2afcc8: 0x431023
    ctx->pc = 0x2afcc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afccc: 0xa4820322
    ctx->pc = 0x2afcccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 802), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afcd0: 0x3c020000
    ctx->pc = 0x2afcd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afcd4: 0x24421d20
    ctx->pc = 0x2afcd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7456));
    // 0x2afcd8: 0x431023
    ctx->pc = 0x2afcd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afcdc: 0xa4820326
    ctx->pc = 0x2afcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 806), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afce0: 0x3c050037
    ctx->pc = 0x2afce0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2afce4: 0x24a51908
    ctx->pc = 0x2afce4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6408));
    // 0x2afce8: 0x3c020000
    ctx->pc = 0x2afce8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afcec: 0x24421db8
    ctx->pc = 0x2afcecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7608));
    // 0x2afcf0: 0x3c030000
    ctx->pc = 0x2afcf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2afcf4: 0x24630000
    ctx->pc = 0x2afcf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2afcf8: 0x431023
    ctx->pc = 0x2afcf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afcfc: 0xa4a2032a
    ctx->pc = 0x2afcfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 810), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd00: 0x3c020000
    ctx->pc = 0x2afd00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd04: 0x24421dd0
    ctx->pc = 0x2afd04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7632));
    // 0x2afd08: 0x431023
    ctx->pc = 0x2afd08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd0c: 0xa4a2032e
    ctx->pc = 0x2afd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 814), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd10: 0x3c020000
    ctx->pc = 0x2afd10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd14: 0x24421df0
    ctx->pc = 0x2afd14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7664));
    // 0x2afd18: 0x431023
    ctx->pc = 0x2afd18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd1c: 0xa4a20332
    ctx->pc = 0x2afd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 818), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd20: 0x3c020000
    ctx->pc = 0x2afd20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd24: 0x24421e00
    ctx->pc = 0x2afd24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7680));
    // 0x2afd28: 0x431023
    ctx->pc = 0x2afd28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd2c: 0xa4a20336
    ctx->pc = 0x2afd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 822), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd30: 0x3c020000
    ctx->pc = 0x2afd30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd34: 0x24421e28
    ctx->pc = 0x2afd34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7720));
    // 0x2afd38: 0x431023
    ctx->pc = 0x2afd38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd3c: 0xa4a2033a
    ctx->pc = 0x2afd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 826), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd40: 0x3c020000
    ctx->pc = 0x2afd40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd44: 0x24421e50
    ctx->pc = 0x2afd44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7760));
    // 0x2afd48: 0x431023
    ctx->pc = 0x2afd48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd4c: 0xa4a2033e
    ctx->pc = 0x2afd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 830), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd50: 0x3c020000
    ctx->pc = 0x2afd50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd54: 0x24421e60
    ctx->pc = 0x2afd54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7776));
    // 0x2afd58: 0x431023
    ctx->pc = 0x2afd58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd5c: 0xa4a20342
    ctx->pc = 0x2afd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 834), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd60: 0x3c020000
    ctx->pc = 0x2afd60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd64: 0x24421eb0
    ctx->pc = 0x2afd64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7856));
    // 0x2afd68: 0x431023
    ctx->pc = 0x2afd68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd6c: 0xa4a20346
    ctx->pc = 0x2afd6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 838), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd70: 0x3c020000
    ctx->pc = 0x2afd70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd74: 0x24421ed0
    ctx->pc = 0x2afd74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7888));
    // 0x2afd78: 0x431023
    ctx->pc = 0x2afd78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd7c: 0xa4a2034a
    ctx->pc = 0x2afd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 842), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd80: 0x3c020000
    ctx->pc = 0x2afd80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd84: 0x24421ee0
    ctx->pc = 0x2afd84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7904));
    // 0x2afd88: 0x431023
    ctx->pc = 0x2afd88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd8c: 0xa4a2034e
    ctx->pc = 0x2afd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 846), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afd90: 0x3c020000
    ctx->pc = 0x2afd90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afd94: 0x24421f28
    ctx->pc = 0x2afd94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7976));
    // 0x2afd98: 0x431023
    ctx->pc = 0x2afd98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd9c: 0xa4a20352
    ctx->pc = 0x2afd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 850), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afda0: 0x3c020000
    ctx->pc = 0x2afda0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afda4: 0x24421f48
    ctx->pc = 0x2afda4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8008));
    // 0x2afda8: 0x431023
    ctx->pc = 0x2afda8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afdac: 0xa4a20356
    ctx->pc = 0x2afdacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 854), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afdb0: 0x3c020000
    ctx->pc = 0x2afdb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afdb4: 0x24421f70
    ctx->pc = 0x2afdb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8048));
    // 0x2afdb8: 0x431023
    ctx->pc = 0x2afdb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afdbc: 0xa4a2035a
    ctx->pc = 0x2afdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 858), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afdc0: 0x3c020000
    ctx->pc = 0x2afdc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afdc4: 0x24421f90
    ctx->pc = 0x2afdc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8080));
    // 0x2afdc8: 0x431023
    ctx->pc = 0x2afdc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afdcc: 0xa4a2035e
    ctx->pc = 0x2afdccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 862), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afdd0: 0x3c020000
    ctx->pc = 0x2afdd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afdd4: 0x24421fe8
    ctx->pc = 0x2afdd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8168));
    // 0x2afdd8: 0x431023
    ctx->pc = 0x2afdd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afddc: 0xa4a20362
    ctx->pc = 0x2afddcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 866), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afde0: 0x3c020000
    ctx->pc = 0x2afde0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afde4: 0x24422010
    ctx->pc = 0x2afde4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8208));
    // 0x2afde8: 0x431023
    ctx->pc = 0x2afde8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afdec: 0xa4a20366
    ctx->pc = 0x2afdecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 870), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afdf0: 0x3c020000
    ctx->pc = 0x2afdf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afdf4: 0x24422080
    ctx->pc = 0x2afdf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8320));
    // 0x2afdf8: 0x431023
    ctx->pc = 0x2afdf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afdfc: 0xa4a2036a
    ctx->pc = 0x2afdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 874), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe00: 0x3c020000
    ctx->pc = 0x2afe00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe04: 0x244220a0
    ctx->pc = 0x2afe04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8352));
    // 0x2afe08: 0x431023
    ctx->pc = 0x2afe08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe0c: 0xa4a2036e
    ctx->pc = 0x2afe0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 878), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe10: 0x3c020000
    ctx->pc = 0x2afe10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe14: 0x244220f0
    ctx->pc = 0x2afe14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8432));
    // 0x2afe18: 0x431023
    ctx->pc = 0x2afe18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe1c: 0xa4a20372
    ctx->pc = 0x2afe1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 882), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe20: 0x3c020000
    ctx->pc = 0x2afe20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe24: 0x24422110
    ctx->pc = 0x2afe24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8464));
    // 0x2afe28: 0x431023
    ctx->pc = 0x2afe28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe2c: 0xa4a20376
    ctx->pc = 0x2afe2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 886), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe30: 0x3c020000
    ctx->pc = 0x2afe30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe34: 0x24422130
    ctx->pc = 0x2afe34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8496));
    // 0x2afe38: 0x431023
    ctx->pc = 0x2afe38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe3c: 0xa4a2037a
    ctx->pc = 0x2afe3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 890), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe40: 0x3c020000
    ctx->pc = 0x2afe40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe44: 0x24422150
    ctx->pc = 0x2afe44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8528));
    // 0x2afe48: 0x431023
    ctx->pc = 0x2afe48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe4c: 0xa4a2037e
    ctx->pc = 0x2afe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 894), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe50: 0x3c020000
    ctx->pc = 0x2afe50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe54: 0x24422178
    ctx->pc = 0x2afe54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8568));
    // 0x2afe58: 0x431023
    ctx->pc = 0x2afe58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe5c: 0xa4a20382
    ctx->pc = 0x2afe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 898), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe60: 0x3c020000
    ctx->pc = 0x2afe60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe64: 0x24422198
    ctx->pc = 0x2afe64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8600));
    // 0x2afe68: 0x431023
    ctx->pc = 0x2afe68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe6c: 0xa4a20386
    ctx->pc = 0x2afe6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 902), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe70: 0x3c020000
    ctx->pc = 0x2afe70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe74: 0x244221e0
    ctx->pc = 0x2afe74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8672));
    // 0x2afe78: 0x431023
    ctx->pc = 0x2afe78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe7c: 0xa4a2038a
    ctx->pc = 0x2afe7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 906), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe80: 0x3c020000
    ctx->pc = 0x2afe80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe84: 0x24422200
    ctx->pc = 0x2afe84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8704));
    // 0x2afe88: 0x431023
    ctx->pc = 0x2afe88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe8c: 0xa4a2038e
    ctx->pc = 0x2afe8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 910), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afe90: 0x3c020000
    ctx->pc = 0x2afe90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afe94: 0x24422208
    ctx->pc = 0x2afe94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8712));
    // 0x2afe98: 0x431023
    ctx->pc = 0x2afe98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afe9c: 0xa4a20392
    ctx->pc = 0x2afe9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 914), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afea0: 0x3c020000
    ctx->pc = 0x2afea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afea4: 0x24422218
    ctx->pc = 0x2afea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8728));
    // 0x2afea8: 0x431023
    ctx->pc = 0x2afea8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afeac: 0xa4a20396
    ctx->pc = 0x2afeacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 918), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afeb0: 0x3c020000
    ctx->pc = 0x2afeb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afeb4: 0x24422240
    ctx->pc = 0x2afeb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8768));
    // 0x2afeb8: 0x431023
    ctx->pc = 0x2afeb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afebc: 0xa4a2039a
    ctx->pc = 0x2afebcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 922), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afec0: 0x3c020000
    ctx->pc = 0x2afec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afec4: 0x24422260
    ctx->pc = 0x2afec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8800));
    // 0x2afec8: 0x431023
    ctx->pc = 0x2afec8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afecc: 0xa4a2039e
    ctx->pc = 0x2afeccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 926), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afed0: 0x3c020000
    ctx->pc = 0x2afed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afed4: 0x24422268
    ctx->pc = 0x2afed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8808));
    // 0x2afed8: 0x431023
    ctx->pc = 0x2afed8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afedc: 0xa4a203a2
    ctx->pc = 0x2afedcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 930), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afee0: 0x3c020000
    ctx->pc = 0x2afee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afee4: 0x24422288
    ctx->pc = 0x2afee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8840));
    // 0x2afee8: 0x431023
    ctx->pc = 0x2afee8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afeec: 0xa4a203a6
    ctx->pc = 0x2afeecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 934), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afef0: 0x3c020000
    ctx->pc = 0x2afef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afef4: 0x244222a8
    ctx->pc = 0x2afef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8872));
    // 0x2afef8: 0x431023
    ctx->pc = 0x2afef8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afefc: 0xa4a203aa
    ctx->pc = 0x2afefcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 938), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff00: 0x3c020000
    ctx->pc = 0x2aff00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff04: 0x244223b8
    ctx->pc = 0x2aff04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9144));
    // 0x2aff08: 0x431023
    ctx->pc = 0x2aff08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff0c: 0xa4a203ae
    ctx->pc = 0x2aff0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 942), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff10: 0x3c020000
    ctx->pc = 0x2aff10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff14: 0x244222a8
    ctx->pc = 0x2aff14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8872));
    // 0x2aff18: 0x431023
    ctx->pc = 0x2aff18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff1c: 0xa4a203b2
    ctx->pc = 0x2aff1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 946), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff20: 0x3c020000
    ctx->pc = 0x2aff20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff24: 0x244222c8
    ctx->pc = 0x2aff24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8904));
    // 0x2aff28: 0x431023
    ctx->pc = 0x2aff28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff2c: 0xa4a203b6
    ctx->pc = 0x2aff2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 950), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff30: 0x3c020000
    ctx->pc = 0x2aff30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff34: 0x24422300
    ctx->pc = 0x2aff34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8960));
    // 0x2aff38: 0x431023
    ctx->pc = 0x2aff38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff3c: 0xa4a203ba
    ctx->pc = 0x2aff3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 954), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff40: 0x3c020000
    ctx->pc = 0x2aff40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff44: 0x24422320
    ctx->pc = 0x2aff44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8992));
    // 0x2aff48: 0x431023
    ctx->pc = 0x2aff48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff4c: 0xa4a203be
    ctx->pc = 0x2aff4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 958), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff50: 0x3c020000
    ctx->pc = 0x2aff50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff54: 0x24422340
    ctx->pc = 0x2aff54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9024));
    // 0x2aff58: 0x431023
    ctx->pc = 0x2aff58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff5c: 0xa4a203c2
    ctx->pc = 0x2aff5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 962), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff60: 0x3c020000
    ctx->pc = 0x2aff60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff64: 0x24422360
    ctx->pc = 0x2aff64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9056));
    // 0x2aff68: 0x431023
    ctx->pc = 0x2aff68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff6c: 0xa4a203c6
    ctx->pc = 0x2aff6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 966), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff70: 0x3c020000
    ctx->pc = 0x2aff70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff74: 0x24422380
    ctx->pc = 0x2aff74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9088));
    // 0x2aff78: 0x431023
    ctx->pc = 0x2aff78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff7c: 0xa4a203ca
    ctx->pc = 0x2aff7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 970), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff80: 0x3c020000
    ctx->pc = 0x2aff80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff84: 0x244223a0
    ctx->pc = 0x2aff84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9120));
    // 0x2aff88: 0x431023
    ctx->pc = 0x2aff88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff8c: 0xa4a203ce
    ctx->pc = 0x2aff8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 974), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aff90: 0x3c020000
    ctx->pc = 0x2aff90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2aff94: 0x244223b8
    ctx->pc = 0x2aff94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9144));
    // 0x2aff98: 0x431023
    ctx->pc = 0x2aff98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aff9c: 0xa4a203d2
    ctx->pc = 0x2aff9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 978), (uint16_t)GPR_U32(ctx, 2));
    // 0x2affa0: 0x3c020000
    ctx->pc = 0x2affa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2affa4: 0x244223b8
    ctx->pc = 0x2affa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9144));
    // 0x2affa8: 0x431023
    ctx->pc = 0x2affa8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2affac: 0xa4a203d6
    ctx->pc = 0x2affacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 982), (uint16_t)GPR_U32(ctx, 2));
    // 0x2affb0: 0x3c020000
    ctx->pc = 0x2affb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2affb4: 0x244223c0
    ctx->pc = 0x2affb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9152));
    // 0x2affb8: 0x431023
    ctx->pc = 0x2affb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2affbc: 0xa4a203da
    ctx->pc = 0x2affbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 986), (uint16_t)GPR_U32(ctx, 2));
    // 0x2affc0: 0x3c020000
    ctx->pc = 0x2affc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2affc4: 0x244223e0
    ctx->pc = 0x2affc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9184));
    // 0x2affc8: 0x431023
    ctx->pc = 0x2affc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2affcc: 0xa4a203de
    ctx->pc = 0x2affccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 990), (uint16_t)GPR_U32(ctx, 2));
    // 0x2affd0: 0x3c020000
    ctx->pc = 0x2affd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2affd4: 0x24422478
    ctx->pc = 0x2affd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2affd8: 0x431023
    ctx->pc = 0x2affd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2affdc: 0xa4a203e2
    ctx->pc = 0x2affdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 994), (uint16_t)GPR_U32(ctx, 2));
    // 0x2affe0: 0x3c020000
    ctx->pc = 0x2affe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2affe4: 0x24422478
    ctx->pc = 0x2affe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2affe8: 0x431023
    ctx->pc = 0x2affe8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2affec: 0xa4a203e6
    ctx->pc = 0x2affecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 998), (uint16_t)GPR_U32(ctx, 2));
    // 0x2afff0: 0x3c020000
    ctx->pc = 0x2afff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2afff4: 0x244236e8
    ctx->pc = 0x2afff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2afff8: 0x431023
    ctx->pc = 0x2afff8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afffc: 0xa4a203ea
    ctx->pc = 0x2afffcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1002), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0000: 0x3c020000
    ctx->pc = 0x2b0000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0004: 0x24422478
    ctx->pc = 0x2b0004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2b0008: 0x431023
    ctx->pc = 0x2b0008u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b000c: 0xa4a203ee
    ctx->pc = 0x2b000cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1006), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0010: 0x3c020000
    ctx->pc = 0x2b0010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0014: 0x244224e8
    ctx->pc = 0x2b0014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9448));
    // 0x2b0018: 0x431023
    ctx->pc = 0x2b0018u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b001c: 0xa4a203f2
    ctx->pc = 0x2b001cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1010), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0020: 0x3c020000
    ctx->pc = 0x2b0020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0024: 0x244224b8
    ctx->pc = 0x2b0024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9400));
    // 0x2b0028: 0x431023
    ctx->pc = 0x2b0028u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b002c: 0xa4a203f6
    ctx->pc = 0x2b002cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1014), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0030: 0x3c020000
    ctx->pc = 0x2b0030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0034: 0x244224e8
    ctx->pc = 0x2b0034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9448));
    // 0x2b0038: 0x431023
    ctx->pc = 0x2b0038u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b003c: 0xa4a203fa
    ctx->pc = 0x2b003cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1018), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0040: 0x3c020000
    ctx->pc = 0x2b0040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0044: 0x244224e8
    ctx->pc = 0x2b0044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9448));
    // 0x2b0048: 0x431023
    ctx->pc = 0x2b0048u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b004c: 0xa4a203fe
    ctx->pc = 0x2b004cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1022), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0050: 0x3c020000
    ctx->pc = 0x2b0050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0054: 0x24422638
    ctx->pc = 0x2b0054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9784));
    // 0x2b0058: 0x431023
    ctx->pc = 0x2b0058u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b005c: 0xa4a20402
    ctx->pc = 0x2b005cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1026), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0060: 0x3c020000
    ctx->pc = 0x2b0060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0064: 0x24422538
    ctx->pc = 0x2b0064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9528));
    // 0x2b0068: 0x431023
    ctx->pc = 0x2b0068u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b006c: 0xa4a20406
    ctx->pc = 0x2b006cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1030), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0070: 0x3c020000
    ctx->pc = 0x2b0070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0074: 0x24422540
    ctx->pc = 0x2b0074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9536));
    // 0x2b0078: 0x431023
    ctx->pc = 0x2b0078u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b007c: 0xa4a2040a
    ctx->pc = 0x2b007cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0080: 0x3c020000
    ctx->pc = 0x2b0080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0084: 0x24422560
    ctx->pc = 0x2b0084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9568));
    // 0x2b0088: 0x431023
    ctx->pc = 0x2b0088u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b008c: 0xa4a2040e
    ctx->pc = 0x2b008cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1038), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0090: 0x3c020000
    ctx->pc = 0x2b0090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0094: 0x24422580
    ctx->pc = 0x2b0094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2b0098: 0x431023
    ctx->pc = 0x2b0098u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b009c: 0xa4a20412
    ctx->pc = 0x2b009cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1042), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b00a0: 0x3c020000
    ctx->pc = 0x2b00a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b00a4: 0x24422580
    ctx->pc = 0x2b00a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2b00a8: 0x431023
    ctx->pc = 0x2b00a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b00ac: 0xa4a20416
    ctx->pc = 0x2b00acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1046), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b00b0: 0x3c020000
    ctx->pc = 0x2b00b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b00b4: 0x24422c48
    ctx->pc = 0x2b00b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b00b8: 0x431023
    ctx->pc = 0x2b00b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b00bc: 0xa4a2041a
    ctx->pc = 0x2b00bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1050), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b00c0: 0x3c020000
    ctx->pc = 0x2b00c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b00c4: 0x24422580
    ctx->pc = 0x2b00c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2b00c8: 0x431023
    ctx->pc = 0x2b00c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b00cc: 0xa4a2041e
    ctx->pc = 0x2b00ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1054), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b00d0: 0x3c020000
    ctx->pc = 0x2b00d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b00d4: 0x244236e8
    ctx->pc = 0x2b00d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b00d8: 0x431023
    ctx->pc = 0x2b00d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b00dc: 0xa4a20422
    ctx->pc = 0x2b00dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1058), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b00e0: 0x3c020000
    ctx->pc = 0x2b00e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b00e4: 0x24422590
    ctx->pc = 0x2b00e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9616));
    // 0x2b00e8: 0x431023
    ctx->pc = 0x2b00e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b00ec: 0xa4a20426
    ctx->pc = 0x2b00ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1062), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b00f0: 0x3c020000
    ctx->pc = 0x2b00f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b00f4: 0x24422898
    ctx->pc = 0x2b00f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b00f8: 0x431023
    ctx->pc = 0x2b00f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b00fc: 0xa4a2042a
    ctx->pc = 0x2b00fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1066), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0100: 0x3c020000
    ctx->pc = 0x2b0100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0104: 0x24422590
    ctx->pc = 0x2b0104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9616));
    // 0x2b0108: 0x431023
    ctx->pc = 0x2b0108u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b010c: 0xa4a2042e
    ctx->pc = 0x2b010cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1070), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0110: 0x3c020000
    ctx->pc = 0x2b0110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0114: 0x244225b0
    ctx->pc = 0x2b0114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9648));
    // 0x2b0118: 0x431023
    ctx->pc = 0x2b0118u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b011c: 0xa4a20432
    ctx->pc = 0x2b011cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1074), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0120: 0x3c020000
    ctx->pc = 0x2b0120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0124: 0x24422608
    ctx->pc = 0x2b0124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9736));
    // 0x2b0128: 0x431023
    ctx->pc = 0x2b0128u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b012c: 0xa4a20436
    ctx->pc = 0x2b012cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1078), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0130: 0x3c020000
    ctx->pc = 0x2b0130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0134: 0x24422628
    ctx->pc = 0x2b0134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9768));
    // 0x2b0138: 0x431023
    ctx->pc = 0x2b0138u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b013c: 0xa4a2043a
    ctx->pc = 0x2b013cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1082), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0140: 0x3c020000
    ctx->pc = 0x2b0140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0144: 0x24422638
    ctx->pc = 0x2b0144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9784));
    // 0x2b0148: 0x431023
    ctx->pc = 0x2b0148u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b014c: 0xa4a2043e
    ctx->pc = 0x2b014cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1086), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0150: 0x3c020000
    ctx->pc = 0x2b0150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0154: 0x24422678
    ctx->pc = 0x2b0154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9848));
    // 0x2b0158: 0x431023
    ctx->pc = 0x2b0158u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b015c: 0xa4a20442
    ctx->pc = 0x2b015cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1090), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0160: 0x3c020000
    ctx->pc = 0x2b0160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0164: 0x24422680
    ctx->pc = 0x2b0164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9856));
    // 0x2b0168: 0x431023
    ctx->pc = 0x2b0168u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b016c: 0xa4a20446
    ctx->pc = 0x2b016cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1094), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0170: 0x3c020000
    ctx->pc = 0x2b0170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0174: 0x24422790
    ctx->pc = 0x2b0174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10128));
    // 0x2b0178: 0x431023
    ctx->pc = 0x2b0178u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b017c: 0xa4a2044a
    ctx->pc = 0x2b017cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1098), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0180: 0x3c020000
    ctx->pc = 0x2b0180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0184: 0x244227b0
    ctx->pc = 0x2b0184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10160));
    // 0x2b0188: 0x431023
    ctx->pc = 0x2b0188u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b018c: 0xa4a2044e
    ctx->pc = 0x2b018cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1102), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0190: 0x3c020000
    ctx->pc = 0x2b0190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0194: 0x244227c0
    ctx->pc = 0x2b0194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10176));
    // 0x2b0198: 0x431023
    ctx->pc = 0x2b0198u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b019c: 0xa4a20452
    ctx->pc = 0x2b019cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1106), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b01a0: 0x3c020000
    ctx->pc = 0x2b01a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b01a4: 0x244227e0
    ctx->pc = 0x2b01a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10208));
    // 0x2b01a8: 0x431023
    ctx->pc = 0x2b01a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b01ac: 0xa4a20456
    ctx->pc = 0x2b01acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1110), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b01b0: 0x3c020000
    ctx->pc = 0x2b01b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b01b4: 0x24422820
    ctx->pc = 0x2b01b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10272));
    // 0x2b01b8: 0x431023
    ctx->pc = 0x2b01b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b01bc: 0xa4a2045a
    ctx->pc = 0x2b01bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1114), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b01c0: 0x3c020000
    ctx->pc = 0x2b01c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b01c4: 0x24422860
    ctx->pc = 0x2b01c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10336));
    // 0x2b01c8: 0x431023
    ctx->pc = 0x2b01c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b01cc: 0xa4a2045e
    ctx->pc = 0x2b01ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1118), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b01d0: 0x3c020000
    ctx->pc = 0x2b01d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b01d4: 0x24422880
    ctx->pc = 0x2b01d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10368));
    // 0x2b01d8: 0x431023
    ctx->pc = 0x2b01d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b01dc: 0xa4a20462
    ctx->pc = 0x2b01dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1122), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b01e0: 0x3c020000
    ctx->pc = 0x2b01e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b01e4: 0x24422898
    ctx->pc = 0x2b01e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b01e8: 0x431023
    ctx->pc = 0x2b01e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b01ec: 0xa4a20466
    ctx->pc = 0x2b01ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1126), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b01f0: 0x3c020000
    ctx->pc = 0x2b01f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b01f4: 0x24422898
    ctx->pc = 0x2b01f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b01f8: 0x431023
    ctx->pc = 0x2b01f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b01fc: 0xa4a2046a
    ctx->pc = 0x2b01fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1130), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0200: 0x3c020000
    ctx->pc = 0x2b0200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0204: 0x24422c48
    ctx->pc = 0x2b0204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b0208: 0x431023
    ctx->pc = 0x2b0208u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b020c: 0xa4a2046e
    ctx->pc = 0x2b020cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1134), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0210: 0x3c020000
    ctx->pc = 0x2b0210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0214: 0x24422898
    ctx->pc = 0x2b0214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b0218: 0x431023
    ctx->pc = 0x2b0218u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b021c: 0xa4a20472
    ctx->pc = 0x2b021cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1138), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0220: 0x3c020000
    ctx->pc = 0x2b0220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0224: 0x24422c48
    ctx->pc = 0x2b0224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b0228: 0x431023
    ctx->pc = 0x2b0228u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b022c: 0xa4a20476
    ctx->pc = 0x2b022cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1142), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0230: 0x3c020000
    ctx->pc = 0x2b0230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0234: 0x24422898
    ctx->pc = 0x2b0234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b0238: 0x431023
    ctx->pc = 0x2b0238u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b023c: 0xa4a2047a
    ctx->pc = 0x2b023cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1146), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0240: 0x3c020000
    ctx->pc = 0x2b0240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0244: 0x24422940
    ctx->pc = 0x2b0244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b0248: 0x431023
    ctx->pc = 0x2b0248u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b024c: 0xa4a2047e
    ctx->pc = 0x2b024cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1150), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0250: 0x3c020000
    ctx->pc = 0x2b0250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0254: 0x244228b8
    ctx->pc = 0x2b0254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10424));
    // 0x2b0258: 0x431023
    ctx->pc = 0x2b0258u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b025c: 0xa4a20482
    ctx->pc = 0x2b025cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1154), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0260: 0x3c020000
    ctx->pc = 0x2b0260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0264: 0x244228c0
    ctx->pc = 0x2b0264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10432));
    // 0x2b0268: 0x431023
    ctx->pc = 0x2b0268u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b026c: 0xa4a20486
    ctx->pc = 0x2b026cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1158), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0270: 0x3c020000
    ctx->pc = 0x2b0270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0274: 0x244228e0
    ctx->pc = 0x2b0274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10464));
    // 0x2b0278: 0x431023
    ctx->pc = 0x2b0278u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b027c: 0xa4a2048a
    ctx->pc = 0x2b027cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1162), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0280: 0x3c020000
    ctx->pc = 0x2b0280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0284: 0x24422910
    ctx->pc = 0x2b0284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10512));
    // 0x2b0288: 0x431023
    ctx->pc = 0x2b0288u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b028c: 0xa4a2048e
    ctx->pc = 0x2b028cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1166), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0290: 0x3c020000
    ctx->pc = 0x2b0290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0294: 0x24422940
    ctx->pc = 0x2b0294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b0298: 0x431023
    ctx->pc = 0x2b0298u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b029c: 0xa4a20492
    ctx->pc = 0x2b029cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1170), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b02a0: 0x3c020000
    ctx->pc = 0x2b02a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b02a4: 0x24422910
    ctx->pc = 0x2b02a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10512));
    // 0x2b02a8: 0x431023
    ctx->pc = 0x2b02a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b02ac: 0xa4a20496
    ctx->pc = 0x2b02acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1174), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b02b0: 0x3c020000
    ctx->pc = 0x2b02b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b02b4: 0x24422930
    ctx->pc = 0x2b02b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10544));
    // 0x2b02b8: 0x431023
    ctx->pc = 0x2b02b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b02bc: 0xa4a2049a
    ctx->pc = 0x2b02bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1178), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b02c0: 0x3c020000
    ctx->pc = 0x2b02c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b02c4: 0x24422940
    ctx->pc = 0x2b02c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b02c8: 0x431023
    ctx->pc = 0x2b02c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b02cc: 0xa4a2049e
    ctx->pc = 0x2b02ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1182), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b02d0: 0x3c020000
    ctx->pc = 0x2b02d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b02d4: 0x24422940
    ctx->pc = 0x2b02d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b02d8: 0x431023
    ctx->pc = 0x2b02d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b02dc: 0xa4a204a2
    ctx->pc = 0x2b02dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1186), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b02e0: 0x3c020000
    ctx->pc = 0x2b02e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b02e4: 0x24422a08
    ctx->pc = 0x2b02e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b02e8: 0x431023
    ctx->pc = 0x2b02e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b02ec: 0xa4a204a6
    ctx->pc = 0x2b02ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1190), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b02f0: 0x3c020000
    ctx->pc = 0x2b02f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b02f4: 0x24422960
    ctx->pc = 0x2b02f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10592));
    // 0x2b02f8: 0x431023
    ctx->pc = 0x2b02f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b02fc: 0xa4a204aa
    ctx->pc = 0x2b02fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0300: 0x3c020000
    ctx->pc = 0x2b0300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0304: 0x24422988
    ctx->pc = 0x2b0304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10632));
    // 0x2b0308: 0x431023
    ctx->pc = 0x2b0308u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b030c: 0xa4a204ae
    ctx->pc = 0x2b030cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1198), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0310: 0x3c020000
    ctx->pc = 0x2b0310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0314: 0x244229a8
    ctx->pc = 0x2b0314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10664));
    // 0x2b0318: 0x431023
    ctx->pc = 0x2b0318u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b031c: 0xa4a204b2
    ctx->pc = 0x2b031cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1202), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0320: 0x3c020000
    ctx->pc = 0x2b0320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0324: 0x244229d8
    ctx->pc = 0x2b0324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10712));
    // 0x2b0328: 0x431023
    ctx->pc = 0x2b0328u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b032c: 0xa4a204b6
    ctx->pc = 0x2b032cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1206), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0330: 0x3c020000
    ctx->pc = 0x2b0330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0334: 0x24422a08
    ctx->pc = 0x2b0334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b0338: 0x3c040000
    ctx->pc = 0x2b0338u;
    SET_GPR_U32(ctx, 4, ((uint32_t)0 << 16));
    // 0x2b033c: 0x24840000
    ctx->pc = 0x2b033cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 0));
    // 0x2b0340: 0x441023
    ctx->pc = 0x2b0340u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0344: 0xa4a204ba
    ctx->pc = 0x2b0344u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1210), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0348: 0x3c030037
    ctx->pc = 0x2b0348u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2b034c: 0x24631908
    ctx->pc = 0x2b034cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6408));
    // 0x2b0350: 0x3c020000
    ctx->pc = 0x2b0350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0354: 0x244229d8
    ctx->pc = 0x2b0354u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10712));
    // 0x2b0358: 0x441023
    ctx->pc = 0x2b0358u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b035c: 0xa46204be
    ctx->pc = 0x2b035cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1214), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0360: 0x3c020000
    ctx->pc = 0x2b0360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0364: 0x244229f8
    ctx->pc = 0x2b0364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10744));
    // 0x2b0368: 0x441023
    ctx->pc = 0x2b0368u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b036c: 0xa46204c2
    ctx->pc = 0x2b036cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1218), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0370: 0x3c020000
    ctx->pc = 0x2b0370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0374: 0x24422a08
    ctx->pc = 0x2b0374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b0378: 0x441023
    ctx->pc = 0x2b0378u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b037c: 0xa46204c6
    ctx->pc = 0x2b037cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1222), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0380: 0x3c020000
    ctx->pc = 0x2b0380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0384: 0x24422ad8
    ctx->pc = 0x2b0384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10968));
    // 0x2b0388: 0x441023
    ctx->pc = 0x2b0388u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b038c: 0xa46204ca
    ctx->pc = 0x2b038cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1226), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0390: 0x3c020000
    ctx->pc = 0x2b0390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0394: 0x24422a08
    ctx->pc = 0x2b0394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b0398: 0x441023
    ctx->pc = 0x2b0398u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b039c: 0xa46204ce
    ctx->pc = 0x2b039cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1230), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b03a0: 0x3c020000
    ctx->pc = 0x2b03a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b03a4: 0x24422a28
    ctx->pc = 0x2b03a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10792));
    // 0x2b03a8: 0x441023
    ctx->pc = 0x2b03a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b03ac: 0xa46204d2
    ctx->pc = 0x2b03acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1234), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b03b0: 0x3c020000
    ctx->pc = 0x2b03b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b03b4: 0x24422a60
    ctx->pc = 0x2b03b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10848));
    // 0x2b03b8: 0x441023
    ctx->pc = 0x2b03b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b03bc: 0xa46204d6
    ctx->pc = 0x2b03bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1238), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b03c0: 0x3c020000
    ctx->pc = 0x2b03c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b03c4: 0x24422a80
    ctx->pc = 0x2b03c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10880));
    // 0x2b03c8: 0x441023
    ctx->pc = 0x2b03c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b03cc: 0xa46204da
    ctx->pc = 0x2b03ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1242), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b03d0: 0x3c020000
    ctx->pc = 0x2b03d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b03d4: 0x24422ad8
    ctx->pc = 0x2b03d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10968));
    // 0x2b03d8: 0x441023
    ctx->pc = 0x2b03d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b03dc: 0xa46204de
    ctx->pc = 0x2b03dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1246), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b03e0: 0x3c020000
    ctx->pc = 0x2b03e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b03e4: 0x24422c28
    ctx->pc = 0x2b03e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b03e8: 0x441023
    ctx->pc = 0x2b03e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b03ec: 0xa46204e2
    ctx->pc = 0x2b03ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1250), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b03f0: 0x3c020000
    ctx->pc = 0x2b03f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b03f4: 0x24422ad8
    ctx->pc = 0x2b03f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10968));
    // 0x2b03f8: 0x441023
    ctx->pc = 0x2b03f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b03fc: 0xa46204e6
    ctx->pc = 0x2b03fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1254), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0400: 0x3c020000
    ctx->pc = 0x2b0400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0404: 0x24422af8
    ctx->pc = 0x2b0404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11000));
    // 0x2b0408: 0x441023
    ctx->pc = 0x2b0408u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b040c: 0xa46204ea
    ctx->pc = 0x2b040cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1258), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0410: 0x3c020000
    ctx->pc = 0x2b0410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0414: 0x24422b60
    ctx->pc = 0x2b0414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11104));
    // 0x2b0418: 0x441023
    ctx->pc = 0x2b0418u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b041c: 0xa46204ee
    ctx->pc = 0x2b041cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1262), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0420: 0x3c020000
    ctx->pc = 0x2b0420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0424: 0x24422b80
    ctx->pc = 0x2b0424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11136));
    // 0x2b0428: 0x441023
    ctx->pc = 0x2b0428u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b042c: 0xa46204f2
    ctx->pc = 0x2b042cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1266), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0430: 0x3c020000
    ctx->pc = 0x2b0430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0434: 0x24422b88
    ctx->pc = 0x2b0434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11144));
    // 0x2b0438: 0x441023
    ctx->pc = 0x2b0438u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b043c: 0xa46204f6
    ctx->pc = 0x2b043cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1270), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0440: 0x3c020000
    ctx->pc = 0x2b0440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0444: 0x24422ba8
    ctx->pc = 0x2b0444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11176));
    // 0x2b0448: 0x441023
    ctx->pc = 0x2b0448u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b044c: 0xa46204fa
    ctx->pc = 0x2b044cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1274), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0450: 0x3c020000
    ctx->pc = 0x2b0450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0454: 0x24422c28
    ctx->pc = 0x2b0454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b0458: 0x441023
    ctx->pc = 0x2b0458u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b045c: 0xa46204fe
    ctx->pc = 0x2b045cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1278), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0460: 0x3c020000
    ctx->pc = 0x2b0460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0464: 0x24422c28
    ctx->pc = 0x2b0464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b0468: 0x441023
    ctx->pc = 0x2b0468u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b046c: 0xa4620502
    ctx->pc = 0x2b046cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1282), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0470: 0x3c020000
    ctx->pc = 0x2b0470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0474: 0x24422c48
    ctx->pc = 0x2b0474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b0478: 0x441023
    ctx->pc = 0x2b0478u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b047c: 0xa4620506
    ctx->pc = 0x2b047cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1286), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0480: 0x3c020000
    ctx->pc = 0x2b0480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0484: 0x24422c28
    ctx->pc = 0x2b0484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b0488: 0x441023
    ctx->pc = 0x2b0488u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b048c: 0xa462050a
    ctx->pc = 0x2b048cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1290), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0490: 0x3c020000
    ctx->pc = 0x2b0490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0494: 0x24422fd0
    ctx->pc = 0x2b0494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0498: 0x441023
    ctx->pc = 0x2b0498u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b049c: 0xa462050e
    ctx->pc = 0x2b049cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1294), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b04a0: 0x3c020000
    ctx->pc = 0x2b04a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b04a4: 0x24422c48
    ctx->pc = 0x2b04a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b04a8: 0x441023
    ctx->pc = 0x2b04a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b04ac: 0xa4620512
    ctx->pc = 0x2b04acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b04b0: 0x3c020000
    ctx->pc = 0x2b04b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b04b4: 0x24422c48
    ctx->pc = 0x2b04b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b04b8: 0x441023
    ctx->pc = 0x2b04b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b04bc: 0xa4620516
    ctx->pc = 0x2b04bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1302), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b04c0: 0x3c020000
    ctx->pc = 0x2b04c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b04c4: 0x24422d58
    ctx->pc = 0x2b04c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11608));
    // 0x2b04c8: 0x441023
    ctx->pc = 0x2b04c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b04cc: 0xa462051a
    ctx->pc = 0x2b04ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1306), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b04d0: 0x3c020000
    ctx->pc = 0x2b04d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b04d4: 0x24422c50
    ctx->pc = 0x2b04d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11344));
    // 0x2b04d8: 0x441023
    ctx->pc = 0x2b04d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b04dc: 0xa462051e
    ctx->pc = 0x2b04dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1310), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b04e0: 0x3c020000
    ctx->pc = 0x2b04e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b04e4: 0x24422c70
    ctx->pc = 0x2b04e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11376));
    // 0x2b04e8: 0x441023
    ctx->pc = 0x2b04e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b04ec: 0xa4620522
    ctx->pc = 0x2b04ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1314), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b04f0: 0x3c020000
    ctx->pc = 0x2b04f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b04f4: 0x24422c80
    ctx->pc = 0x2b04f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11392));
    // 0x2b04f8: 0x441023
    ctx->pc = 0x2b04f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b04fc: 0xa4620526
    ctx->pc = 0x2b04fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0500: 0x3c020000
    ctx->pc = 0x2b0500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0504: 0x24422ca0
    ctx->pc = 0x2b0504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11424));
    // 0x2b0508: 0x441023
    ctx->pc = 0x2b0508u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b050c: 0xa462052a
    ctx->pc = 0x2b050cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1322), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0510: 0x3c020000
    ctx->pc = 0x2b0510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0514: 0x24422cc8
    ctx->pc = 0x2b0514u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11464));
    // 0x2b0518: 0x441023
    ctx->pc = 0x2b0518u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b051c: 0xa462052e
    ctx->pc = 0x2b051cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1326), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0520: 0x3c020000
    ctx->pc = 0x2b0520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0524: 0x24422ce8
    ctx->pc = 0x2b0524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11496));
    // 0x2b0528: 0x441023
    ctx->pc = 0x2b0528u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b052c: 0xa4620532
    ctx->pc = 0x2b052cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1330), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0530: 0x3c020000
    ctx->pc = 0x2b0530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0534: 0x24422cf8
    ctx->pc = 0x2b0534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11512));
    // 0x2b0538: 0x441023
    ctx->pc = 0x2b0538u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b053c: 0xa4620536
    ctx->pc = 0x2b053cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1334), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0540: 0x3c020000
    ctx->pc = 0x2b0540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0544: 0x24422d18
    ctx->pc = 0x2b0544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11544));
    // 0x2b0548: 0x441023
    ctx->pc = 0x2b0548u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b054c: 0xa462053a
    ctx->pc = 0x2b054cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1338), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0550: 0x3c020000
    ctx->pc = 0x2b0550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0554: 0x24422d38
    ctx->pc = 0x2b0554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11576));
    // 0x2b0558: 0x441023
    ctx->pc = 0x2b0558u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b055c: 0xa462053e
    ctx->pc = 0x2b055cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1342), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0560: 0x3c020000
    ctx->pc = 0x2b0560u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0564: 0x24422d58
    ctx->pc = 0x2b0564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11608));
    // 0x2b0568: 0x441023
    ctx->pc = 0x2b0568u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b056c: 0xa4620542
    ctx->pc = 0x2b056cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1346), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0570: 0x3c020000
    ctx->pc = 0x2b0570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0574: 0x24422d58
    ctx->pc = 0x2b0574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11608));
    // 0x2b0578: 0x441023
    ctx->pc = 0x2b0578u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b057c: 0xa4620546
    ctx->pc = 0x2b057cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1350), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0580: 0x3c020000
    ctx->pc = 0x2b0580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0584: 0x24422fd0
    ctx->pc = 0x2b0584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0588: 0x441023
    ctx->pc = 0x2b0588u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b058c: 0xa462054a
    ctx->pc = 0x2b058cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0590: 0x3c020000
    ctx->pc = 0x2b0590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0594: 0x24422d68
    ctx->pc = 0x2b0594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11624));
    // 0x2b0598: 0x441023
    ctx->pc = 0x2b0598u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b059c: 0xa462054e
    ctx->pc = 0x2b059cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1358), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b05a0: 0x3c020000
    ctx->pc = 0x2b05a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b05a4: 0x24422d88
    ctx->pc = 0x2b05a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11656));
    // 0x2b05a8: 0x441023
    ctx->pc = 0x2b05a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b05ac: 0xa4620552
    ctx->pc = 0x2b05acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1362), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b05b0: 0x3c020000
    ctx->pc = 0x2b05b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b05b4: 0x24422ea8
    ctx->pc = 0x2b05b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11944));
    // 0x2b05b8: 0x441023
    ctx->pc = 0x2b05b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b05bc: 0xa4620556
    ctx->pc = 0x2b05bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1366), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b05c0: 0x3c020000
    ctx->pc = 0x2b05c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b05c4: 0x24422ec8
    ctx->pc = 0x2b05c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11976));
    // 0x2b05c8: 0x441023
    ctx->pc = 0x2b05c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b05cc: 0xa462055a
    ctx->pc = 0x2b05ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1370), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b05d0: 0x3c020000
    ctx->pc = 0x2b05d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b05d4: 0x24422ef8
    ctx->pc = 0x2b05d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12024));
    // 0x2b05d8: 0x441023
    ctx->pc = 0x2b05d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b05dc: 0xa462055e
    ctx->pc = 0x2b05dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1374), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b05e0: 0x3c020000
    ctx->pc = 0x2b05e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b05e4: 0x24422f18
    ctx->pc = 0x2b05e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12056));
    // 0x2b05e8: 0x441023
    ctx->pc = 0x2b05e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b05ec: 0xa4620562
    ctx->pc = 0x2b05ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1378), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b05f0: 0x3c020000
    ctx->pc = 0x2b05f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b05f4: 0x24422fa0
    ctx->pc = 0x2b05f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12192));
    // 0x2b05f8: 0x441023
    ctx->pc = 0x2b05f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b05fc: 0xa4620566
    ctx->pc = 0x2b05fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1382), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0600: 0x3c020000
    ctx->pc = 0x2b0600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0604: 0x24422fc0
    ctx->pc = 0x2b0604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12224));
    // 0x2b0608: 0x441023
    ctx->pc = 0x2b0608u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b060c: 0xa462056a
    ctx->pc = 0x2b060cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1386), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0610: 0x3c020000
    ctx->pc = 0x2b0610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0614: 0x24422fd0
    ctx->pc = 0x2b0614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0618: 0x441023
    ctx->pc = 0x2b0618u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b061c: 0xa462056e
    ctx->pc = 0x2b061cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0620: 0x3c020000
    ctx->pc = 0x2b0620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0624: 0x24422fd0
    ctx->pc = 0x2b0624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0628: 0x441023
    ctx->pc = 0x2b0628u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b062c: 0xa4620572
    ctx->pc = 0x2b062cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1394), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0630: 0x3c020000
    ctx->pc = 0x2b0630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0634: 0x244230b0
    ctx->pc = 0x2b0634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12464));
    // 0x2b0638: 0x441023
    ctx->pc = 0x2b0638u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b063c: 0xa4620576
    ctx->pc = 0x2b063cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1398), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0640: 0x3c020000
    ctx->pc = 0x2b0640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0644: 0x24422fd0
    ctx->pc = 0x2b0644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0648: 0x441023
    ctx->pc = 0x2b0648u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b064c: 0xa462057a
    ctx->pc = 0x2b064cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1402), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0650: 0x3c020000
    ctx->pc = 0x2b0650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0654: 0x24423298
    ctx->pc = 0x2b0654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12952));
    // 0x2b0658: 0x441023
    ctx->pc = 0x2b0658u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b065c: 0xa462057e
    ctx->pc = 0x2b065cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1406), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0660: 0x3c020000
    ctx->pc = 0x2b0660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0664: 0x24422ff0
    ctx->pc = 0x2b0664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12272));
    // 0x2b0668: 0x441023
    ctx->pc = 0x2b0668u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b066c: 0xa4620582
    ctx->pc = 0x2b066cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1410), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0670: 0x3c020000
    ctx->pc = 0x2b0670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0674: 0x24423030
    ctx->pc = 0x2b0674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12336));
    // 0x2b0678: 0x441023
    ctx->pc = 0x2b0678u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b067c: 0xa4620586
    ctx->pc = 0x2b067cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1414), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0680: 0x3c020000
    ctx->pc = 0x2b0680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0684: 0x24423050
    ctx->pc = 0x2b0684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12368));
    // 0x2b0688: 0x441023
    ctx->pc = 0x2b0688u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b068c: 0xa462058a
    ctx->pc = 0x2b068cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1418), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0690: 0x3c020000
    ctx->pc = 0x2b0690u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0694: 0x24423068
    ctx->pc = 0x2b0694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12392));
    // 0x2b0698: 0x441023
    ctx->pc = 0x2b0698u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b069c: 0xa462058e
    ctx->pc = 0x2b069cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1422), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b06a0: 0x3c020000
    ctx->pc = 0x2b06a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b06a4: 0x24423088
    ctx->pc = 0x2b06a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12424));
    // 0x2b06a8: 0x441023
    ctx->pc = 0x2b06a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b06ac: 0xa4620592
    ctx->pc = 0x2b06acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1426), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b06b0: 0x3c020000
    ctx->pc = 0x2b06b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b06b4: 0x24423098
    ctx->pc = 0x2b06b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12440));
    // 0x2b06b8: 0x441023
    ctx->pc = 0x2b06b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b06bc: 0xa4620596
    ctx->pc = 0x2b06bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1430), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b06c0: 0x3c020000
    ctx->pc = 0x2b06c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b06c4: 0x244230b0
    ctx->pc = 0x2b06c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12464));
    // 0x2b06c8: 0x441023
    ctx->pc = 0x2b06c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b06cc: 0xa462059a
    ctx->pc = 0x2b06ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1434), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b06d0: 0x3c020000
    ctx->pc = 0x2b06d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b06d4: 0x244230d0
    ctx->pc = 0x2b06d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12496));
    // 0x2b06d8: 0x441023
    ctx->pc = 0x2b06d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b06dc: 0xa462059e
    ctx->pc = 0x2b06dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1438), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b06e0: 0x3c020000
    ctx->pc = 0x2b06e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b06e4: 0x244230f0
    ctx->pc = 0x2b06e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12528));
    // 0x2b06e8: 0x441023
    ctx->pc = 0x2b06e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b06ec: 0xa46205a2
    ctx->pc = 0x2b06ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1442), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b06f0: 0x3c020000
    ctx->pc = 0x2b06f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b06f4: 0x24423110
    ctx->pc = 0x2b06f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12560));
    // 0x2b06f8: 0x441023
    ctx->pc = 0x2b06f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b06fc: 0xa46205a6
    ctx->pc = 0x2b06fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1446), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0700: 0x3c020000
    ctx->pc = 0x2b0700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0704: 0x24423160
    ctx->pc = 0x2b0704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12640));
    // 0x2b0708: 0x441023
    ctx->pc = 0x2b0708u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b070c: 0xa46205aa
    ctx->pc = 0x2b070cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1450), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0710: 0x3c020000
    ctx->pc = 0x2b0710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0714: 0x24423180
    ctx->pc = 0x2b0714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12672));
    // 0x2b0718: 0x441023
    ctx->pc = 0x2b0718u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b071c: 0xa46205ae
    ctx->pc = 0x2b071cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1454), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0720: 0x3c020000
    ctx->pc = 0x2b0720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0724: 0x244231a8
    ctx->pc = 0x2b0724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12712));
    // 0x2b0728: 0x441023
    ctx->pc = 0x2b0728u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b072c: 0xa46205b2
    ctx->pc = 0x2b072cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1458), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0730: 0x3c020000
    ctx->pc = 0x2b0730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0734: 0x244231c8
    ctx->pc = 0x2b0734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12744));
    // 0x2b0738: 0x441023
    ctx->pc = 0x2b0738u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b073c: 0xa46205b6
    ctx->pc = 0x2b073cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1462), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0740: 0x3c020000
    ctx->pc = 0x2b0740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0744: 0x24423288
    ctx->pc = 0x2b0744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12936));
    // 0x2b0748: 0x441023
    ctx->pc = 0x2b0748u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b074c: 0xa46205ba
    ctx->pc = 0x2b074cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1466), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0750: 0x3c020000
    ctx->pc = 0x2b0750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0754: 0x24423298
    ctx->pc = 0x2b0754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12952));
    // 0x2b0758: 0x441023
    ctx->pc = 0x2b0758u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b075c: 0xa46205be
    ctx->pc = 0x2b075cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1470), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0760: 0x3c020000
    ctx->pc = 0x2b0760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0764: 0x24423298
    ctx->pc = 0x2b0764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12952));
    // 0x2b0768: 0x441023
    ctx->pc = 0x2b0768u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b076c: 0xa46205c2
    ctx->pc = 0x2b076cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1474), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0770: 0x3c020000
    ctx->pc = 0x2b0770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0774: 0x24423548
    ctx->pc = 0x2b0774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13640));
    // 0x2b0778: 0x441023
    ctx->pc = 0x2b0778u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b077c: 0xa46205c6
    ctx->pc = 0x2b077cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1478), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0780: 0x3c020000
    ctx->pc = 0x2b0780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0784: 0x244232b8
    ctx->pc = 0x2b0784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12984));
    // 0x2b0788: 0x441023
    ctx->pc = 0x2b0788u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b078c: 0xa46205ca
    ctx->pc = 0x2b078cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1482), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0790: 0x3c020000
    ctx->pc = 0x2b0790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0794: 0x244232e8
    ctx->pc = 0x2b0794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13032));
    // 0x2b0798: 0x441023
    ctx->pc = 0x2b0798u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b079c: 0xa46205ce
    ctx->pc = 0x2b079cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1486), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b07a0: 0x3c020000
    ctx->pc = 0x2b07a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b07a4: 0x24423308
    ctx->pc = 0x2b07a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13064));
    // 0x2b07a8: 0x441023
    ctx->pc = 0x2b07a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b07ac: 0xa46205d2
    ctx->pc = 0x2b07acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1490), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b07b0: 0x3c020000
    ctx->pc = 0x2b07b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b07b4: 0x24423328
    ctx->pc = 0x2b07b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13096));
    // 0x2b07b8: 0x441023
    ctx->pc = 0x2b07b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b07bc: 0xa46205d6
    ctx->pc = 0x2b07bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1494), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b07c0: 0x3c020000
    ctx->pc = 0x2b07c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b07c4: 0x24423348
    ctx->pc = 0x2b07c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13128));
    // 0x2b07c8: 0x441023
    ctx->pc = 0x2b07c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b07cc: 0xa46205da
    ctx->pc = 0x2b07ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1498), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b07d0: 0x3c020000
    ctx->pc = 0x2b07d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b07d4: 0x24423398
    ctx->pc = 0x2b07d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13208));
    // 0x2b07d8: 0x441023
    ctx->pc = 0x2b07d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b07dc: 0xa46205de
    ctx->pc = 0x2b07dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1502), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b07e0: 0x3c020000
    ctx->pc = 0x2b07e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b07e4: 0x244233b8
    ctx->pc = 0x2b07e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13240));
    // 0x2b07e8: 0x441023
    ctx->pc = 0x2b07e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b07ec: 0xa46205e2
    ctx->pc = 0x2b07ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1506), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b07f0: 0x3c020000
    ctx->pc = 0x2b07f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b07f4: 0x24423400
    ctx->pc = 0x2b07f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13312));
    // 0x2b07f8: 0x441023
    ctx->pc = 0x2b07f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b07fc: 0xa46205e6
    ctx->pc = 0x2b07fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1510), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0800: 0x3c020000
    ctx->pc = 0x2b0800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0804: 0x24423420
    ctx->pc = 0x2b0804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13344));
    // 0x2b0808: 0x441023
    ctx->pc = 0x2b0808u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b080c: 0xa46205ea
    ctx->pc = 0x2b080cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1514), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0810: 0x3c020000
    ctx->pc = 0x2b0810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0814: 0x244234e0
    ctx->pc = 0x2b0814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13536));
    // 0x2b0818: 0x441023
    ctx->pc = 0x2b0818u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b081c: 0xa46205ee
    ctx->pc = 0x2b081cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1518), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0820: 0x3c020000
    ctx->pc = 0x2b0820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0824: 0x244234f0
    ctx->pc = 0x2b0824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2b0828: 0x441023
    ctx->pc = 0x2b0828u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b082c: 0xa46205f2
    ctx->pc = 0x2b082cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1522), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0830: 0x3c020000
    ctx->pc = 0x2b0830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0834: 0x24423510
    ctx->pc = 0x2b0834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13584));
    // 0x2b0838: 0x441023
    ctx->pc = 0x2b0838u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b083c: 0xa46205f6
    ctx->pc = 0x2b083cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1526), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0840: 0x3c020000
    ctx->pc = 0x2b0840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0844: 0x24423548
    ctx->pc = 0x2b0844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13640));
    // 0x2b0848: 0x441023
    ctx->pc = 0x2b0848u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b084c: 0xa46205fa
    ctx->pc = 0x2b084cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1530), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0850: 0x3c020000
    ctx->pc = 0x2b0850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0854: 0x24423548
    ctx->pc = 0x2b0854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13640));
    // 0x2b0858: 0x441023
    ctx->pc = 0x2b0858u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b085c: 0xa46205fe
    ctx->pc = 0x2b085cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1534), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0860: 0x3c020000
    ctx->pc = 0x2b0860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0864: 0x244236e8
    ctx->pc = 0x2b0864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b0868: 0x441023
    ctx->pc = 0x2b0868u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b086c: 0xa4620602
    ctx->pc = 0x2b086cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1538), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0870: 0x3c020000
    ctx->pc = 0x2b0870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0874: 0x24423568
    ctx->pc = 0x2b0874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13672));
    // 0x2b0878: 0x441023
    ctx->pc = 0x2b0878u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b087c: 0xa4620606
    ctx->pc = 0x2b087cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1542), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0880: 0x3c020000
    ctx->pc = 0x2b0880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0884: 0x24423598
    ctx->pc = 0x2b0884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13720));
    // 0x2b0888: 0x441023
    ctx->pc = 0x2b0888u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b088c: 0xa462060a
    ctx->pc = 0x2b088cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1546), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0890: 0x3c020000
    ctx->pc = 0x2b0890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0894: 0x244235b8
    ctx->pc = 0x2b0894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13752));
    // 0x2b0898: 0x441023
    ctx->pc = 0x2b0898u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b089c: 0xa462060e
    ctx->pc = 0x2b089cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1550), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b08a0: 0x3c020000
    ctx->pc = 0x2b08a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b08a4: 0x244235d8
    ctx->pc = 0x2b08a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13784));
    // 0x2b08a8: 0x441023
    ctx->pc = 0x2b08a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b08ac: 0xa4620612
    ctx->pc = 0x2b08acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1554), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b08b0: 0x3c020000
    ctx->pc = 0x2b08b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b08b4: 0x24423610
    ctx->pc = 0x2b08b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13840));
    // 0x2b08b8: 0x441023
    ctx->pc = 0x2b08b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b08bc: 0xa4620616
    ctx->pc = 0x2b08bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1558), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b08c0: 0x3c020000
    ctx->pc = 0x2b08c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b08c4: 0x24423630
    ctx->pc = 0x2b08c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13872));
    // 0x2b08c8: 0x441023
    ctx->pc = 0x2b08c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b08cc: 0xa462061a
    ctx->pc = 0x2b08ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1562), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b08d0: 0x3c020000
    ctx->pc = 0x2b08d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b08d4: 0x244236e8
    ctx->pc = 0x2b08d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b08d8: 0x441023
    ctx->pc = 0x2b08d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b08dc: 0xa462061e
    ctx->pc = 0x2b08dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1566), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b08e0: 0x3c020000
    ctx->pc = 0x2b08e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b08e4: 0x24423708
    ctx->pc = 0x2b08e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14088));
    // 0x2b08e8: 0x441023
    ctx->pc = 0x2b08e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b08ec: 0xa4620622
    ctx->pc = 0x2b08ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1570), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b08f0: 0x3c020000
    ctx->pc = 0x2b08f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b08f4: 0x24423718
    ctx->pc = 0x2b08f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14104));
    // 0x2b08f8: 0x441023
    ctx->pc = 0x2b08f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b08fc: 0xa4620626
    ctx->pc = 0x2b08fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1574), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0900: 0x3c020000
    ctx->pc = 0x2b0900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0904: 0x24423738
    ctx->pc = 0x2b0904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14136));
    // 0x2b0908: 0x441023
    ctx->pc = 0x2b0908u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b090c: 0xa462062a
    ctx->pc = 0x2b090cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1578), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0910: 0x3c020000
    ctx->pc = 0x2b0910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0914: 0x24423748
    ctx->pc = 0x2b0914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14152));
    // 0x2b0918: 0x441023
    ctx->pc = 0x2b0918u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b091c: 0xa462062e
    ctx->pc = 0x2b091cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1582), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b0920: 0x3c030037
    ctx->pc = 0x2b0920u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2b0924: 0x2463f150
    ctx->pc = 0x2b0924u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963536));
    // 0x2b0928: 0x3c020000
    ctx->pc = 0x2b0928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b092c: 0x24420000
    ctx->pc = 0x2b092cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 0));
    // 0x2b0930: 0x441023
    ctx->pc = 0x2b0930u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0934: 0xac620010
    ctx->pc = 0x2b0934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2b0938: 0x3c020000
    ctx->pc = 0x2b0938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b093c: 0x24420d60
    ctx->pc = 0x2b093cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2b0940: 0x441023
    ctx->pc = 0x2b0940u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0944: 0xac620014
    ctx->pc = 0x2b0944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2b0948: 0x3c020000
    ctx->pc = 0x2b0948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b094c: 0x24420020
    ctx->pc = 0x2b094cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b0950: 0x441023
    ctx->pc = 0x2b0950u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0954: 0xac62001c
    ctx->pc = 0x2b0954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2b0958: 0x3c020000
    ctx->pc = 0x2b0958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b095c: 0x24420310
    ctx->pc = 0x2b095cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 784));
    // 0x2b0960: 0x441023
    ctx->pc = 0x2b0960u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0964: 0xac620020
    ctx->pc = 0x2b0964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2b0968: 0x3c020000
    ctx->pc = 0x2b0968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b096c: 0x24420310
    ctx->pc = 0x2b096cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 784));
    // 0x2b0970: 0x441023
    ctx->pc = 0x2b0970u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0974: 0xac620028
    ctx->pc = 0x2b0974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x2b0978: 0x3c020000
    ctx->pc = 0x2b0978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b097c: 0x24420858
    ctx->pc = 0x2b097cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2b0980: 0x441023
    ctx->pc = 0x2b0980u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0984: 0xac62002c
    ctx->pc = 0x2b0984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2b0988: 0x3c020000
    ctx->pc = 0x2b0988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b098c: 0x24420520
    ctx->pc = 0x2b098cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1312));
    // 0x2b0990: 0x441023
    ctx->pc = 0x2b0990u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0994: 0xac620034
    ctx->pc = 0x2b0994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x2b0998: 0x3c020000
    ctx->pc = 0x2b0998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b099c: 0x244207b8
    ctx->pc = 0x2b099cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x2b09a0: 0x441023
    ctx->pc = 0x2b09a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b09a4: 0xac620038
    ctx->pc = 0x2b09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x2b09a8: 0x3c040037
    ctx->pc = 0x2b09a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2b09ac: 0x2484f150
    ctx->pc = 0x2b09acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963536));
    // 0x2b09b0: 0x3c020000
    ctx->pc = 0x2b09b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b09b4: 0x24420858
    ctx->pc = 0x2b09b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2b09b8: 0x3c030000
    ctx->pc = 0x2b09b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2b09bc: 0x24630000
    ctx->pc = 0x2b09bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2b09c0: 0x431023
    ctx->pc = 0x2b09c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b09c4: 0xac820040
    ctx->pc = 0x2b09c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x2b09c8: 0x3c020000
    ctx->pc = 0x2b09c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b09cc: 0x24420968
    ctx->pc = 0x2b09ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2408));
    // 0x2b09d0: 0x431023
    ctx->pc = 0x2b09d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b09d4: 0xac820044
    ctx->pc = 0x2b09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x2b09d8: 0x3c020000
    ctx->pc = 0x2b09d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b09dc: 0x24420968
    ctx->pc = 0x2b09dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2408));
    // 0x2b09e0: 0x431023
    ctx->pc = 0x2b09e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b09e4: 0xac82004c
    ctx->pc = 0x2b09e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x2b09e8: 0x3c020000
    ctx->pc = 0x2b09e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b09ec: 0x24420a90
    ctx->pc = 0x2b09ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2704));
    // 0x2b09f0: 0x431023
    ctx->pc = 0x2b09f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b09f4: 0xac820050
    ctx->pc = 0x2b09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x2b09f8: 0x3c020000
    ctx->pc = 0x2b09f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b09fc: 0x24420b30
    ctx->pc = 0x2b09fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2864));
    // 0x2b0a00: 0x431023
    ctx->pc = 0x2b0a00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a04: 0xac820058
    ctx->pc = 0x2b0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x2b0a08: 0x3c020000
    ctx->pc = 0x2b0a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a0c: 0x24420c50
    ctx->pc = 0x2b0a0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3152));
    // 0x2b0a10: 0x431023
    ctx->pc = 0x2b0a10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a14: 0xac82005c
    ctx->pc = 0x2b0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x2b0a18: 0x3c020000
    ctx->pc = 0x2b0a18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a1c: 0x24420b58
    ctx->pc = 0x2b0a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2904));
    // 0x2b0a20: 0x431023
    ctx->pc = 0x2b0a20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a24: 0xac820064
    ctx->pc = 0x2b0a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x2b0a28: 0x3c020000
    ctx->pc = 0x2b0a28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a2c: 0x24420c50
    ctx->pc = 0x2b0a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3152));
    // 0x2b0a30: 0x431023
    ctx->pc = 0x2b0a30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a34: 0xac820068
    ctx->pc = 0x2b0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x2b0a38: 0x3c020000
    ctx->pc = 0x2b0a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a3c: 0x24420d60
    ctx->pc = 0x2b0a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2b0a40: 0x431023
    ctx->pc = 0x2b0a40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a44: 0xac820070
    ctx->pc = 0x2b0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x2b0a48: 0x3c020000
    ctx->pc = 0x2b0a48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a4c: 0x24422478
    ctx->pc = 0x2b0a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2b0a50: 0x431023
    ctx->pc = 0x2b0a50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a54: 0xac820074
    ctx->pc = 0x2b0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x2b0a58: 0x3c020000
    ctx->pc = 0x2b0a58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a5c: 0x24420d60
    ctx->pc = 0x2b0a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2b0a60: 0x431023
    ctx->pc = 0x2b0a60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a64: 0xac82007c
    ctx->pc = 0x2b0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x2b0a68: 0x3c020000
    ctx->pc = 0x2b0a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a6c: 0x24420ed8
    ctx->pc = 0x2b0a6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3800));
    // 0x2b0a70: 0x431023
    ctx->pc = 0x2b0a70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a74: 0xac820080
    ctx->pc = 0x2b0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2b0a78: 0x3c020000
    ctx->pc = 0x2b0a78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a7c: 0x24420d60
    ctx->pc = 0x2b0a7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2b0a80: 0x431023
    ctx->pc = 0x2b0a80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a84: 0xac820088
    ctx->pc = 0x2b0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x2b0a88: 0x3c020000
    ctx->pc = 0x2b0a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a8c: 0x24421aa8
    ctx->pc = 0x2b0a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6824));
    // 0x2b0a90: 0x431023
    ctx->pc = 0x2b0a90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0a94: 0xac82008c
    ctx->pc = 0x2b0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x2b0a98: 0x3c020000
    ctx->pc = 0x2b0a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0a9c: 0x24420ed8
    ctx->pc = 0x2b0a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3800));
    // 0x2b0aa0: 0x431023
    ctx->pc = 0x2b0aa0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0aa4: 0xac820094
    ctx->pc = 0x2b0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x2b0aa8: 0x3c020000
    ctx->pc = 0x2b0aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0aac: 0x24422478
    ctx->pc = 0x2b0aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2b0ab0: 0x431023
    ctx->pc = 0x2b0ab0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ab4: 0xac820098
    ctx->pc = 0x2b0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x2b0ab8: 0x3c020000
    ctx->pc = 0x2b0ab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0abc: 0x244216f8
    ctx->pc = 0x2b0abcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5880));
    // 0x2b0ac0: 0x431023
    ctx->pc = 0x2b0ac0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ac4: 0xac8200a0
    ctx->pc = 0x2b0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x2b0ac8: 0x3c020000
    ctx->pc = 0x2b0ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0acc: 0x244217e8
    ctx->pc = 0x2b0accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6120));
    // 0x2b0ad0: 0x431023
    ctx->pc = 0x2b0ad0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ad4: 0xac8200a4
    ctx->pc = 0x2b0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
    // 0x2b0ad8: 0x3c020000
    ctx->pc = 0x2b0ad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0adc: 0x24421aa8
    ctx->pc = 0x2b0adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6824));
    // 0x2b0ae0: 0x431023
    ctx->pc = 0x2b0ae0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ae4: 0xac8200ac
    ctx->pc = 0x2b0ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
    // 0x2b0ae8: 0x3c020000
    ctx->pc = 0x2b0ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0aec: 0x24422478
    ctx->pc = 0x2b0aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2b0af0: 0x431023
    ctx->pc = 0x2b0af0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0af4: 0xac8200b0
    ctx->pc = 0x2b0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x2b0af8: 0x3c020000
    ctx->pc = 0x2b0af8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0afc: 0x244222a8
    ctx->pc = 0x2b0afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8872));
    // 0x2b0b00: 0x431023
    ctx->pc = 0x2b0b00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b04: 0xac8200b8
    ctx->pc = 0x2b0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 2));
    // 0x2b0b08: 0x3c020000
    ctx->pc = 0x2b0b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b0c: 0x244223b8
    ctx->pc = 0x2b0b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9144));
    // 0x2b0b10: 0x431023
    ctx->pc = 0x2b0b10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b14: 0xac8200bc
    ctx->pc = 0x2b0b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
    // 0x2b0b18: 0x3c020000
    ctx->pc = 0x2b0b18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b1c: 0x24422478
    ctx->pc = 0x2b0b1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2b0b20: 0x431023
    ctx->pc = 0x2b0b20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b24: 0xac8200c4
    ctx->pc = 0x2b0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
    // 0x2b0b28: 0x3c020000
    ctx->pc = 0x2b0b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b2c: 0x244236e8
    ctx->pc = 0x2b0b2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b0b30: 0x431023
    ctx->pc = 0x2b0b30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b34: 0xac8200c8
    ctx->pc = 0x2b0b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 2));
    // 0x2b0b38: 0x3c020000
    ctx->pc = 0x2b0b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b3c: 0x24422478
    ctx->pc = 0x2b0b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2b0b40: 0x431023
    ctx->pc = 0x2b0b40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b44: 0xac8200d0
    ctx->pc = 0x2b0b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 2));
    // 0x2b0b48: 0x3c020000
    ctx->pc = 0x2b0b48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b4c: 0x244224e8
    ctx->pc = 0x2b0b4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9448));
    // 0x2b0b50: 0x431023
    ctx->pc = 0x2b0b50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b54: 0xac8200d4
    ctx->pc = 0x2b0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
    // 0x2b0b58: 0x3c020000
    ctx->pc = 0x2b0b58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b5c: 0x244224e8
    ctx->pc = 0x2b0b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9448));
    // 0x2b0b60: 0x431023
    ctx->pc = 0x2b0b60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b64: 0xac8200dc
    ctx->pc = 0x2b0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x2b0b68: 0x3c020000
    ctx->pc = 0x2b0b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b6c: 0x24422638
    ctx->pc = 0x2b0b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9784));
    // 0x2b0b70: 0x431023
    ctx->pc = 0x2b0b70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b74: 0xac8200e0
    ctx->pc = 0x2b0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 2));
    // 0x2b0b78: 0x3c020000
    ctx->pc = 0x2b0b78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b7c: 0x24422580
    ctx->pc = 0x2b0b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2b0b80: 0x431023
    ctx->pc = 0x2b0b80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b84: 0xac8200e8
    ctx->pc = 0x2b0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 2));
    // 0x2b0b88: 0x3c020000
    ctx->pc = 0x2b0b88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b8c: 0x24422c48
    ctx->pc = 0x2b0b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b0b90: 0x431023
    ctx->pc = 0x2b0b90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0b94: 0xac8200ec
    ctx->pc = 0x2b0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 2));
    // 0x2b0b98: 0x3c020000
    ctx->pc = 0x2b0b98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0b9c: 0x24422580
    ctx->pc = 0x2b0b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2b0ba0: 0x431023
    ctx->pc = 0x2b0ba0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ba4: 0xac8200f4
    ctx->pc = 0x2b0ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
    // 0x2b0ba8: 0x3c020000
    ctx->pc = 0x2b0ba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0bac: 0x244236e8
    ctx->pc = 0x2b0bacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b0bb0: 0x431023
    ctx->pc = 0x2b0bb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0bb4: 0xac8200f8
    ctx->pc = 0x2b0bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
    // 0x2b0bb8: 0x3c020000
    ctx->pc = 0x2b0bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0bbc: 0x24422590
    ctx->pc = 0x2b0bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9616));
    // 0x2b0bc0: 0x431023
    ctx->pc = 0x2b0bc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0bc4: 0xac820100
    ctx->pc = 0x2b0bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
    // 0x2b0bc8: 0x3c020000
    ctx->pc = 0x2b0bc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0bcc: 0x24422898
    ctx->pc = 0x2b0bccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b0bd0: 0x431023
    ctx->pc = 0x2b0bd0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0bd4: 0xac820104
    ctx->pc = 0x2b0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 2));
    // 0x2b0bd8: 0x3c020000
    ctx->pc = 0x2b0bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0bdc: 0x24422898
    ctx->pc = 0x2b0bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b0be0: 0x431023
    ctx->pc = 0x2b0be0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0be4: 0xac82010c
    ctx->pc = 0x2b0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 2));
    // 0x2b0be8: 0x3c020000
    ctx->pc = 0x2b0be8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0bec: 0x24422c48
    ctx->pc = 0x2b0becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b0bf0: 0x431023
    ctx->pc = 0x2b0bf0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0bf4: 0xac820110
    ctx->pc = 0x2b0bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 2));
    // 0x2b0bf8: 0x3c020000
    ctx->pc = 0x2b0bf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0bfc: 0x24422898
    ctx->pc = 0x2b0bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b0c00: 0x431023
    ctx->pc = 0x2b0c00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c04: 0xac820118
    ctx->pc = 0x2b0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 2));
    // 0x2b0c08: 0x3c020000
    ctx->pc = 0x2b0c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c0c: 0x24422c48
    ctx->pc = 0x2b0c0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b0c10: 0x431023
    ctx->pc = 0x2b0c10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c14: 0xac82011c
    ctx->pc = 0x2b0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x2b0c18: 0x3c020000
    ctx->pc = 0x2b0c18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c1c: 0x24422898
    ctx->pc = 0x2b0c1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b0c20: 0x431023
    ctx->pc = 0x2b0c20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c24: 0xac820124
    ctx->pc = 0x2b0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
    // 0x2b0c28: 0x3c020000
    ctx->pc = 0x2b0c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c2c: 0x24422940
    ctx->pc = 0x2b0c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b0c30: 0x431023
    ctx->pc = 0x2b0c30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c34: 0xac820128
    ctx->pc = 0x2b0c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 2));
    // 0x2b0c38: 0x3c020000
    ctx->pc = 0x2b0c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c3c: 0x24422910
    ctx->pc = 0x2b0c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10512));
    // 0x2b0c40: 0x431023
    ctx->pc = 0x2b0c40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c44: 0xac820130
    ctx->pc = 0x2b0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
    // 0x2b0c48: 0x3c020000
    ctx->pc = 0x2b0c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c4c: 0x24422940
    ctx->pc = 0x2b0c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b0c50: 0x431023
    ctx->pc = 0x2b0c50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c54: 0xac820134
    ctx->pc = 0x2b0c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
    // 0x2b0c58: 0x3c020000
    ctx->pc = 0x2b0c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c5c: 0x24422940
    ctx->pc = 0x2b0c5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b0c60: 0x431023
    ctx->pc = 0x2b0c60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c64: 0xac82013c
    ctx->pc = 0x2b0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x2b0c68: 0x3c020000
    ctx->pc = 0x2b0c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c6c: 0x24422a08
    ctx->pc = 0x2b0c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b0c70: 0x431023
    ctx->pc = 0x2b0c70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c74: 0xac820140
    ctx->pc = 0x2b0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 2));
    // 0x2b0c78: 0x3c020000
    ctx->pc = 0x2b0c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c7c: 0x244229d8
    ctx->pc = 0x2b0c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10712));
    // 0x2b0c80: 0x431023
    ctx->pc = 0x2b0c80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c84: 0xac820148
    ctx->pc = 0x2b0c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x2b0c88: 0x3c020000
    ctx->pc = 0x2b0c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c8c: 0x24422a08
    ctx->pc = 0x2b0c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b0c90: 0x431023
    ctx->pc = 0x2b0c90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0c94: 0xac82014c
    ctx->pc = 0x2b0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 2));
    // 0x2b0c98: 0x3c020000
    ctx->pc = 0x2b0c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0c9c: 0x24422a08
    ctx->pc = 0x2b0c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b0ca0: 0x431023
    ctx->pc = 0x2b0ca0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ca4: 0xac820154
    ctx->pc = 0x2b0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x2b0ca8: 0x3c020000
    ctx->pc = 0x2b0ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0cac: 0x24422ad8
    ctx->pc = 0x2b0cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10968));
    // 0x2b0cb0: 0x431023
    ctx->pc = 0x2b0cb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0cb4: 0xac820158
    ctx->pc = 0x2b0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x2b0cb8: 0x3c020000
    ctx->pc = 0x2b0cb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0cbc: 0x24422ad8
    ctx->pc = 0x2b0cbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10968));
    // 0x2b0cc0: 0x431023
    ctx->pc = 0x2b0cc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0cc4: 0xac820160
    ctx->pc = 0x2b0cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 2));
    // 0x2b0cc8: 0x3c020000
    ctx->pc = 0x2b0cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0ccc: 0x24422c28
    ctx->pc = 0x2b0cccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b0cd0: 0x431023
    ctx->pc = 0x2b0cd0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0cd4: 0xac820164
    ctx->pc = 0x2b0cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 2));
    // 0x2b0cd8: 0x3c020000
    ctx->pc = 0x2b0cd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0cdc: 0x24422c28
    ctx->pc = 0x2b0cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b0ce0: 0x431023
    ctx->pc = 0x2b0ce0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ce4: 0xac82016c
    ctx->pc = 0x2b0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 2));
    // 0x2b0ce8: 0x3c020000
    ctx->pc = 0x2b0ce8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0cec: 0x24422c48
    ctx->pc = 0x2b0cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b0cf0: 0x431023
    ctx->pc = 0x2b0cf0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0cf4: 0xac820170
    ctx->pc = 0x2b0cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 2));
    // 0x2b0cf8: 0x3c020000
    ctx->pc = 0x2b0cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0cfc: 0x24422c28
    ctx->pc = 0x2b0cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b0d00: 0x431023
    ctx->pc = 0x2b0d00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d04: 0xac820178
    ctx->pc = 0x2b0d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 2));
    // 0x2b0d08: 0x3c020000
    ctx->pc = 0x2b0d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d0c: 0x24422fd0
    ctx->pc = 0x2b0d0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0d10: 0x431023
    ctx->pc = 0x2b0d10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d14: 0xac82017c
    ctx->pc = 0x2b0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 2));
    // 0x2b0d18: 0x3c020000
    ctx->pc = 0x2b0d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d1c: 0x24422c48
    ctx->pc = 0x2b0d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b0d20: 0x431023
    ctx->pc = 0x2b0d20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d24: 0xac820184
    ctx->pc = 0x2b0d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 2));
    // 0x2b0d28: 0x3c020000
    ctx->pc = 0x2b0d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d2c: 0x24422d58
    ctx->pc = 0x2b0d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11608));
    // 0x2b0d30: 0x431023
    ctx->pc = 0x2b0d30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d34: 0xac820188
    ctx->pc = 0x2b0d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 2));
    // 0x2b0d38: 0x3c020000
    ctx->pc = 0x2b0d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d3c: 0x24422d58
    ctx->pc = 0x2b0d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11608));
    // 0x2b0d40: 0x431023
    ctx->pc = 0x2b0d40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d44: 0xac820190
    ctx->pc = 0x2b0d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 2));
    // 0x2b0d48: 0x3c020000
    ctx->pc = 0x2b0d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d4c: 0x24422fd0
    ctx->pc = 0x2b0d4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0d50: 0x431023
    ctx->pc = 0x2b0d50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d54: 0xac820194
    ctx->pc = 0x2b0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 2));
    // 0x2b0d58: 0x3c020000
    ctx->pc = 0x2b0d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d5c: 0x24422fd0
    ctx->pc = 0x2b0d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0d60: 0x431023
    ctx->pc = 0x2b0d60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d64: 0xac82019c
    ctx->pc = 0x2b0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 2));
    // 0x2b0d68: 0x3c020000
    ctx->pc = 0x2b0d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d6c: 0x244230b0
    ctx->pc = 0x2b0d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12464));
    // 0x2b0d70: 0x431023
    ctx->pc = 0x2b0d70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d74: 0xac8201a0
    ctx->pc = 0x2b0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 2));
    // 0x2b0d78: 0x3c020000
    ctx->pc = 0x2b0d78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d7c: 0x24422fd0
    ctx->pc = 0x2b0d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b0d80: 0x431023
    ctx->pc = 0x2b0d80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d84: 0xac8201a8
    ctx->pc = 0x2b0d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 2));
    // 0x2b0d88: 0x3c020000
    ctx->pc = 0x2b0d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d8c: 0x24423298
    ctx->pc = 0x2b0d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12952));
    // 0x2b0d90: 0x431023
    ctx->pc = 0x2b0d90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0d94: 0xac8201ac
    ctx->pc = 0x2b0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 2));
    // 0x2b0d98: 0x3c020000
    ctx->pc = 0x2b0d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0d9c: 0x24423298
    ctx->pc = 0x2b0d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12952));
    // 0x2b0da0: 0x431023
    ctx->pc = 0x2b0da0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0da4: 0xac8201b4
    ctx->pc = 0x2b0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 2));
    // 0x2b0da8: 0x3c020000
    ctx->pc = 0x2b0da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0dac: 0x24423548
    ctx->pc = 0x2b0dacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13640));
    // 0x2b0db0: 0x431023
    ctx->pc = 0x2b0db0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0db4: 0xac8201b8
    ctx->pc = 0x2b0db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 2));
    // 0x2b0db8: 0x3c020000
    ctx->pc = 0x2b0db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0dbc: 0x24423548
    ctx->pc = 0x2b0dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13640));
    // 0x2b0dc0: 0x431023
    ctx->pc = 0x2b0dc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0dc4: 0xac8201c0
    ctx->pc = 0x2b0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 2));
    // 0x2b0dc8: 0x3c020000
    ctx->pc = 0x2b0dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0dcc: 0x244236e8
    ctx->pc = 0x2b0dccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b0dd0: 0x431023
    ctx->pc = 0x2b0dd0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0dd4: 0xac8201c4
    ctx->pc = 0x2b0dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 2));
    // 0x2b0dd8: 0x3c020000
    ctx->pc = 0x2b0dd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0ddc: 0x244201d8
    ctx->pc = 0x2b0ddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 472));
    // 0x2b0de0: 0x431023
    ctx->pc = 0x2b0de0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0de4: 0xac8201cc
    ctx->pc = 0x2b0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 2));
    // 0x2b0de8: 0x3c020000
    ctx->pc = 0x2b0de8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0dec: 0x244201f8
    ctx->pc = 0x2b0decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 504));
    // 0x2b0df0: 0x431023
    ctx->pc = 0x2b0df0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0df4: 0xac8201d0
    ctx->pc = 0x2b0df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 2));
    // 0x2b0df8: 0x3c020000
    ctx->pc = 0x2b0df8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0dfc: 0x24420238
    ctx->pc = 0x2b0dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 568));
    // 0x2b0e00: 0x431023
    ctx->pc = 0x2b0e00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e04: 0xac8201d8
    ctx->pc = 0x2b0e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 2));
    // 0x2b0e08: 0x3c020000
    ctx->pc = 0x2b0e08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e0c: 0x24420238
    ctx->pc = 0x2b0e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 568));
    // 0x2b0e10: 0x431023
    ctx->pc = 0x2b0e10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e14: 0xac8201dc
    ctx->pc = 0x2b0e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 2));
    // 0x2b0e18: 0x3c020000
    ctx->pc = 0x2b0e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e1c: 0x24420278
    ctx->pc = 0x2b0e1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 632));
    // 0x2b0e20: 0x431023
    ctx->pc = 0x2b0e20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e24: 0xac8201e4
    ctx->pc = 0x2b0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 2));
    // 0x2b0e28: 0x3c020000
    ctx->pc = 0x2b0e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e2c: 0x24420298
    ctx->pc = 0x2b0e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 664));
    // 0x2b0e30: 0x431023
    ctx->pc = 0x2b0e30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e34: 0xac8201e8
    ctx->pc = 0x2b0e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 2));
    // 0x2b0e38: 0x3c020000
    ctx->pc = 0x2b0e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e3c: 0x244202d8
    ctx->pc = 0x2b0e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 728));
    // 0x2b0e40: 0x431023
    ctx->pc = 0x2b0e40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e44: 0xac8201f0
    ctx->pc = 0x2b0e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 2));
    // 0x2b0e48: 0x3c020000
    ctx->pc = 0x2b0e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e4c: 0x244202d8
    ctx->pc = 0x2b0e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 728));
    // 0x2b0e50: 0x431023
    ctx->pc = 0x2b0e50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e54: 0xac8201f4
    ctx->pc = 0x2b0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 500), GPR_U32(ctx, 2));
    // 0x2b0e58: 0x3c020000
    ctx->pc = 0x2b0e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e5c: 0x244202e0
    ctx->pc = 0x2b0e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 736));
    // 0x2b0e60: 0x431023
    ctx->pc = 0x2b0e60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e64: 0xac8201fc
    ctx->pc = 0x2b0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 2));
    // 0x2b0e68: 0x3c020000
    ctx->pc = 0x2b0e68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e6c: 0x24420300
    ctx->pc = 0x2b0e6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 768));
    // 0x2b0e70: 0x431023
    ctx->pc = 0x2b0e70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e74: 0xac820200
    ctx->pc = 0x2b0e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
    // 0x2b0e78: 0x3c020000
    ctx->pc = 0x2b0e78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e7c: 0x24420380
    ctx->pc = 0x2b0e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 896));
    // 0x2b0e80: 0x431023
    ctx->pc = 0x2b0e80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e84: 0xac820208
    ctx->pc = 0x2b0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 2));
    // 0x2b0e88: 0x3c020000
    ctx->pc = 0x2b0e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e8c: 0x244203a0
    ctx->pc = 0x2b0e8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 928));
    // 0x2b0e90: 0x431023
    ctx->pc = 0x2b0e90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0e94: 0xac82020c
    ctx->pc = 0x2b0e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
    // 0x2b0e98: 0x3c020000
    ctx->pc = 0x2b0e98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0e9c: 0x244203e8
    ctx->pc = 0x2b0e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2b0ea0: 0x431023
    ctx->pc = 0x2b0ea0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ea4: 0xac820214
    ctx->pc = 0x2b0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
    // 0x2b0ea8: 0x3c020000
    ctx->pc = 0x2b0ea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0eac: 0x24420408
    ctx->pc = 0x2b0eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1032));
    // 0x2b0eb0: 0x431023
    ctx->pc = 0x2b0eb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0eb4: 0xac820218
    ctx->pc = 0x2b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
    // 0x2b0eb8: 0x3c020000
    ctx->pc = 0x2b0eb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0ebc: 0x244204f0
    ctx->pc = 0x2b0ebcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1264));
    // 0x2b0ec0: 0x431023
    ctx->pc = 0x2b0ec0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ec4: 0xac820220
    ctx->pc = 0x2b0ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 2));
    // 0x2b0ec8: 0x3c020000
    ctx->pc = 0x2b0ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0ecc: 0x24420510
    ctx->pc = 0x2b0eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1296));
    // 0x2b0ed0: 0x431023
    ctx->pc = 0x2b0ed0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ed4: 0xac820224
    ctx->pc = 0x2b0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    // 0x2b0ed8: 0x3c020000
    ctx->pc = 0x2b0ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0edc: 0x24420520
    ctx->pc = 0x2b0edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1312));
    // 0x2b0ee0: 0x431023
    ctx->pc = 0x2b0ee0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ee4: 0xac82022c
    ctx->pc = 0x2b0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
    // 0x2b0ee8: 0x3c020000
    ctx->pc = 0x2b0ee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0eec: 0x24420540
    ctx->pc = 0x2b0eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2b0ef0: 0x431023
    ctx->pc = 0x2b0ef0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ef4: 0xac820230
    ctx->pc = 0x2b0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x2b0ef8: 0x3c020000
    ctx->pc = 0x2b0ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0efc: 0x24420628
    ctx->pc = 0x2b0efcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1576));
    // 0x2b0f00: 0x431023
    ctx->pc = 0x2b0f00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f04: 0xac820238
    ctx->pc = 0x2b0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 2));
    // 0x2b0f08: 0x3c020000
    ctx->pc = 0x2b0f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f0c: 0x24420648
    ctx->pc = 0x2b0f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1608));
    // 0x2b0f10: 0x431023
    ctx->pc = 0x2b0f10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f14: 0xac82023c
    ctx->pc = 0x2b0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 2));
    // 0x2b0f18: 0x3c020000
    ctx->pc = 0x2b0f18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f1c: 0x244206e8
    ctx->pc = 0x2b0f1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1768));
    // 0x2b0f20: 0x431023
    ctx->pc = 0x2b0f20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f24: 0xac820244
    ctx->pc = 0x2b0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 2));
    // 0x2b0f28: 0x3c020000
    ctx->pc = 0x2b0f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f2c: 0x24420708
    ctx->pc = 0x2b0f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1800));
    // 0x2b0f30: 0x431023
    ctx->pc = 0x2b0f30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f34: 0xac820248
    ctx->pc = 0x2b0f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 2));
    // 0x2b0f38: 0x3c020000
    ctx->pc = 0x2b0f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f3c: 0x24420738
    ctx->pc = 0x2b0f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1848));
    // 0x2b0f40: 0x431023
    ctx->pc = 0x2b0f40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f44: 0xac820250
    ctx->pc = 0x2b0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x2b0f48: 0x3c020000
    ctx->pc = 0x2b0f48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f4c: 0x24420758
    ctx->pc = 0x2b0f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1880));
    // 0x2b0f50: 0x431023
    ctx->pc = 0x2b0f50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f54: 0xac820254
    ctx->pc = 0x2b0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 2));
    // 0x2b0f58: 0x3c020000
    ctx->pc = 0x2b0f58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f5c: 0x24420768
    ctx->pc = 0x2b0f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1896));
    // 0x2b0f60: 0x431023
    ctx->pc = 0x2b0f60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f64: 0xac82025c
    ctx->pc = 0x2b0f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 2));
    // 0x2b0f68: 0x3c020000
    ctx->pc = 0x2b0f68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f6c: 0x24420788
    ctx->pc = 0x2b0f6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1928));
    // 0x2b0f70: 0x431023
    ctx->pc = 0x2b0f70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f74: 0xac820260
    ctx->pc = 0x2b0f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
    // 0x2b0f78: 0x3c020000
    ctx->pc = 0x2b0f78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f7c: 0x24420858
    ctx->pc = 0x2b0f7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2b0f80: 0x431023
    ctx->pc = 0x2b0f80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f84: 0xac820268
    ctx->pc = 0x2b0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 2));
    // 0x2b0f88: 0x3c020000
    ctx->pc = 0x2b0f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f8c: 0x24420878
    ctx->pc = 0x2b0f8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2168));
    // 0x2b0f90: 0x431023
    ctx->pc = 0x2b0f90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f94: 0xac82026c
    ctx->pc = 0x2b0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 2));
    // 0x2b0f98: 0x3c020000
    ctx->pc = 0x2b0f98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0f9c: 0x244208e8
    ctx->pc = 0x2b0f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2280));
    // 0x2b0fa0: 0x431023
    ctx->pc = 0x2b0fa0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0fa4: 0xac820274
    ctx->pc = 0x2b0fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
    // 0x2b0fa8: 0x3c020000
    ctx->pc = 0x2b0fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0fac: 0x24420908
    ctx->pc = 0x2b0facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2312));
    // 0x2b0fb0: 0x431023
    ctx->pc = 0x2b0fb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0fb4: 0xac820278
    ctx->pc = 0x2b0fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 2));
    // 0x2b0fb8: 0x3c020000
    ctx->pc = 0x2b0fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0fbc: 0x24420938
    ctx->pc = 0x2b0fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2360));
    // 0x2b0fc0: 0x431023
    ctx->pc = 0x2b0fc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0fc4: 0xac820280
    ctx->pc = 0x2b0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 2));
    // 0x2b0fc8: 0x3c020000
    ctx->pc = 0x2b0fc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0fcc: 0x24420958
    ctx->pc = 0x2b0fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2392));
    // 0x2b0fd0: 0x431023
    ctx->pc = 0x2b0fd0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0fd4: 0xac820284
    ctx->pc = 0x2b0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 2));
    // 0x2b0fd8: 0x3c020000
    ctx->pc = 0x2b0fd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0fdc: 0x24420970
    ctx->pc = 0x2b0fdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2416));
    // 0x2b0fe0: 0x431023
    ctx->pc = 0x2b0fe0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0fe4: 0xac82028c
    ctx->pc = 0x2b0fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 652), GPR_U32(ctx, 2));
    // 0x2b0fe8: 0x3c020000
    ctx->pc = 0x2b0fe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0fec: 0x24420990
    ctx->pc = 0x2b0fecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2b0ff0: 0x431023
    ctx->pc = 0x2b0ff0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0ff4: 0xac820290
    ctx->pc = 0x2b0ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 656), GPR_U32(ctx, 2));
    // 0x2b0ff8: 0x3c020000
    ctx->pc = 0x2b0ff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b0ffc: 0x244209c8
    ctx->pc = 0x2b0ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2504));
    // 0x2b1000: 0x431023
    ctx->pc = 0x2b1000u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1004: 0xac820298
    ctx->pc = 0x2b1004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 2));
    // 0x2b1008: 0x3c020000
    ctx->pc = 0x2b1008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b100c: 0x244209e8
    ctx->pc = 0x2b100cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2536));
    // 0x2b1010: 0x431023
    ctx->pc = 0x2b1010u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1014: 0xac82029c
    ctx->pc = 0x2b1014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 2));
    // 0x2b1018: 0x3c020000
    ctx->pc = 0x2b1018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b101c: 0x24420ad8
    ctx->pc = 0x2b101cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2776));
    // 0x2b1020: 0x431023
    ctx->pc = 0x2b1020u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1024: 0xac8202a4
    ctx->pc = 0x2b1024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 676), GPR_U32(ctx, 2));
    // 0x2b1028: 0x3c020000
    ctx->pc = 0x2b1028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b102c: 0x24420ad8
    ctx->pc = 0x2b102cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2776));
    // 0x2b1030: 0x431023
    ctx->pc = 0x2b1030u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1034: 0xac8202a8
    ctx->pc = 0x2b1034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 680), GPR_U32(ctx, 2));
    // 0x2b1038: 0x3c020000
    ctx->pc = 0x2b1038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b103c: 0x24420b10
    ctx->pc = 0x2b103cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2832));
    // 0x2b1040: 0x431023
    ctx->pc = 0x2b1040u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1044: 0xac8202b0
    ctx->pc = 0x2b1044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 2));
    // 0x2b1048: 0x3c020000
    ctx->pc = 0x2b1048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b104c: 0x24420b30
    ctx->pc = 0x2b104cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2864));
    // 0x2b1050: 0x431023
    ctx->pc = 0x2b1050u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1054: 0xac8202b4
    ctx->pc = 0x2b1054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 2));
    // 0x2b1058: 0x3c020000
    ctx->pc = 0x2b1058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b105c: 0x24420b58
    ctx->pc = 0x2b105cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2904));
    // 0x2b1060: 0x431023
    ctx->pc = 0x2b1060u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1064: 0xac8202bc
    ctx->pc = 0x2b1064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 700), GPR_U32(ctx, 2));
    // 0x2b1068: 0x3c020000
    ctx->pc = 0x2b1068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b106c: 0x24420b78
    ctx->pc = 0x2b106cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2936));
    // 0x2b1070: 0x431023
    ctx->pc = 0x2b1070u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1074: 0xac8202c0
    ctx->pc = 0x2b1074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 2));
    // 0x2b1078: 0x3c020000
    ctx->pc = 0x2b1078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b107c: 0x24420c20
    ctx->pc = 0x2b107cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3104));
    // 0x2b1080: 0x431023
    ctx->pc = 0x2b1080u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1084: 0xac8202c8
    ctx->pc = 0x2b1084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 712), GPR_U32(ctx, 2));
    // 0x2b1088: 0x3c020000
    ctx->pc = 0x2b1088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b108c: 0x24420c40
    ctx->pc = 0x2b108cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3136));
    // 0x2b1090: 0x431023
    ctx->pc = 0x2b1090u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1094: 0xac8202cc
    ctx->pc = 0x2b1094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 716), GPR_U32(ctx, 2));
    // 0x2b1098: 0x3c020000
    ctx->pc = 0x2b1098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b109c: 0x24420c98
    ctx->pc = 0x2b109cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3224));
    // 0x2b10a0: 0x431023
    ctx->pc = 0x2b10a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b10a4: 0xac8202d4
    ctx->pc = 0x2b10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 2));
    // 0x2b10a8: 0x3c020000
    ctx->pc = 0x2b10a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b10ac: 0x24420c98
    ctx->pc = 0x2b10acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3224));
    // 0x2b10b0: 0x431023
    ctx->pc = 0x2b10b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b10b4: 0xac8202d8
    ctx->pc = 0x2b10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x2b10b8: 0x3c020000
    ctx->pc = 0x2b10b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b10bc: 0x24420d40
    ctx->pc = 0x2b10bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3392));
    // 0x2b10c0: 0x431023
    ctx->pc = 0x2b10c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b10c4: 0xac8202e0
    ctx->pc = 0x2b10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 2));
    // 0x2b10c8: 0x3c020000
    ctx->pc = 0x2b10c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b10cc: 0x24420d60
    ctx->pc = 0x2b10ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2b10d0: 0x431023
    ctx->pc = 0x2b10d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b10d4: 0xac8202e4
    ctx->pc = 0x2b10d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 2));
    // 0x2b10d8: 0x3c020000
    ctx->pc = 0x2b10d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b10dc: 0x24420e20
    ctx->pc = 0x2b10dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3616));
    // 0x2b10e0: 0x431023
    ctx->pc = 0x2b10e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b10e4: 0xac8202ec
    ctx->pc = 0x2b10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 748), GPR_U32(ctx, 2));
    // 0x2b10e8: 0x3c020000
    ctx->pc = 0x2b10e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b10ec: 0x24420e40
    ctx->pc = 0x2b10ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3648));
    // 0x2b10f0: 0x431023
    ctx->pc = 0x2b10f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b10f4: 0xac8202f0
    ctx->pc = 0x2b10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 2));
    // 0x2b10f8: 0x3c020000
    ctx->pc = 0x2b10f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b10fc: 0x24420e88
    ctx->pc = 0x2b10fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3720));
    // 0x2b1100: 0x431023
    ctx->pc = 0x2b1100u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1104: 0xac8202f8
    ctx->pc = 0x2b1104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 760), GPR_U32(ctx, 2));
    // 0x2b1108: 0x3c020000
    ctx->pc = 0x2b1108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b110c: 0x24420ea8
    ctx->pc = 0x2b110cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3752));
    // 0x2b1110: 0x431023
    ctx->pc = 0x2b1110u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1114: 0xac8202fc
    ctx->pc = 0x2b1114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 764), GPR_U32(ctx, 2));
    // 0x2b1118: 0xac820304
    ctx->pc = 0x2b1118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 772), GPR_U32(ctx, 2));
    // 0x2b111c: 0x3c020000
    ctx->pc = 0x2b111cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1120: 0x24420ec8
    ctx->pc = 0x2b1120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3784));
    // 0x2b1124: 0x431023
    ctx->pc = 0x2b1124u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1128: 0xac820308
    ctx->pc = 0x2b1128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 776), GPR_U32(ctx, 2));
    // 0x2b112c: 0x3c020000
    ctx->pc = 0x2b112cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1130: 0x24420ed8
    ctx->pc = 0x2b1130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3800));
    // 0x2b1134: 0x431023
    ctx->pc = 0x2b1134u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1138: 0xac820310
    ctx->pc = 0x2b1138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 784), GPR_U32(ctx, 2));
    // 0x2b113c: 0x3c020000
    ctx->pc = 0x2b113cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1140: 0x24420ef8
    ctx->pc = 0x2b1140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3832));
    // 0x2b1144: 0x431023
    ctx->pc = 0x2b1144u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1148: 0xac820314
    ctx->pc = 0x2b1148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 788), GPR_U32(ctx, 2));
    // 0x2b114c: 0x3c020000
    ctx->pc = 0x2b114cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1150: 0x24420f58
    ctx->pc = 0x2b1150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3928));
    // 0x2b1154: 0x431023
    ctx->pc = 0x2b1154u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1158: 0xac82031c
    ctx->pc = 0x2b1158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 796), GPR_U32(ctx, 2));
    // 0x2b115c: 0x3c020000
    ctx->pc = 0x2b115cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1160: 0x24420f78
    ctx->pc = 0x2b1160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3960));
    // 0x2b1164: 0x431023
    ctx->pc = 0x2b1164u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1168: 0xac820320
    ctx->pc = 0x2b1168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 2));
    // 0x2b116c: 0x3c020000
    ctx->pc = 0x2b116cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1170: 0x24420ff8
    ctx->pc = 0x2b1170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4088));
    // 0x2b1174: 0x431023
    ctx->pc = 0x2b1174u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1178: 0xac820328
    ctx->pc = 0x2b1178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 808), GPR_U32(ctx, 2));
    // 0x2b117c: 0x3c020000
    ctx->pc = 0x2b117cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1180: 0x24421018
    ctx->pc = 0x2b1180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4120));
    // 0x2b1184: 0x3c030000
    ctx->pc = 0x2b1184u;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2b1188: 0x24630000
    ctx->pc = 0x2b1188u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2b118c: 0x431023
    ctx->pc = 0x2b118cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1190: 0xac82032c
    ctx->pc = 0x2b1190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 812), GPR_U32(ctx, 2));
    // 0x2b1194: 0x3c040037
    ctx->pc = 0x2b1194u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2b1198: 0x2484f150
    ctx->pc = 0x2b1198u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963536));
    // 0x2b119c: 0x3c020000
    ctx->pc = 0x2b119cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b11a0: 0x24421200
    ctx->pc = 0x2b11a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2b11a4: 0x431023
    ctx->pc = 0x2b11a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b11a8: 0xac820334
    ctx->pc = 0x2b11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 820), GPR_U32(ctx, 2));
    // 0x2b11ac: 0x3c020000
    ctx->pc = 0x2b11acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b11b0: 0x24421220
    ctx->pc = 0x2b11b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4640));
    // 0x2b11b4: 0x431023
    ctx->pc = 0x2b11b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b11b8: 0xac820338
    ctx->pc = 0x2b11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 824), GPR_U32(ctx, 2));
    // 0x2b11bc: 0x3c020000
    ctx->pc = 0x2b11bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b11c0: 0x24421eb0
    ctx->pc = 0x2b11c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7856));
    // 0x2b11c4: 0x431023
    ctx->pc = 0x2b11c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b11c8: 0xac820340
    ctx->pc = 0x2b11c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 2));
    // 0x2b11cc: 0x3c020000
    ctx->pc = 0x2b11ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b11d0: 0x24421ed0
    ctx->pc = 0x2b11d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7888));
    // 0x2b11d4: 0x431023
    ctx->pc = 0x2b11d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b11d8: 0xac820344
    ctx->pc = 0x2b11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 2));
    // 0x2b11dc: 0x3c020000
    ctx->pc = 0x2b11dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b11e0: 0x24421f28
    ctx->pc = 0x2b11e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7976));
    // 0x2b11e4: 0x431023
    ctx->pc = 0x2b11e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b11e8: 0xac82034c
    ctx->pc = 0x2b11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 844), GPR_U32(ctx, 2));
    // 0x2b11ec: 0x3c020000
    ctx->pc = 0x2b11ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b11f0: 0x24421f48
    ctx->pc = 0x2b11f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8008));
    // 0x2b11f4: 0x431023
    ctx->pc = 0x2b11f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b11f8: 0xac820350
    ctx->pc = 0x2b11f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 848), GPR_U32(ctx, 2));
    // 0x2b11fc: 0x3c020000
    ctx->pc = 0x2b11fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1200: 0x244213a8
    ctx->pc = 0x2b1200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5032));
    // 0x2b1204: 0x431023
    ctx->pc = 0x2b1204u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1208: 0xac820358
    ctx->pc = 0x2b1208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 2));
    // 0x2b120c: 0x3c020000
    ctx->pc = 0x2b120cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1210: 0x244213c8
    ctx->pc = 0x2b1210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5064));
    // 0x2b1214: 0x431023
    ctx->pc = 0x2b1214u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1218: 0xac82035c
    ctx->pc = 0x2b1218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 860), GPR_U32(ctx, 2));
    // 0x2b121c: 0x3c020000
    ctx->pc = 0x2b121cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1220: 0x24421440
    ctx->pc = 0x2b1220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5184));
    // 0x2b1224: 0x431023
    ctx->pc = 0x2b1224u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1228: 0xac820364
    ctx->pc = 0x2b1228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 2));
    // 0x2b122c: 0x3c020000
    ctx->pc = 0x2b122cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1230: 0x24421460
    ctx->pc = 0x2b1230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5216));
    // 0x2b1234: 0x431023
    ctx->pc = 0x2b1234u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1238: 0xac820368
    ctx->pc = 0x2b1238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 872), GPR_U32(ctx, 2));
    // 0x2b123c: 0x3c020000
    ctx->pc = 0x2b123cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1240: 0x244214d0
    ctx->pc = 0x2b1240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2b1244: 0x431023
    ctx->pc = 0x2b1244u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1248: 0xac820370
    ctx->pc = 0x2b1248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x2b124c: 0x3c020000
    ctx->pc = 0x2b124cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1250: 0x244214f0
    ctx->pc = 0x2b1250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5360));
    // 0x2b1254: 0x431023
    ctx->pc = 0x2b1254u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1258: 0xac820374
    ctx->pc = 0x2b1258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 2));
    // 0x2b125c: 0x3c020000
    ctx->pc = 0x2b125cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1260: 0x24421540
    ctx->pc = 0x2b1260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5440));
    // 0x2b1264: 0x431023
    ctx->pc = 0x2b1264u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1268: 0xac82037c
    ctx->pc = 0x2b1268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 892), GPR_U32(ctx, 2));
    // 0x2b126c: 0x3c020000
    ctx->pc = 0x2b126cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1270: 0x24421560
    ctx->pc = 0x2b1270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5472));
    // 0x2b1274: 0x431023
    ctx->pc = 0x2b1274u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1278: 0xac820380
    ctx->pc = 0x2b1278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x2b127c: 0x3c020000
    ctx->pc = 0x2b127cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1280: 0x24421580
    ctx->pc = 0x2b1280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5504));
    // 0x2b1284: 0x431023
    ctx->pc = 0x2b1284u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1288: 0xac820388
    ctx->pc = 0x2b1288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 904), GPR_U32(ctx, 2));
    // 0x2b128c: 0x3c020000
    ctx->pc = 0x2b128cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1290: 0x244215a0
    ctx->pc = 0x2b1290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5536));
    // 0x2b1294: 0x431023
    ctx->pc = 0x2b1294u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1298: 0xac82038c
    ctx->pc = 0x2b1298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 908), GPR_U32(ctx, 2));
    // 0x2b129c: 0x3c020000
    ctx->pc = 0x2b129cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b12a0: 0x244215c8
    ctx->pc = 0x2b12a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5576));
    // 0x2b12a4: 0x431023
    ctx->pc = 0x2b12a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b12a8: 0xac820394
    ctx->pc = 0x2b12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 2));
    // 0x2b12ac: 0x3c020000
    ctx->pc = 0x2b12acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b12b0: 0x244215e8
    ctx->pc = 0x2b12b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5608));
    // 0x2b12b4: 0x431023
    ctx->pc = 0x2b12b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b12b8: 0xac820398
    ctx->pc = 0x2b12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 920), GPR_U32(ctx, 2));
    // 0x2b12bc: 0x3c020000
    ctx->pc = 0x2b12bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b12c0: 0x24421630
    ctx->pc = 0x2b12c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5680));
    // 0x2b12c4: 0x431023
    ctx->pc = 0x2b12c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b12c8: 0xac8203a0
    ctx->pc = 0x2b12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 2));
    // 0x2b12cc: 0x3c020000
    ctx->pc = 0x2b12ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b12d0: 0x24421650
    ctx->pc = 0x2b12d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5712));
    // 0x2b12d4: 0x431023
    ctx->pc = 0x2b12d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b12d8: 0xac8203a4
    ctx->pc = 0x2b12d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 2));
    // 0x2b12dc: 0x3c020000
    ctx->pc = 0x2b12dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b12e0: 0x24421690
    ctx->pc = 0x2b12e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5776));
    // 0x2b12e4: 0x431023
    ctx->pc = 0x2b12e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b12e8: 0xac8203ac
    ctx->pc = 0x2b12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 2));
    // 0x2b12ec: 0x3c020000
    ctx->pc = 0x2b12ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b12f0: 0x244216b0
    ctx->pc = 0x2b12f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5808));
    // 0x2b12f4: 0x431023
    ctx->pc = 0x2b12f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b12f8: 0xac8203b0
    ctx->pc = 0x2b12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 944), GPR_U32(ctx, 2));
    // 0x2b12fc: 0x3c020000
    ctx->pc = 0x2b12fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1300: 0x244216b8
    ctx->pc = 0x2b1300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5816));
    // 0x2b1304: 0x431023
    ctx->pc = 0x2b1304u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1308: 0xac8203b8
    ctx->pc = 0x2b1308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 952), GPR_U32(ctx, 2));
    // 0x2b130c: 0x3c020000
    ctx->pc = 0x2b130cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1310: 0x244216d8
    ctx->pc = 0x2b1310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5848));
    // 0x2b1314: 0x431023
    ctx->pc = 0x2b1314u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1318: 0xac8203bc
    ctx->pc = 0x2b1318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 956), GPR_U32(ctx, 2));
    // 0x2b131c: 0x3c020000
    ctx->pc = 0x2b131cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1320: 0x244216f8
    ctx->pc = 0x2b1320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5880));
    // 0x2b1324: 0x431023
    ctx->pc = 0x2b1324u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1328: 0xac8203c4
    ctx->pc = 0x2b1328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 964), GPR_U32(ctx, 2));
    // 0x2b132c: 0x3c020000
    ctx->pc = 0x2b132cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1330: 0x24421718
    ctx->pc = 0x2b1330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5912));
    // 0x2b1334: 0x431023
    ctx->pc = 0x2b1334u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1338: 0xac8203c8
    ctx->pc = 0x2b1338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 968), GPR_U32(ctx, 2));
    // 0x2b133c: 0x3c020000
    ctx->pc = 0x2b133cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1340: 0x24421740
    ctx->pc = 0x2b1340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5952));
    // 0x2b1344: 0x431023
    ctx->pc = 0x2b1344u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1348: 0xac8203d0
    ctx->pc = 0x2b1348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 976), GPR_U32(ctx, 2));
    // 0x2b134c: 0x3c020000
    ctx->pc = 0x2b134cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1350: 0x24421760
    ctx->pc = 0x2b1350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5984));
    // 0x2b1354: 0x431023
    ctx->pc = 0x2b1354u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1358: 0xac8203d4
    ctx->pc = 0x2b1358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 980), GPR_U32(ctx, 2));
    // 0x2b135c: 0x3c020000
    ctx->pc = 0x2b135cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1360: 0x24421778
    ctx->pc = 0x2b1360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6008));
    // 0x2b1364: 0x431023
    ctx->pc = 0x2b1364u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1368: 0xac8203dc
    ctx->pc = 0x2b1368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 988), GPR_U32(ctx, 2));
    // 0x2b136c: 0x3c020000
    ctx->pc = 0x2b136cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1370: 0x24421798
    ctx->pc = 0x2b1370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6040));
    // 0x2b1374: 0x431023
    ctx->pc = 0x2b1374u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1378: 0xac8203e0
    ctx->pc = 0x2b1378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 992), GPR_U32(ctx, 2));
    // 0x2b137c: 0x3c020000
    ctx->pc = 0x2b137cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1380: 0x244217b8
    ctx->pc = 0x2b1380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6072));
    // 0x2b1384: 0x431023
    ctx->pc = 0x2b1384u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1388: 0xac8203e8
    ctx->pc = 0x2b1388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1000), GPR_U32(ctx, 2));
    // 0x2b138c: 0x3c020000
    ctx->pc = 0x2b138cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1390: 0x244217d8
    ctx->pc = 0x2b1390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6104));
    // 0x2b1394: 0x431023
    ctx->pc = 0x2b1394u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1398: 0xac8203ec
    ctx->pc = 0x2b1398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1004), GPR_U32(ctx, 2));
    // 0x2b139c: 0x3c020000
    ctx->pc = 0x2b139cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b13a0: 0x24421800
    ctx->pc = 0x2b13a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6144));
    // 0x2b13a4: 0x431023
    ctx->pc = 0x2b13a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b13a8: 0xac8203f4
    ctx->pc = 0x2b13a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1012), GPR_U32(ctx, 2));
    // 0x2b13ac: 0x3c020000
    ctx->pc = 0x2b13acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b13b0: 0x24421820
    ctx->pc = 0x2b13b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6176));
    // 0x2b13b4: 0x431023
    ctx->pc = 0x2b13b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b13b8: 0xac8203f8
    ctx->pc = 0x2b13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1016), GPR_U32(ctx, 2));
    // 0x2b13bc: 0x3c020000
    ctx->pc = 0x2b13bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b13c0: 0x244218b8
    ctx->pc = 0x2b13c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6328));
    // 0x2b13c4: 0x431023
    ctx->pc = 0x2b13c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b13c8: 0xac820400
    ctx->pc = 0x2b13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
    // 0x2b13cc: 0x3c020000
    ctx->pc = 0x2b13ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b13d0: 0x244218d8
    ctx->pc = 0x2b13d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6360));
    // 0x2b13d4: 0x431023
    ctx->pc = 0x2b13d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b13d8: 0xac820404
    ctx->pc = 0x2b13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 2));
    // 0x2b13dc: 0x3c020000
    ctx->pc = 0x2b13dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b13e0: 0x24421980
    ctx->pc = 0x2b13e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6528));
    // 0x2b13e4: 0x431023
    ctx->pc = 0x2b13e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b13e8: 0xac82040c
    ctx->pc = 0x2b13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1036), GPR_U32(ctx, 2));
    // 0x2b13ec: 0x3c020000
    ctx->pc = 0x2b13ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b13f0: 0x244219a0
    ctx->pc = 0x2b13f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6560));
    // 0x2b13f4: 0x431023
    ctx->pc = 0x2b13f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b13f8: 0xac820410
    ctx->pc = 0x2b13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1040), GPR_U32(ctx, 2));
    // 0x2b13fc: 0x3c020000
    ctx->pc = 0x2b13fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1400: 0x24421aa8
    ctx->pc = 0x2b1400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6824));
    // 0x2b1404: 0x431023
    ctx->pc = 0x2b1404u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1408: 0xac820418
    ctx->pc = 0x2b1408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1048), GPR_U32(ctx, 2));
    // 0x2b140c: 0x3c020000
    ctx->pc = 0x2b140cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1410: 0x24421ac8
    ctx->pc = 0x2b1410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6856));
    // 0x2b1414: 0x431023
    ctx->pc = 0x2b1414u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1418: 0xac82041c
    ctx->pc = 0x2b1418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1052), GPR_U32(ctx, 2));
    // 0x2b141c: 0x3c020000
    ctx->pc = 0x2b141cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1420: 0x24421ae0
    ctx->pc = 0x2b1420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6880));
    // 0x2b1424: 0x431023
    ctx->pc = 0x2b1424u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1428: 0xac820424
    ctx->pc = 0x2b1428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 2));
    // 0x2b142c: 0x3c020000
    ctx->pc = 0x2b142cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1430: 0x24421b00
    ctx->pc = 0x2b1430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6912));
    // 0x2b1434: 0x431023
    ctx->pc = 0x2b1434u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1438: 0xac820428
    ctx->pc = 0x2b1438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1064), GPR_U32(ctx, 2));
    // 0x2b143c: 0x3c020000
    ctx->pc = 0x2b143cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1440: 0x24421b60
    ctx->pc = 0x2b1440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7008));
    // 0x2b1444: 0x431023
    ctx->pc = 0x2b1444u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1448: 0xac820430
    ctx->pc = 0x2b1448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1072), GPR_U32(ctx, 2));
    // 0x2b144c: 0x3c020000
    ctx->pc = 0x2b144cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1450: 0x24421b80
    ctx->pc = 0x2b1450u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7040));
    // 0x2b1454: 0x431023
    ctx->pc = 0x2b1454u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1458: 0xac820434
    ctx->pc = 0x2b1458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1076), GPR_U32(ctx, 2));
    // 0x2b145c: 0x3c020000
    ctx->pc = 0x2b145cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1460: 0x24421c00
    ctx->pc = 0x2b1460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7168));
    // 0x2b1464: 0x431023
    ctx->pc = 0x2b1464u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1468: 0xac82043c
    ctx->pc = 0x2b1468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1084), GPR_U32(ctx, 2));
    // 0x2b146c: 0x3c020000
    ctx->pc = 0x2b146cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1470: 0x24421c20
    ctx->pc = 0x2b1470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7200));
    // 0x2b1474: 0x431023
    ctx->pc = 0x2b1474u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1478: 0xac820440
    ctx->pc = 0x2b1478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1088), GPR_U32(ctx, 2));
    // 0x2b147c: 0x3c020000
    ctx->pc = 0x2b147cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1480: 0x24421dd0
    ctx->pc = 0x2b1480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7632));
    // 0x2b1484: 0x431023
    ctx->pc = 0x2b1484u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1488: 0xac820448
    ctx->pc = 0x2b1488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1096), GPR_U32(ctx, 2));
    // 0x2b148c: 0x3c020000
    ctx->pc = 0x2b148cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1490: 0x24421df0
    ctx->pc = 0x2b1490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7664));
    // 0x2b1494: 0x431023
    ctx->pc = 0x2b1494u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1498: 0xac82044c
    ctx->pc = 0x2b1498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1100), GPR_U32(ctx, 2));
    // 0x2b149c: 0x3c020000
    ctx->pc = 0x2b149cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b14a0: 0x24422080
    ctx->pc = 0x2b14a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8320));
    // 0x2b14a4: 0x431023
    ctx->pc = 0x2b14a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b14a8: 0xac820454
    ctx->pc = 0x2b14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1108), GPR_U32(ctx, 2));
    // 0x2b14ac: 0x3c020000
    ctx->pc = 0x2b14acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b14b0: 0x244220a0
    ctx->pc = 0x2b14b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8352));
    // 0x2b14b4: 0x431023
    ctx->pc = 0x2b14b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b14b8: 0xac820458
    ctx->pc = 0x2b14b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 2));
    // 0x2b14bc: 0x3c020000
    ctx->pc = 0x2b14bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b14c0: 0x244220f0
    ctx->pc = 0x2b14c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8432));
    // 0x2b14c4: 0x431023
    ctx->pc = 0x2b14c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b14c8: 0xac820460
    ctx->pc = 0x2b14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1120), GPR_U32(ctx, 2));
    // 0x2b14cc: 0x3c020000
    ctx->pc = 0x2b14ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b14d0: 0x24422110
    ctx->pc = 0x2b14d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8464));
    // 0x2b14d4: 0x431023
    ctx->pc = 0x2b14d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b14d8: 0xac820464
    ctx->pc = 0x2b14d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1124), GPR_U32(ctx, 2));
    // 0x2b14dc: 0x3c020000
    ctx->pc = 0x2b14dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b14e0: 0x24422130
    ctx->pc = 0x2b14e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8496));
    // 0x2b14e4: 0x431023
    ctx->pc = 0x2b14e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b14e8: 0xac82046c
    ctx->pc = 0x2b14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 2));
    // 0x2b14ec: 0x3c020000
    ctx->pc = 0x2b14ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b14f0: 0x24422150
    ctx->pc = 0x2b14f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8528));
    // 0x2b14f4: 0x431023
    ctx->pc = 0x2b14f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b14f8: 0xac820470
    ctx->pc = 0x2b14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1136), GPR_U32(ctx, 2));
    // 0x2b14fc: 0x3c020000
    ctx->pc = 0x2b14fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1500: 0x24422178
    ctx->pc = 0x2b1500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8568));
    // 0x2b1504: 0x431023
    ctx->pc = 0x2b1504u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1508: 0xac820478
    ctx->pc = 0x2b1508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1144), GPR_U32(ctx, 2));
    // 0x2b150c: 0x3c020000
    ctx->pc = 0x2b150cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1510: 0x24422198
    ctx->pc = 0x2b1510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8600));
    // 0x2b1514: 0x431023
    ctx->pc = 0x2b1514u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1518: 0xac82047c
    ctx->pc = 0x2b1518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1148), GPR_U32(ctx, 2));
    // 0x2b151c: 0x3c020000
    ctx->pc = 0x2b151cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1520: 0x244221e0
    ctx->pc = 0x2b1520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8672));
    // 0x2b1524: 0x431023
    ctx->pc = 0x2b1524u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1528: 0xac820484
    ctx->pc = 0x2b1528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1156), GPR_U32(ctx, 2));
    // 0x2b152c: 0x3c020000
    ctx->pc = 0x2b152cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1530: 0x24422200
    ctx->pc = 0x2b1530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8704));
    // 0x2b1534: 0x431023
    ctx->pc = 0x2b1534u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1538: 0xac820488
    ctx->pc = 0x2b1538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1160), GPR_U32(ctx, 2));
    // 0x2b153c: 0x3c020000
    ctx->pc = 0x2b153cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1540: 0x24422240
    ctx->pc = 0x2b1540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8768));
    // 0x2b1544: 0x431023
    ctx->pc = 0x2b1544u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1548: 0xac820490
    ctx->pc = 0x2b1548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1168), GPR_U32(ctx, 2));
    // 0x2b154c: 0x3c020000
    ctx->pc = 0x2b154cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1550: 0x24422260
    ctx->pc = 0x2b1550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8800));
    // 0x2b1554: 0x431023
    ctx->pc = 0x2b1554u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1558: 0xac820494
    ctx->pc = 0x2b1558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 2));
    // 0x2b155c: 0x3c020000
    ctx->pc = 0x2b155cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1560: 0x24422268
    ctx->pc = 0x2b1560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8808));
    // 0x2b1564: 0x431023
    ctx->pc = 0x2b1564u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1568: 0xac82049c
    ctx->pc = 0x2b1568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1180), GPR_U32(ctx, 2));
    // 0x2b156c: 0x3c020000
    ctx->pc = 0x2b156cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1570: 0x24422288
    ctx->pc = 0x2b1570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8840));
    // 0x2b1574: 0x431023
    ctx->pc = 0x2b1574u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1578: 0xac8204a0
    ctx->pc = 0x2b1578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1184), GPR_U32(ctx, 2));
    // 0x2b157c: 0x3c020000
    ctx->pc = 0x2b157cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1580: 0x244222a8
    ctx->pc = 0x2b1580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8872));
    // 0x2b1584: 0x431023
    ctx->pc = 0x2b1584u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1588: 0xac8204a8
    ctx->pc = 0x2b1588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1192), GPR_U32(ctx, 2));
    // 0x2b158c: 0x3c020000
    ctx->pc = 0x2b158cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1590: 0x244222c8
    ctx->pc = 0x2b1590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8904));
    // 0x2b1594: 0x431023
    ctx->pc = 0x2b1594u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1598: 0xac8204ac
    ctx->pc = 0x2b1598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1196), GPR_U32(ctx, 2));
    // 0x2b159c: 0x3c020000
    ctx->pc = 0x2b159cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b15a0: 0x24422300
    ctx->pc = 0x2b15a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8960));
    // 0x2b15a4: 0x431023
    ctx->pc = 0x2b15a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b15a8: 0xac8204b4
    ctx->pc = 0x2b15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1204), GPR_U32(ctx, 2));
    // 0x2b15ac: 0x3c020000
    ctx->pc = 0x2b15acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b15b0: 0x24422320
    ctx->pc = 0x2b15b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8992));
    // 0x2b15b4: 0x431023
    ctx->pc = 0x2b15b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b15b8: 0xac8204b8
    ctx->pc = 0x2b15b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1208), GPR_U32(ctx, 2));
    // 0x2b15bc: 0x3c020000
    ctx->pc = 0x2b15bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b15c0: 0x24422340
    ctx->pc = 0x2b15c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9024));
    // 0x2b15c4: 0x431023
    ctx->pc = 0x2b15c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b15c8: 0xac8204c0
    ctx->pc = 0x2b15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1216), GPR_U32(ctx, 2));
    // 0x2b15cc: 0x3c020000
    ctx->pc = 0x2b15ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b15d0: 0x24422360
    ctx->pc = 0x2b15d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9056));
    // 0x2b15d4: 0x431023
    ctx->pc = 0x2b15d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b15d8: 0xac8204c4
    ctx->pc = 0x2b15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1220), GPR_U32(ctx, 2));
    // 0x2b15dc: 0x3c020000
    ctx->pc = 0x2b15dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b15e0: 0x24422380
    ctx->pc = 0x2b15e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9088));
    // 0x2b15e4: 0x431023
    ctx->pc = 0x2b15e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b15e8: 0xac8204cc
    ctx->pc = 0x2b15e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1228), GPR_U32(ctx, 2));
    // 0x2b15ec: 0x3c020000
    ctx->pc = 0x2b15ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b15f0: 0x244223a0
    ctx->pc = 0x2b15f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9120));
    // 0x2b15f4: 0x431023
    ctx->pc = 0x2b15f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b15f8: 0xac8204d0
    ctx->pc = 0x2b15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1232), GPR_U32(ctx, 2));
    // 0x2b15fc: 0x3c020000
    ctx->pc = 0x2b15fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1600: 0x244223c0
    ctx->pc = 0x2b1600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9152));
    // 0x2b1604: 0x431023
    ctx->pc = 0x2b1604u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1608: 0xac8204d8
    ctx->pc = 0x2b1608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1240), GPR_U32(ctx, 2));
    // 0x2b160c: 0x3c020000
    ctx->pc = 0x2b160cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1610: 0x244223e0
    ctx->pc = 0x2b1610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9184));
    // 0x2b1614: 0x431023
    ctx->pc = 0x2b1614u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1618: 0xac8204dc
    ctx->pc = 0x2b1618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1244), GPR_U32(ctx, 2));
    // 0x2b161c: 0x3c020000
    ctx->pc = 0x2b161cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1620: 0x24422540
    ctx->pc = 0x2b1620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9536));
    // 0x2b1624: 0x431023
    ctx->pc = 0x2b1624u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1628: 0xac8204e4
    ctx->pc = 0x2b1628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1252), GPR_U32(ctx, 2));
    // 0x2b162c: 0x3c020000
    ctx->pc = 0x2b162cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1630: 0x24422560
    ctx->pc = 0x2b1630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9568));
    // 0x2b1634: 0x431023
    ctx->pc = 0x2b1634u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1638: 0xac8204e8
    ctx->pc = 0x2b1638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1256), GPR_U32(ctx, 2));
    // 0x2b163c: 0x3c020000
    ctx->pc = 0x2b163cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1640: 0x24422590
    ctx->pc = 0x2b1640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9616));
    // 0x2b1644: 0x431023
    ctx->pc = 0x2b1644u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1648: 0xac8204f0
    ctx->pc = 0x2b1648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1264), GPR_U32(ctx, 2));
    // 0x2b164c: 0x3c020000
    ctx->pc = 0x2b164cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1650: 0x244225b0
    ctx->pc = 0x2b1650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9648));
    // 0x2b1654: 0x431023
    ctx->pc = 0x2b1654u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1658: 0xac8204f4
    ctx->pc = 0x2b1658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1268), GPR_U32(ctx, 2));
    // 0x2b165c: 0x3c020000
    ctx->pc = 0x2b165cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1660: 0x24422608
    ctx->pc = 0x2b1660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9736));
    // 0x2b1664: 0x431023
    ctx->pc = 0x2b1664u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1668: 0xac8204fc
    ctx->pc = 0x2b1668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1276), GPR_U32(ctx, 2));
    // 0x2b166c: 0x3c020000
    ctx->pc = 0x2b166cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1670: 0x24422628
    ctx->pc = 0x2b1670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9768));
    // 0x2b1674: 0x431023
    ctx->pc = 0x2b1674u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1678: 0xac820500
    ctx->pc = 0x2b1678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1280), GPR_U32(ctx, 2));
    // 0x2b167c: 0x3c020000
    ctx->pc = 0x2b167cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1680: 0x24422790
    ctx->pc = 0x2b1680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10128));
    // 0x2b1684: 0x431023
    ctx->pc = 0x2b1684u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1688: 0xac820508
    ctx->pc = 0x2b1688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1288), GPR_U32(ctx, 2));
    // 0x2b168c: 0x3c020000
    ctx->pc = 0x2b168cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1690: 0x244227b0
    ctx->pc = 0x2b1690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10160));
    // 0x2b1694: 0x431023
    ctx->pc = 0x2b1694u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1698: 0xac82050c
    ctx->pc = 0x2b1698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1292), GPR_U32(ctx, 2));
    // 0x2b169c: 0x3c020000
    ctx->pc = 0x2b169cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b16a0: 0x244227c0
    ctx->pc = 0x2b16a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10176));
    // 0x2b16a4: 0x431023
    ctx->pc = 0x2b16a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b16a8: 0xac820514
    ctx->pc = 0x2b16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1300), GPR_U32(ctx, 2));
    // 0x2b16ac: 0x3c020000
    ctx->pc = 0x2b16acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b16b0: 0x244227e0
    ctx->pc = 0x2b16b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10208));
    // 0x2b16b4: 0x431023
    ctx->pc = 0x2b16b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b16b8: 0xac820518
    ctx->pc = 0x2b16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1304), GPR_U32(ctx, 2));
    // 0x2b16bc: 0x3c020000
    ctx->pc = 0x2b16bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b16c0: 0x24422860
    ctx->pc = 0x2b16c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10336));
    // 0x2b16c4: 0x431023
    ctx->pc = 0x2b16c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b16c8: 0xac820520
    ctx->pc = 0x2b16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1312), GPR_U32(ctx, 2));
    // 0x2b16cc: 0x3c020000
    ctx->pc = 0x2b16ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b16d0: 0x24422880
    ctx->pc = 0x2b16d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10368));
    // 0x2b16d4: 0x431023
    ctx->pc = 0x2b16d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b16d8: 0xac820524
    ctx->pc = 0x2b16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1316), GPR_U32(ctx, 2));
    // 0x2b16dc: 0x3c020000
    ctx->pc = 0x2b16dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b16e0: 0x24422898
    ctx->pc = 0x2b16e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b16e4: 0x431023
    ctx->pc = 0x2b16e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b16e8: 0xac82052c
    ctx->pc = 0x2b16e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1324), GPR_U32(ctx, 2));
    // 0x2b16ec: 0x3c020000
    ctx->pc = 0x2b16ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b16f0: 0x244228b8
    ctx->pc = 0x2b16f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10424));
    // 0x2b16f4: 0x431023
    ctx->pc = 0x2b16f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b16f8: 0xac820530
    ctx->pc = 0x2b16f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
    // 0x2b16fc: 0x3c020000
    ctx->pc = 0x2b16fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1700: 0x244228c0
    ctx->pc = 0x2b1700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10432));
    // 0x2b1704: 0x431023
    ctx->pc = 0x2b1704u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1708: 0xac820538
    ctx->pc = 0x2b1708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1336), GPR_U32(ctx, 2));
    // 0x2b170c: 0x3c020000
    ctx->pc = 0x2b170cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1710: 0x244228e0
    ctx->pc = 0x2b1710u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10464));
    // 0x2b1714: 0x431023
    ctx->pc = 0x2b1714u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1718: 0xac82053c
    ctx->pc = 0x2b1718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1340), GPR_U32(ctx, 2));
    // 0x2b171c: 0x3c020000
    ctx->pc = 0x2b171cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1720: 0x24422910
    ctx->pc = 0x2b1720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10512));
    // 0x2b1724: 0x431023
    ctx->pc = 0x2b1724u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1728: 0xac820544
    ctx->pc = 0x2b1728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1348), GPR_U32(ctx, 2));
    // 0x2b172c: 0x3c020000
    ctx->pc = 0x2b172cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1730: 0x24422930
    ctx->pc = 0x2b1730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10544));
    // 0x2b1734: 0x431023
    ctx->pc = 0x2b1734u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1738: 0xac820548
    ctx->pc = 0x2b1738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1352), GPR_U32(ctx, 2));
    // 0x2b173c: 0x3c020000
    ctx->pc = 0x2b173cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1740: 0x24422940
    ctx->pc = 0x2b1740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b1744: 0x431023
    ctx->pc = 0x2b1744u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1748: 0xac820550
    ctx->pc = 0x2b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1360), GPR_U32(ctx, 2));
    // 0x2b174c: 0x3c020000
    ctx->pc = 0x2b174cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1750: 0x24422960
    ctx->pc = 0x2b1750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10592));
    // 0x2b1754: 0x431023
    ctx->pc = 0x2b1754u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1758: 0xac820554
    ctx->pc = 0x2b1758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1364), GPR_U32(ctx, 2));
    // 0x2b175c: 0x3c020000
    ctx->pc = 0x2b175cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1760: 0x24422988
    ctx->pc = 0x2b1760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10632));
    // 0x2b1764: 0x431023
    ctx->pc = 0x2b1764u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1768: 0xac82055c
    ctx->pc = 0x2b1768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1372), GPR_U32(ctx, 2));
    // 0x2b176c: 0x3c020000
    ctx->pc = 0x2b176cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1770: 0x244229a8
    ctx->pc = 0x2b1770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10664));
    // 0x2b1774: 0x431023
    ctx->pc = 0x2b1774u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1778: 0xac820560
    ctx->pc = 0x2b1778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 2));
    // 0x2b177c: 0x3c020000
    ctx->pc = 0x2b177cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1780: 0x244229d8
    ctx->pc = 0x2b1780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10712));
    // 0x2b1784: 0x431023
    ctx->pc = 0x2b1784u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1788: 0xac820568
    ctx->pc = 0x2b1788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1384), GPR_U32(ctx, 2));
    // 0x2b178c: 0x3c020000
    ctx->pc = 0x2b178cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1790: 0x244229f8
    ctx->pc = 0x2b1790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10744));
    // 0x2b1794: 0x431023
    ctx->pc = 0x2b1794u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1798: 0xac82056c
    ctx->pc = 0x2b1798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1388), GPR_U32(ctx, 2));
    // 0x2b179c: 0x3c020000
    ctx->pc = 0x2b179cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b17a0: 0x24422a08
    ctx->pc = 0x2b17a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b17a4: 0x431023
    ctx->pc = 0x2b17a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b17a8: 0xac820574
    ctx->pc = 0x2b17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1396), GPR_U32(ctx, 2));
    // 0x2b17ac: 0x3c020000
    ctx->pc = 0x2b17acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b17b0: 0x24422a28
    ctx->pc = 0x2b17b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10792));
    // 0x2b17b4: 0x431023
    ctx->pc = 0x2b17b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b17b8: 0xac820578
    ctx->pc = 0x2b17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1400), GPR_U32(ctx, 2));
    // 0x2b17bc: 0x3c020000
    ctx->pc = 0x2b17bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b17c0: 0x24422a60
    ctx->pc = 0x2b17c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10848));
    // 0x2b17c4: 0x431023
    ctx->pc = 0x2b17c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b17c8: 0xac820580
    ctx->pc = 0x2b17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1408), GPR_U32(ctx, 2));
    // 0x2b17cc: 0x3c020000
    ctx->pc = 0x2b17ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b17d0: 0x24422a80
    ctx->pc = 0x2b17d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10880));
    // 0x2b17d4: 0x431023
    ctx->pc = 0x2b17d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b17d8: 0xac820584
    ctx->pc = 0x2b17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1412), GPR_U32(ctx, 2));
    // 0x2b17dc: 0x3c020000
    ctx->pc = 0x2b17dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b17e0: 0x24422ad8
    ctx->pc = 0x2b17e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10968));
    // 0x2b17e4: 0x431023
    ctx->pc = 0x2b17e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b17e8: 0xac82058c
    ctx->pc = 0x2b17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1420), GPR_U32(ctx, 2));
    // 0x2b17ec: 0x3c020000
    ctx->pc = 0x2b17ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b17f0: 0x24422af8
    ctx->pc = 0x2b17f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11000));
    // 0x2b17f4: 0x431023
    ctx->pc = 0x2b17f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b17f8: 0xac820590
    ctx->pc = 0x2b17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1424), GPR_U32(ctx, 2));
    // 0x2b17fc: 0x3c020000
    ctx->pc = 0x2b17fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1800: 0x24422b60
    ctx->pc = 0x2b1800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11104));
    // 0x2b1804: 0x431023
    ctx->pc = 0x2b1804u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1808: 0xac820598
    ctx->pc = 0x2b1808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 2));
    // 0x2b180c: 0x3c020000
    ctx->pc = 0x2b180cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1810: 0x24422b80
    ctx->pc = 0x2b1810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11136));
    // 0x2b1814: 0x431023
    ctx->pc = 0x2b1814u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1818: 0xac82059c
    ctx->pc = 0x2b1818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1436), GPR_U32(ctx, 2));
    // 0x2b181c: 0x3c020000
    ctx->pc = 0x2b181cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1820: 0x24422b88
    ctx->pc = 0x2b1820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11144));
    // 0x2b1824: 0x431023
    ctx->pc = 0x2b1824u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1828: 0xac8205a4
    ctx->pc = 0x2b1828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1444), GPR_U32(ctx, 2));
    // 0x2b182c: 0x3c020000
    ctx->pc = 0x2b182cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1830: 0x24422ba8
    ctx->pc = 0x2b1830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11176));
    // 0x2b1834: 0x431023
    ctx->pc = 0x2b1834u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1838: 0xac8205a8
    ctx->pc = 0x2b1838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1448), GPR_U32(ctx, 2));
    // 0x2b183c: 0x3c020000
    ctx->pc = 0x2b183cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1840: 0x24422c28
    ctx->pc = 0x2b1840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b1844: 0x431023
    ctx->pc = 0x2b1844u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1848: 0xac8205b0
    ctx->pc = 0x2b1848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1456), GPR_U32(ctx, 2));
    // 0x2b184c: 0x3c020000
    ctx->pc = 0x2b184cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1850: 0x24422c48
    ctx->pc = 0x2b1850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b1854: 0x431023
    ctx->pc = 0x2b1854u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1858: 0xac8205b4
    ctx->pc = 0x2b1858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 2));
    // 0x2b185c: 0x3c020000
    ctx->pc = 0x2b185cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1860: 0x24422c50
    ctx->pc = 0x2b1860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11344));
    // 0x2b1864: 0x431023
    ctx->pc = 0x2b1864u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1868: 0xac8205bc
    ctx->pc = 0x2b1868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1468), GPR_U32(ctx, 2));
    // 0x2b186c: 0x3c020000
    ctx->pc = 0x2b186cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1870: 0x24422c70
    ctx->pc = 0x2b1870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11376));
    // 0x2b1874: 0x431023
    ctx->pc = 0x2b1874u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1878: 0xac8205c0
    ctx->pc = 0x2b1878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1472), GPR_U32(ctx, 2));
    // 0x2b187c: 0x3c020000
    ctx->pc = 0x2b187cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1880: 0x24422c80
    ctx->pc = 0x2b1880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11392));
    // 0x2b1884: 0x431023
    ctx->pc = 0x2b1884u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1888: 0xac8205c8
    ctx->pc = 0x2b1888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1480), GPR_U32(ctx, 2));
    // 0x2b188c: 0x3c020000
    ctx->pc = 0x2b188cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1890: 0x24422ca0
    ctx->pc = 0x2b1890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11424));
    // 0x2b1894: 0x431023
    ctx->pc = 0x2b1894u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1898: 0xac8205cc
    ctx->pc = 0x2b1898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1484), GPR_U32(ctx, 2));
    // 0x2b189c: 0x3c020000
    ctx->pc = 0x2b189cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b18a0: 0x24422cc8
    ctx->pc = 0x2b18a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11464));
    // 0x2b18a4: 0x431023
    ctx->pc = 0x2b18a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b18a8: 0xac8205d4
    ctx->pc = 0x2b18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1492), GPR_U32(ctx, 2));
    // 0x2b18ac: 0x3c020000
    ctx->pc = 0x2b18acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b18b0: 0x24422ce8
    ctx->pc = 0x2b18b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11496));
    // 0x2b18b4: 0x431023
    ctx->pc = 0x2b18b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b18b8: 0xac8205d8
    ctx->pc = 0x2b18b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 2));
    // 0x2b18bc: 0x3c020000
    ctx->pc = 0x2b18bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b18c0: 0x24422cf8
    ctx->pc = 0x2b18c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11512));
    // 0x2b18c4: 0x431023
    ctx->pc = 0x2b18c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b18c8: 0xac8205e0
    ctx->pc = 0x2b18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1504), GPR_U32(ctx, 2));
    // 0x2b18cc: 0x3c020000
    ctx->pc = 0x2b18ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b18d0: 0x24422d18
    ctx->pc = 0x2b18d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11544));
    // 0x2b18d4: 0x431023
    ctx->pc = 0x2b18d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b18d8: 0xac8205e4
    ctx->pc = 0x2b18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1508), GPR_U32(ctx, 2));
    // 0x2b18dc: 0x3c020000
    ctx->pc = 0x2b18dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b18e0: 0x24422d68
    ctx->pc = 0x2b18e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11624));
    // 0x2b18e4: 0x431023
    ctx->pc = 0x2b18e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b18e8: 0xac8205ec
    ctx->pc = 0x2b18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 2));
    // 0x2b18ec: 0x3c020000
    ctx->pc = 0x2b18ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b18f0: 0x24422d88
    ctx->pc = 0x2b18f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11656));
    // 0x2b18f4: 0x431023
    ctx->pc = 0x2b18f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b18f8: 0xac8205f0
    ctx->pc = 0x2b18f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 2));
    // 0x2b18fc: 0x3c020000
    ctx->pc = 0x2b18fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1900: 0x24422ea8
    ctx->pc = 0x2b1900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11944));
    // 0x2b1904: 0x431023
    ctx->pc = 0x2b1904u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1908: 0xac8205f8
    ctx->pc = 0x2b1908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1528), GPR_U32(ctx, 2));
    // 0x2b190c: 0x3c020000
    ctx->pc = 0x2b190cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1910: 0x24422ec8
    ctx->pc = 0x2b1910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11976));
    // 0x2b1914: 0x431023
    ctx->pc = 0x2b1914u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1918: 0xac8205fc
    ctx->pc = 0x2b1918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1532), GPR_U32(ctx, 2));
    // 0x2b191c: 0x3c020000
    ctx->pc = 0x2b191cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1920: 0x24422ef8
    ctx->pc = 0x2b1920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12024));
    // 0x2b1924: 0x431023
    ctx->pc = 0x2b1924u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1928: 0xac820604
    ctx->pc = 0x2b1928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1540), GPR_U32(ctx, 2));
    // 0x2b192c: 0x3c020000
    ctx->pc = 0x2b192cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1930: 0x24422f18
    ctx->pc = 0x2b1930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12056));
    // 0x2b1934: 0x431023
    ctx->pc = 0x2b1934u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1938: 0xac820608
    ctx->pc = 0x2b1938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1544), GPR_U32(ctx, 2));
    // 0x2b193c: 0x3c020000
    ctx->pc = 0x2b193cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1940: 0x24422fa0
    ctx->pc = 0x2b1940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12192));
    // 0x2b1944: 0x431023
    ctx->pc = 0x2b1944u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1948: 0xac820610
    ctx->pc = 0x2b1948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1552), GPR_U32(ctx, 2));
    // 0x2b194c: 0x3c020000
    ctx->pc = 0x2b194cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1950: 0x24422fc0
    ctx->pc = 0x2b1950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12224));
    // 0x2b1954: 0x431023
    ctx->pc = 0x2b1954u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1958: 0xac820614
    ctx->pc = 0x2b1958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1556), GPR_U32(ctx, 2));
    // 0x2b195c: 0x3c020000
    ctx->pc = 0x2b195cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1960: 0x24422fd0
    ctx->pc = 0x2b1960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b1964: 0x3c030000
    ctx->pc = 0x2b1964u;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2b1968: 0x24630000
    ctx->pc = 0x2b1968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2b196c: 0x431023
    ctx->pc = 0x2b196cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1970: 0xac82061c
    ctx->pc = 0x2b1970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1564), GPR_U32(ctx, 2));
    // 0x2b1974: 0x3c040037
    ctx->pc = 0x2b1974u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2b1978: 0x2484f150
    ctx->pc = 0x2b1978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963536));
    // 0x2b197c: 0x3c020000
    ctx->pc = 0x2b197cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1980: 0x24422ff0
    ctx->pc = 0x2b1980u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12272));
    // 0x2b1984: 0x431023
    ctx->pc = 0x2b1984u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1988: 0xac820620
    ctx->pc = 0x2b1988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1568), GPR_U32(ctx, 2));
    // 0x2b198c: 0x3c020000
    ctx->pc = 0x2b198cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1990: 0x24423030
    ctx->pc = 0x2b1990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12336));
    // 0x2b1994: 0x431023
    ctx->pc = 0x2b1994u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1998: 0xac820628
    ctx->pc = 0x2b1998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1576), GPR_U32(ctx, 2));
    // 0x2b199c: 0x3c020000
    ctx->pc = 0x2b199cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b19a0: 0x24423050
    ctx->pc = 0x2b19a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12368));
    // 0x2b19a4: 0x431023
    ctx->pc = 0x2b19a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b19a8: 0xac82062c
    ctx->pc = 0x2b19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1580), GPR_U32(ctx, 2));
    // 0x2b19ac: 0x3c020000
    ctx->pc = 0x2b19acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b19b0: 0x24423068
    ctx->pc = 0x2b19b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12392));
    // 0x2b19b4: 0x431023
    ctx->pc = 0x2b19b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b19b8: 0xac820634
    ctx->pc = 0x2b19b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1588), GPR_U32(ctx, 2));
    // 0x2b19bc: 0x3c020000
    ctx->pc = 0x2b19bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b19c0: 0x24423088
    ctx->pc = 0x2b19c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12424));
    // 0x2b19c4: 0x431023
    ctx->pc = 0x2b19c4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b19c8: 0xac820638
    ctx->pc = 0x2b19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1592), GPR_U32(ctx, 2));
    // 0x2b19cc: 0x3c020000
    ctx->pc = 0x2b19ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b19d0: 0x244230b0
    ctx->pc = 0x2b19d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12464));
    // 0x2b19d4: 0x431023
    ctx->pc = 0x2b19d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b19d8: 0xac820640
    ctx->pc = 0x2b19d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1600), GPR_U32(ctx, 2));
    // 0x2b19dc: 0x3c020000
    ctx->pc = 0x2b19dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b19e0: 0x244230d0
    ctx->pc = 0x2b19e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12496));
    // 0x2b19e4: 0x431023
    ctx->pc = 0x2b19e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b19e8: 0xac820644
    ctx->pc = 0x2b19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1604), GPR_U32(ctx, 2));
    // 0x2b19ec: 0x3c020000
    ctx->pc = 0x2b19ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b19f0: 0x244230f0
    ctx->pc = 0x2b19f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12528));
    // 0x2b19f4: 0x431023
    ctx->pc = 0x2b19f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b19f8: 0xac82064c
    ctx->pc = 0x2b19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1612), GPR_U32(ctx, 2));
    // 0x2b19fc: 0x3c020000
    ctx->pc = 0x2b19fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a00: 0x24423110
    ctx->pc = 0x2b1a00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12560));
    // 0x2b1a04: 0x431023
    ctx->pc = 0x2b1a04u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a08: 0xac820650
    ctx->pc = 0x2b1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1616), GPR_U32(ctx, 2));
    // 0x2b1a0c: 0x3c020000
    ctx->pc = 0x2b1a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a10: 0x24423160
    ctx->pc = 0x2b1a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12640));
    // 0x2b1a14: 0x431023
    ctx->pc = 0x2b1a14u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a18: 0xac820658
    ctx->pc = 0x2b1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1624), GPR_U32(ctx, 2));
    // 0x2b1a1c: 0x3c020000
    ctx->pc = 0x2b1a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a20: 0x24423180
    ctx->pc = 0x2b1a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12672));
    // 0x2b1a24: 0x431023
    ctx->pc = 0x2b1a24u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a28: 0xac82065c
    ctx->pc = 0x2b1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1628), GPR_U32(ctx, 2));
    // 0x2b1a2c: 0x3c020000
    ctx->pc = 0x2b1a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a30: 0x244231a8
    ctx->pc = 0x2b1a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12712));
    // 0x2b1a34: 0x431023
    ctx->pc = 0x2b1a34u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a38: 0xac820664
    ctx->pc = 0x2b1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1636), GPR_U32(ctx, 2));
    // 0x2b1a3c: 0x3c020000
    ctx->pc = 0x2b1a3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a40: 0x244231c8
    ctx->pc = 0x2b1a40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12744));
    // 0x2b1a44: 0x431023
    ctx->pc = 0x2b1a44u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a48: 0xac820668
    ctx->pc = 0x2b1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1640), GPR_U32(ctx, 2));
    // 0x2b1a4c: 0x3c020000
    ctx->pc = 0x2b1a4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a50: 0x24423298
    ctx->pc = 0x2b1a50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12952));
    // 0x2b1a54: 0x431023
    ctx->pc = 0x2b1a54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a58: 0xac820670
    ctx->pc = 0x2b1a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 2));
    // 0x2b1a5c: 0x3c020000
    ctx->pc = 0x2b1a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a60: 0x244232b8
    ctx->pc = 0x2b1a60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12984));
    // 0x2b1a64: 0x431023
    ctx->pc = 0x2b1a64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a68: 0xac820674
    ctx->pc = 0x2b1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 2));
    // 0x2b1a6c: 0x3c020000
    ctx->pc = 0x2b1a6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a70: 0x244232e8
    ctx->pc = 0x2b1a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13032));
    // 0x2b1a74: 0x431023
    ctx->pc = 0x2b1a74u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a78: 0xac82067c
    ctx->pc = 0x2b1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1660), GPR_U32(ctx, 2));
    // 0x2b1a7c: 0x3c020000
    ctx->pc = 0x2b1a7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a80: 0x24423308
    ctx->pc = 0x2b1a80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13064));
    // 0x2b1a84: 0x431023
    ctx->pc = 0x2b1a84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a88: 0xac820680
    ctx->pc = 0x2b1a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1664), GPR_U32(ctx, 2));
    // 0x2b1a8c: 0x3c020000
    ctx->pc = 0x2b1a8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1a90: 0x24423328
    ctx->pc = 0x2b1a90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13096));
    // 0x2b1a94: 0x431023
    ctx->pc = 0x2b1a94u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1a98: 0xac820688
    ctx->pc = 0x2b1a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1672), GPR_U32(ctx, 2));
    // 0x2b1a9c: 0x3c020000
    ctx->pc = 0x2b1a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1aa0: 0x24423348
    ctx->pc = 0x2b1aa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13128));
    // 0x2b1aa4: 0x431023
    ctx->pc = 0x2b1aa4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1aa8: 0xac82068c
    ctx->pc = 0x2b1aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1676), GPR_U32(ctx, 2));
    // 0x2b1aac: 0x3c020000
    ctx->pc = 0x2b1aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ab0: 0x24423398
    ctx->pc = 0x2b1ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13208));
    // 0x2b1ab4: 0x431023
    ctx->pc = 0x2b1ab4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ab8: 0xac820694
    ctx->pc = 0x2b1ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1684), GPR_U32(ctx, 2));
    // 0x2b1abc: 0x3c020000
    ctx->pc = 0x2b1abcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ac0: 0x244233b8
    ctx->pc = 0x2b1ac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13240));
    // 0x2b1ac4: 0x431023
    ctx->pc = 0x2b1ac4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ac8: 0xac820698
    ctx->pc = 0x2b1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1688), GPR_U32(ctx, 2));
    // 0x2b1acc: 0x3c020000
    ctx->pc = 0x2b1accu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ad0: 0x24423400
    ctx->pc = 0x2b1ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13312));
    // 0x2b1ad4: 0x431023
    ctx->pc = 0x2b1ad4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ad8: 0xac8206a0
    ctx->pc = 0x2b1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1696), GPR_U32(ctx, 2));
    // 0x2b1adc: 0x3c020000
    ctx->pc = 0x2b1adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ae0: 0x24423420
    ctx->pc = 0x2b1ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13344));
    // 0x2b1ae4: 0x431023
    ctx->pc = 0x2b1ae4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ae8: 0xac8206a4
    ctx->pc = 0x2b1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1700), GPR_U32(ctx, 2));
    // 0x2b1aec: 0x3c020000
    ctx->pc = 0x2b1aecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1af0: 0x244234f0
    ctx->pc = 0x2b1af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2b1af4: 0x431023
    ctx->pc = 0x2b1af4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1af8: 0xac8206ac
    ctx->pc = 0x2b1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 2));
    // 0x2b1afc: 0x3c020000
    ctx->pc = 0x2b1afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b00: 0x24423510
    ctx->pc = 0x2b1b00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13584));
    // 0x2b1b04: 0x431023
    ctx->pc = 0x2b1b04u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b08: 0xac8206b0
    ctx->pc = 0x2b1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1712), GPR_U32(ctx, 2));
    // 0x2b1b0c: 0x3c020000
    ctx->pc = 0x2b1b0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b10: 0x24423548
    ctx->pc = 0x2b1b10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13640));
    // 0x2b1b14: 0x431023
    ctx->pc = 0x2b1b14u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b18: 0xac8206b8
    ctx->pc = 0x2b1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1720), GPR_U32(ctx, 2));
    // 0x2b1b1c: 0x3c020000
    ctx->pc = 0x2b1b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b20: 0x24423568
    ctx->pc = 0x2b1b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13672));
    // 0x2b1b24: 0x431023
    ctx->pc = 0x2b1b24u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b28: 0xac8206bc
    ctx->pc = 0x2b1b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1724), GPR_U32(ctx, 2));
    // 0x2b1b2c: 0x3c020000
    ctx->pc = 0x2b1b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b30: 0x24423598
    ctx->pc = 0x2b1b30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13720));
    // 0x2b1b34: 0x431023
    ctx->pc = 0x2b1b34u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b38: 0xac8206c4
    ctx->pc = 0x2b1b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1732), GPR_U32(ctx, 2));
    // 0x2b1b3c: 0x3c020000
    ctx->pc = 0x2b1b3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b40: 0x244235b8
    ctx->pc = 0x2b1b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13752));
    // 0x2b1b44: 0x431023
    ctx->pc = 0x2b1b44u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b48: 0xac8206c8
    ctx->pc = 0x2b1b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 2));
    // 0x2b1b4c: 0x3c020000
    ctx->pc = 0x2b1b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b50: 0x24423610
    ctx->pc = 0x2b1b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13840));
    // 0x2b1b54: 0x431023
    ctx->pc = 0x2b1b54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b58: 0xac8206d0
    ctx->pc = 0x2b1b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1744), GPR_U32(ctx, 2));
    // 0x2b1b5c: 0x3c020000
    ctx->pc = 0x2b1b5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b60: 0x24423630
    ctx->pc = 0x2b1b60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13872));
    // 0x2b1b64: 0x431023
    ctx->pc = 0x2b1b64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b68: 0xac8206d4
    ctx->pc = 0x2b1b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1748), GPR_U32(ctx, 2));
    // 0x2b1b6c: 0x3c020000
    ctx->pc = 0x2b1b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b70: 0x244236e8
    ctx->pc = 0x2b1b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b1b74: 0x431023
    ctx->pc = 0x2b1b74u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b78: 0xac8206dc
    ctx->pc = 0x2b1b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1756), GPR_U32(ctx, 2));
    // 0x2b1b7c: 0x3c020000
    ctx->pc = 0x2b1b7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b80: 0x24423708
    ctx->pc = 0x2b1b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14088));
    // 0x2b1b84: 0x431023
    ctx->pc = 0x2b1b84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b88: 0xac8206e0
    ctx->pc = 0x2b1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1760), GPR_U32(ctx, 2));
    // 0x2b1b8c: 0x3c020000
    ctx->pc = 0x2b1b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1b90: 0x24423718
    ctx->pc = 0x2b1b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14104));
    // 0x2b1b94: 0x431023
    ctx->pc = 0x2b1b94u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1b98: 0xac8206e8
    ctx->pc = 0x2b1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1768), GPR_U32(ctx, 2));
    // 0x2b1b9c: 0x3c020000
    ctx->pc = 0x2b1b9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ba0: 0x24423738
    ctx->pc = 0x2b1ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14136));
    // 0x2b1ba4: 0x431023
    ctx->pc = 0x2b1ba4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ba8: 0xac8206ec
    ctx->pc = 0x2b1ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1772), GPR_U32(ctx, 2));
    // 0x2b1bac: 0xafa00000
    ctx->pc = 0x2b1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2b1bb0: 0x3c020000
    ctx->pc = 0x2b1bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1bb4: 0x24420000
    ctx->pc = 0x2b1bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 0));
    // 0x2b1bb8: 0x431023
    ctx->pc = 0x2b1bb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1bbc: 0xafa20004
    ctx->pc = 0x2b1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2b1bc0: 0x3c020000
    ctx->pc = 0x2b1bc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1bc4: 0x24420020
    ctx->pc = 0x2b1bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b1bc8: 0x431023
    ctx->pc = 0x2b1bc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1bcc: 0xafa20008
    ctx->pc = 0x2b1bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2b1bd0: 0x3c020000
    ctx->pc = 0x2b1bd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1bd4: 0x244201d8
    ctx->pc = 0x2b1bd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 472));
    // 0x2b1bd8: 0x431023
    ctx->pc = 0x2b1bd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1bdc: 0xafa2000c
    ctx->pc = 0x2b1bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2b1be0: 0x3c020000
    ctx->pc = 0x2b1be0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1be4: 0x244201f8
    ctx->pc = 0x2b1be4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 504));
    // 0x2b1be8: 0x431023
    ctx->pc = 0x2b1be8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1bec: 0xafa20010
    ctx->pc = 0x2b1becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2b1bf0: 0x3c020000
    ctx->pc = 0x2b1bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1bf4: 0x24420220
    ctx->pc = 0x2b1bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 544));
    // 0x2b1bf8: 0x431023
    ctx->pc = 0x2b1bf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1bfc: 0xafa20014
    ctx->pc = 0x2b1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2b1c00: 0x3c020000
    ctx->pc = 0x2b1c00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c04: 0x24420238
    ctx->pc = 0x2b1c04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 568));
    // 0x2b1c08: 0x431023
    ctx->pc = 0x2b1c08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c0c: 0xafa20018
    ctx->pc = 0x2b1c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2b1c10: 0x3c020000
    ctx->pc = 0x2b1c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c14: 0x24420238
    ctx->pc = 0x2b1c14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 568));
    // 0x2b1c18: 0x431023
    ctx->pc = 0x2b1c18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c1c: 0xafa2001c
    ctx->pc = 0x2b1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2b1c20: 0x3c020000
    ctx->pc = 0x2b1c20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c24: 0x24420278
    ctx->pc = 0x2b1c24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 632));
    // 0x2b1c28: 0x431023
    ctx->pc = 0x2b1c28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c2c: 0xafa20020
    ctx->pc = 0x2b1c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2b1c30: 0x3c020000
    ctx->pc = 0x2b1c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c34: 0x24420298
    ctx->pc = 0x2b1c34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 664));
    // 0x2b1c38: 0x431023
    ctx->pc = 0x2b1c38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c3c: 0xafa20024
    ctx->pc = 0x2b1c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2b1c40: 0x3c020000
    ctx->pc = 0x2b1c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c44: 0x244202c0
    ctx->pc = 0x2b1c44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 704));
    // 0x2b1c48: 0x431023
    ctx->pc = 0x2b1c48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c4c: 0xafa20028
    ctx->pc = 0x2b1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2b1c50: 0x3c020000
    ctx->pc = 0x2b1c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c54: 0x244202d8
    ctx->pc = 0x2b1c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 728));
    // 0x2b1c58: 0x431023
    ctx->pc = 0x2b1c58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c5c: 0xafa2002c
    ctx->pc = 0x2b1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2b1c60: 0x3c020000
    ctx->pc = 0x2b1c60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c64: 0x244202d8
    ctx->pc = 0x2b1c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 728));
    // 0x2b1c68: 0x431023
    ctx->pc = 0x2b1c68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c6c: 0xafa20030
    ctx->pc = 0x2b1c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2b1c70: 0x3c020000
    ctx->pc = 0x2b1c70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c74: 0x244202e0
    ctx->pc = 0x2b1c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 736));
    // 0x2b1c78: 0x431023
    ctx->pc = 0x2b1c78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c7c: 0xafa20034
    ctx->pc = 0x2b1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2b1c80: 0x3c020000
    ctx->pc = 0x2b1c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c84: 0x24420300
    ctx->pc = 0x2b1c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 768));
    // 0x2b1c88: 0x431023
    ctx->pc = 0x2b1c88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c8c: 0xafa20038
    ctx->pc = 0x2b1c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2b1c90: 0x3c020000
    ctx->pc = 0x2b1c90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1c94: 0x24420310
    ctx->pc = 0x2b1c94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 784));
    // 0x2b1c98: 0x431023
    ctx->pc = 0x2b1c98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1c9c: 0xafa2003c
    ctx->pc = 0x2b1c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2b1ca0: 0x3c020000
    ctx->pc = 0x2b1ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ca4: 0x24420380
    ctx->pc = 0x2b1ca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 896));
    // 0x2b1ca8: 0x431023
    ctx->pc = 0x2b1ca8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1cac: 0xafa20040
    ctx->pc = 0x2b1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2b1cb0: 0x3c020000
    ctx->pc = 0x2b1cb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1cb4: 0x244203a0
    ctx->pc = 0x2b1cb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 928));
    // 0x2b1cb8: 0x431023
    ctx->pc = 0x2b1cb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1cbc: 0xafa20044
    ctx->pc = 0x2b1cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2b1cc0: 0x3c020000
    ctx->pc = 0x2b1cc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1cc4: 0x244203b0
    ctx->pc = 0x2b1cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 944));
    // 0x2b1cc8: 0x431023
    ctx->pc = 0x2b1cc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ccc: 0xafa20048
    ctx->pc = 0x2b1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2b1cd0: 0x3c020000
    ctx->pc = 0x2b1cd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1cd4: 0x244203e8
    ctx->pc = 0x2b1cd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2b1cd8: 0x431023
    ctx->pc = 0x2b1cd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1cdc: 0xafa2004c
    ctx->pc = 0x2b1cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2b1ce0: 0x3c020000
    ctx->pc = 0x2b1ce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ce4: 0x24420408
    ctx->pc = 0x2b1ce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1032));
    // 0x2b1ce8: 0x431023
    ctx->pc = 0x2b1ce8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1cec: 0xafa20050
    ctx->pc = 0x2b1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2b1cf0: 0x3c020000
    ctx->pc = 0x2b1cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1cf4: 0x24420418
    ctx->pc = 0x2b1cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1048));
    // 0x2b1cf8: 0x431023
    ctx->pc = 0x2b1cf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1cfc: 0xafa20054
    ctx->pc = 0x2b1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2b1d00: 0x3c020000
    ctx->pc = 0x2b1d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d04: 0x24420490
    ctx->pc = 0x2b1d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1168));
    // 0x2b1d08: 0x431023
    ctx->pc = 0x2b1d08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d0c: 0xafa20058
    ctx->pc = 0x2b1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2b1d10: 0x3c020000
    ctx->pc = 0x2b1d10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d14: 0x244204f0
    ctx->pc = 0x2b1d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1264));
    // 0x2b1d18: 0x431023
    ctx->pc = 0x2b1d18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d1c: 0xafa2005c
    ctx->pc = 0x2b1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2b1d20: 0x3c020000
    ctx->pc = 0x2b1d20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d24: 0x24420510
    ctx->pc = 0x2b1d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1296));
    // 0x2b1d28: 0x431023
    ctx->pc = 0x2b1d28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d2c: 0xafa20060
    ctx->pc = 0x2b1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2b1d30: 0x3c020000
    ctx->pc = 0x2b1d30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d34: 0x24420520
    ctx->pc = 0x2b1d34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1312));
    // 0x2b1d38: 0x431023
    ctx->pc = 0x2b1d38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d3c: 0xafa20064
    ctx->pc = 0x2b1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2b1d40: 0x3c020000
    ctx->pc = 0x2b1d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d44: 0x24420540
    ctx->pc = 0x2b1d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2b1d48: 0x431023
    ctx->pc = 0x2b1d48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d4c: 0xafa20068
    ctx->pc = 0x2b1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x2b1d50: 0x3c020000
    ctx->pc = 0x2b1d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d54: 0x244205e8
    ctx->pc = 0x2b1d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1512));
    // 0x2b1d58: 0x431023
    ctx->pc = 0x2b1d58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d5c: 0xafa2006c
    ctx->pc = 0x2b1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2b1d60: 0x3c020000
    ctx->pc = 0x2b1d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d64: 0x24420628
    ctx->pc = 0x2b1d64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1576));
    // 0x2b1d68: 0x431023
    ctx->pc = 0x2b1d68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d6c: 0xafa20070
    ctx->pc = 0x2b1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2b1d70: 0x3c020000
    ctx->pc = 0x2b1d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d74: 0x24420648
    ctx->pc = 0x2b1d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1608));
    // 0x2b1d78: 0x431023
    ctx->pc = 0x2b1d78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d7c: 0xafa20074
    ctx->pc = 0x2b1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2b1d80: 0x3c020000
    ctx->pc = 0x2b1d80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d84: 0x24420668
    ctx->pc = 0x2b1d84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1640));
    // 0x2b1d88: 0x431023
    ctx->pc = 0x2b1d88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d8c: 0xafa20078
    ctx->pc = 0x2b1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x2b1d90: 0x3c020000
    ctx->pc = 0x2b1d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1d94: 0x244206d8
    ctx->pc = 0x2b1d94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1752));
    // 0x2b1d98: 0x431023
    ctx->pc = 0x2b1d98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1d9c: 0xafa2007c
    ctx->pc = 0x2b1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2b1da0: 0x3c020000
    ctx->pc = 0x2b1da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1da4: 0x244206e8
    ctx->pc = 0x2b1da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1768));
    // 0x2b1da8: 0x431023
    ctx->pc = 0x2b1da8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1dac: 0xafa20080
    ctx->pc = 0x2b1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2b1db0: 0x3c020000
    ctx->pc = 0x2b1db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1db4: 0x24420708
    ctx->pc = 0x2b1db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1800));
    // 0x2b1db8: 0x431023
    ctx->pc = 0x2b1db8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1dbc: 0xafa20084
    ctx->pc = 0x2b1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x2b1dc0: 0x3c020000
    ctx->pc = 0x2b1dc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1dc4: 0x24420718
    ctx->pc = 0x2b1dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1816));
    // 0x2b1dc8: 0x431023
    ctx->pc = 0x2b1dc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1dcc: 0xafa20088
    ctx->pc = 0x2b1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x2b1dd0: 0x3c020000
    ctx->pc = 0x2b1dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1dd4: 0x24420738
    ctx->pc = 0x2b1dd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1848));
    // 0x2b1dd8: 0x431023
    ctx->pc = 0x2b1dd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ddc: 0xafa2008c
    ctx->pc = 0x2b1ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2b1de0: 0x3c020000
    ctx->pc = 0x2b1de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1de4: 0x24420758
    ctx->pc = 0x2b1de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1880));
    // 0x2b1de8: 0x431023
    ctx->pc = 0x2b1de8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1dec: 0xafa20090
    ctx->pc = 0x2b1decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2b1df0: 0x3c020000
    ctx->pc = 0x2b1df0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1df4: 0x24420768
    ctx->pc = 0x2b1df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1896));
    // 0x2b1df8: 0x431023
    ctx->pc = 0x2b1df8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1dfc: 0xafa20094
    ctx->pc = 0x2b1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2b1e00: 0x3c020000
    ctx->pc = 0x2b1e00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e04: 0x24420788
    ctx->pc = 0x2b1e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1928));
    // 0x2b1e08: 0x431023
    ctx->pc = 0x2b1e08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e0c: 0xafa20098
    ctx->pc = 0x2b1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x2b1e10: 0x3c020000
    ctx->pc = 0x2b1e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e14: 0x244207b8
    ctx->pc = 0x2b1e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x2b1e18: 0x431023
    ctx->pc = 0x2b1e18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e1c: 0xafa2009c
    ctx->pc = 0x2b1e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x2b1e20: 0x3c020000
    ctx->pc = 0x2b1e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e24: 0x24420858
    ctx->pc = 0x2b1e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2b1e28: 0x431023
    ctx->pc = 0x2b1e28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e2c: 0xafa200a0
    ctx->pc = 0x2b1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2b1e30: 0x3c020000
    ctx->pc = 0x2b1e30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e34: 0x24420858
    ctx->pc = 0x2b1e34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2136));
    // 0x2b1e38: 0x431023
    ctx->pc = 0x2b1e38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e3c: 0xafa200a4
    ctx->pc = 0x2b1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x2b1e40: 0x3c020000
    ctx->pc = 0x2b1e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e44: 0x24420878
    ctx->pc = 0x2b1e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2168));
    // 0x2b1e48: 0x431023
    ctx->pc = 0x2b1e48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e4c: 0xafa200a8
    ctx->pc = 0x2b1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2b1e50: 0x3c020000
    ctx->pc = 0x2b1e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e54: 0x244208e8
    ctx->pc = 0x2b1e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2280));
    // 0x2b1e58: 0x431023
    ctx->pc = 0x2b1e58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e5c: 0xafa200ac
    ctx->pc = 0x2b1e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2b1e60: 0x3c020000
    ctx->pc = 0x2b1e60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e64: 0x24420908
    ctx->pc = 0x2b1e64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2312));
    // 0x2b1e68: 0x431023
    ctx->pc = 0x2b1e68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e6c: 0xafa200b0
    ctx->pc = 0x2b1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2b1e70: 0x3c020000
    ctx->pc = 0x2b1e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e74: 0x24420938
    ctx->pc = 0x2b1e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2360));
    // 0x2b1e78: 0x431023
    ctx->pc = 0x2b1e78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e7c: 0xafa200b4
    ctx->pc = 0x2b1e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2b1e80: 0x3c020000
    ctx->pc = 0x2b1e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e84: 0x24420958
    ctx->pc = 0x2b1e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2392));
    // 0x2b1e88: 0x431023
    ctx->pc = 0x2b1e88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e8c: 0xafa200b8
    ctx->pc = 0x2b1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2b1e90: 0x3c020000
    ctx->pc = 0x2b1e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1e94: 0x24420968
    ctx->pc = 0x2b1e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2408));
    // 0x2b1e98: 0x431023
    ctx->pc = 0x2b1e98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1e9c: 0xafa200bc
    ctx->pc = 0x2b1e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2b1ea0: 0x3c020000
    ctx->pc = 0x2b1ea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ea4: 0x24420970
    ctx->pc = 0x2b1ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2416));
    // 0x2b1ea8: 0x431023
    ctx->pc = 0x2b1ea8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1eac: 0xafa200c0
    ctx->pc = 0x2b1eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2b1eb0: 0x3c020000
    ctx->pc = 0x2b1eb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1eb4: 0x24420990
    ctx->pc = 0x2b1eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2b1eb8: 0x431023
    ctx->pc = 0x2b1eb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ebc: 0xafa200c4
    ctx->pc = 0x2b1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2b1ec0: 0x3c020000
    ctx->pc = 0x2b1ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ec4: 0x244209c8
    ctx->pc = 0x2b1ec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2504));
    // 0x2b1ec8: 0x431023
    ctx->pc = 0x2b1ec8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ecc: 0xafa200c8
    ctx->pc = 0x2b1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2b1ed0: 0x3c020000
    ctx->pc = 0x2b1ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ed4: 0x244209e8
    ctx->pc = 0x2b1ed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2536));
    // 0x2b1ed8: 0x431023
    ctx->pc = 0x2b1ed8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1edc: 0xafa200cc
    ctx->pc = 0x2b1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x2b1ee0: 0x3c020000
    ctx->pc = 0x2b1ee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ee4: 0x24420a90
    ctx->pc = 0x2b1ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2704));
    // 0x2b1ee8: 0x431023
    ctx->pc = 0x2b1ee8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1eec: 0xafa200d0
    ctx->pc = 0x2b1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2b1ef0: 0x3c020000
    ctx->pc = 0x2b1ef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ef4: 0x24420a98
    ctx->pc = 0x2b1ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2712));
    // 0x2b1ef8: 0x431023
    ctx->pc = 0x2b1ef8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1efc: 0xafa200d4
    ctx->pc = 0x2b1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x2b1f00: 0x3c020000
    ctx->pc = 0x2b1f00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f04: 0x24420ac0
    ctx->pc = 0x2b1f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2752));
    // 0x2b1f08: 0x431023
    ctx->pc = 0x2b1f08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f0c: 0xafa200d8
    ctx->pc = 0x2b1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2b1f10: 0x3c020000
    ctx->pc = 0x2b1f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f14: 0x24420ad8
    ctx->pc = 0x2b1f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2776));
    // 0x2b1f18: 0x431023
    ctx->pc = 0x2b1f18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f1c: 0xafa200dc
    ctx->pc = 0x2b1f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2b1f20: 0x3c020000
    ctx->pc = 0x2b1f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f24: 0x24420ad8
    ctx->pc = 0x2b1f24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2776));
    // 0x2b1f28: 0x431023
    ctx->pc = 0x2b1f28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f2c: 0xafa200e0
    ctx->pc = 0x2b1f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2b1f30: 0x3c020000
    ctx->pc = 0x2b1f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f34: 0x24420b10
    ctx->pc = 0x2b1f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2832));
    // 0x2b1f38: 0x431023
    ctx->pc = 0x2b1f38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f3c: 0xafa200e4
    ctx->pc = 0x2b1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x2b1f40: 0x3c020000
    ctx->pc = 0x2b1f40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f44: 0x24420b30
    ctx->pc = 0x2b1f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2864));
    // 0x2b1f48: 0x431023
    ctx->pc = 0x2b1f48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f4c: 0xafa200e8
    ctx->pc = 0x2b1f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2b1f50: 0x3c020000
    ctx->pc = 0x2b1f50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f54: 0x24420b58
    ctx->pc = 0x2b1f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2904));
    // 0x2b1f58: 0x431023
    ctx->pc = 0x2b1f58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f5c: 0xafa200ec
    ctx->pc = 0x2b1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x2b1f60: 0x3c020000
    ctx->pc = 0x2b1f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f64: 0x24420b78
    ctx->pc = 0x2b1f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2936));
    // 0x2b1f68: 0x431023
    ctx->pc = 0x2b1f68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f6c: 0xafa200f0
    ctx->pc = 0x2b1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x2b1f70: 0x3c020000
    ctx->pc = 0x2b1f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f74: 0x24420c20
    ctx->pc = 0x2b1f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3104));
    // 0x2b1f78: 0x431023
    ctx->pc = 0x2b1f78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f7c: 0xafa200f4
    ctx->pc = 0x2b1f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x2b1f80: 0x3c020000
    ctx->pc = 0x2b1f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f84: 0x24420c40
    ctx->pc = 0x2b1f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3136));
    // 0x2b1f88: 0x431023
    ctx->pc = 0x2b1f88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f8c: 0xafa200f8
    ctx->pc = 0x2b1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2b1f90: 0x3c020000
    ctx->pc = 0x2b1f90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1f94: 0x24420c50
    ctx->pc = 0x2b1f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3152));
    // 0x2b1f98: 0x431023
    ctx->pc = 0x2b1f98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1f9c: 0xafa200fc
    ctx->pc = 0x2b1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x2b1fa0: 0x3c020000
    ctx->pc = 0x2b1fa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1fa4: 0x24420c58
    ctx->pc = 0x2b1fa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3160));
    // 0x2b1fa8: 0x431023
    ctx->pc = 0x2b1fa8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1fac: 0xafa20100
    ctx->pc = 0x2b1facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2b1fb0: 0x3c020000
    ctx->pc = 0x2b1fb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1fb4: 0x24420c80
    ctx->pc = 0x2b1fb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2b1fb8: 0x431023
    ctx->pc = 0x2b1fb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1fbc: 0xafa20104
    ctx->pc = 0x2b1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x2b1fc0: 0x3c020000
    ctx->pc = 0x2b1fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1fc4: 0x24420c98
    ctx->pc = 0x2b1fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3224));
    // 0x2b1fc8: 0x431023
    ctx->pc = 0x2b1fc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1fcc: 0xafa20108
    ctx->pc = 0x2b1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x2b1fd0: 0x3c020000
    ctx->pc = 0x2b1fd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1fd4: 0x24420c98
    ctx->pc = 0x2b1fd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3224));
    // 0x2b1fd8: 0x431023
    ctx->pc = 0x2b1fd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1fdc: 0xafa2010c
    ctx->pc = 0x2b1fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x2b1fe0: 0x3c020000
    ctx->pc = 0x2b1fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1fe4: 0x24420ca0
    ctx->pc = 0x2b1fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3232));
    // 0x2b1fe8: 0x431023
    ctx->pc = 0x2b1fe8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1fec: 0xafa20110
    ctx->pc = 0x2b1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x2b1ff0: 0x3c020000
    ctx->pc = 0x2b1ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b1ff4: 0x24420cb0
    ctx->pc = 0x2b1ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x2b1ff8: 0x431023
    ctx->pc = 0x2b1ff8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b1ffc: 0xafa20114
    ctx->pc = 0x2b1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x2b2000: 0x3c020000
    ctx->pc = 0x2b2000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2004: 0x24420d40
    ctx->pc = 0x2b2004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3392));
    // 0x2b2008: 0x431023
    ctx->pc = 0x2b2008u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b200c: 0xafa20118
    ctx->pc = 0x2b200cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x2b2010: 0x3c020000
    ctx->pc = 0x2b2010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2014: 0x24420d60
    ctx->pc = 0x2b2014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2b2018: 0x431023
    ctx->pc = 0x2b2018u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b201c: 0xafa2011c
    ctx->pc = 0x2b201cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x2b2020: 0x3c020000
    ctx->pc = 0x2b2020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2024: 0x24420d68
    ctx->pc = 0x2b2024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3432));
    // 0x2b2028: 0x431023
    ctx->pc = 0x2b2028u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b202c: 0xafa20120
    ctx->pc = 0x2b202cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x2b2030: 0x3c020000
    ctx->pc = 0x2b2030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2034: 0x24420df0
    ctx->pc = 0x2b2034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3568));
    // 0x2b2038: 0x431023
    ctx->pc = 0x2b2038u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b203c: 0xafa20124
    ctx->pc = 0x2b203cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x2b2040: 0x3c020000
    ctx->pc = 0x2b2040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2044: 0x24420e20
    ctx->pc = 0x2b2044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3616));
    // 0x2b2048: 0x431023
    ctx->pc = 0x2b2048u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b204c: 0xafa20128
    ctx->pc = 0x2b204cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x2b2050: 0x3c020000
    ctx->pc = 0x2b2050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2054: 0x24420e40
    ctx->pc = 0x2b2054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3648));
    // 0x2b2058: 0x431023
    ctx->pc = 0x2b2058u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b205c: 0xafa2012c
    ctx->pc = 0x2b205cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x2b2060: 0x3c020000
    ctx->pc = 0x2b2060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2064: 0x24420e88
    ctx->pc = 0x2b2064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3720));
    // 0x2b2068: 0x431023
    ctx->pc = 0x2b2068u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b206c: 0xafa20130
    ctx->pc = 0x2b206cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x2b2070: 0x3c020000
    ctx->pc = 0x2b2070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2074: 0x24420ea8
    ctx->pc = 0x2b2074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3752));
    // 0x2b2078: 0x431023
    ctx->pc = 0x2b2078u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b207c: 0xafa20134
    ctx->pc = 0x2b207cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x2b2080: 0x3c020000
    ctx->pc = 0x2b2080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2084: 0x24420ec8
    ctx->pc = 0x2b2084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3784));
    // 0x2b2088: 0x431023
    ctx->pc = 0x2b2088u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b208c: 0xafa20138
    ctx->pc = 0x2b208cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x2b2090: 0x3c020000
    ctx->pc = 0x2b2090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2094: 0x24420ed8
    ctx->pc = 0x2b2094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3800));
    // 0x2b2098: 0x431023
    ctx->pc = 0x2b2098u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b209c: 0xafa2013c
    ctx->pc = 0x2b209cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x2b20a0: 0x3c020000
    ctx->pc = 0x2b20a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b20a4: 0x24420ef8
    ctx->pc = 0x2b20a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3832));
    // 0x2b20a8: 0x431023
    ctx->pc = 0x2b20a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b20ac: 0xafa20140
    ctx->pc = 0x2b20acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x2b20b0: 0x3c020000
    ctx->pc = 0x2b20b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b20b4: 0x24420f58
    ctx->pc = 0x2b20b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3928));
    // 0x2b20b8: 0x431023
    ctx->pc = 0x2b20b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b20bc: 0xafa20144
    ctx->pc = 0x2b20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x2b20c0: 0x3c020000
    ctx->pc = 0x2b20c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b20c4: 0x24420f78
    ctx->pc = 0x2b20c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3960));
    // 0x2b20c8: 0x431023
    ctx->pc = 0x2b20c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b20cc: 0xafa20148
    ctx->pc = 0x2b20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x2b20d0: 0x3c020000
    ctx->pc = 0x2b20d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b20d4: 0x24420f98
    ctx->pc = 0x2b20d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3992));
    // 0x2b20d8: 0x431023
    ctx->pc = 0x2b20d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b20dc: 0xafa2014c
    ctx->pc = 0x2b20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x2b20e0: 0x3c020000
    ctx->pc = 0x2b20e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b20e4: 0x24420fe0
    ctx->pc = 0x2b20e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4064));
    // 0x2b20e8: 0x431023
    ctx->pc = 0x2b20e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b20ec: 0xafa20150
    ctx->pc = 0x2b20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x2b20f0: 0x3c020000
    ctx->pc = 0x2b20f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b20f4: 0x24420ff8
    ctx->pc = 0x2b20f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4088));
    // 0x2b20f8: 0x431023
    ctx->pc = 0x2b20f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b20fc: 0xafa20154
    ctx->pc = 0x2b20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x2b2100: 0x3c020000
    ctx->pc = 0x2b2100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2104: 0x24421018
    ctx->pc = 0x2b2104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4120));
    // 0x2b2108: 0x431023
    ctx->pc = 0x2b2108u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b210c: 0xafa20158
    ctx->pc = 0x2b210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x2b2110: 0x3c020000
    ctx->pc = 0x2b2110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2114: 0x24421058
    ctx->pc = 0x2b2114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4184));
    // 0x2b2118: 0x431023
    ctx->pc = 0x2b2118u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b211c: 0xafa2015c
    ctx->pc = 0x2b211cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x2b2120: 0x3c020000
    ctx->pc = 0x2b2120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2124: 0x24421130
    ctx->pc = 0x2b2124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4400));
    // 0x2b2128: 0x431023
    ctx->pc = 0x2b2128u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b212c: 0xafa20160
    ctx->pc = 0x2b212cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2b2130: 0x3c020000
    ctx->pc = 0x2b2130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2134: 0x24421150
    ctx->pc = 0x2b2134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4432));
    // 0x2b2138: 0x431023
    ctx->pc = 0x2b2138u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b213c: 0xafa20164
    ctx->pc = 0x2b213cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x2b2140: 0x3c020000
    ctx->pc = 0x2b2140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2144: 0x244211e8
    ctx->pc = 0x2b2144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4584));
    // 0x2b2148: 0x431023
    ctx->pc = 0x2b2148u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b214c: 0xafa20168
    ctx->pc = 0x2b214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2b2150: 0x3c020000
    ctx->pc = 0x2b2150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2154: 0x24421200
    ctx->pc = 0x2b2154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2b2158: 0x431023
    ctx->pc = 0x2b2158u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b215c: 0xafa2016c
    ctx->pc = 0x2b215cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x2b2160: 0x3c020000
    ctx->pc = 0x2b2160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2164: 0x24421220
    ctx->pc = 0x2b2164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4640));
    // 0x2b2168: 0x431023
    ctx->pc = 0x2b2168u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b216c: 0xafa20170
    ctx->pc = 0x2b216cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x2b2170: 0x3c020000
    ctx->pc = 0x2b2170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2174: 0x24421230
    ctx->pc = 0x2b2174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4656));
    // 0x2b2178: 0x431023
    ctx->pc = 0x2b2178u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b217c: 0xafa20174
    ctx->pc = 0x2b217cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x2b2180: 0x3c020000
    ctx->pc = 0x2b2180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2184: 0x24421258
    ctx->pc = 0x2b2184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4696));
    // 0x2b2188: 0x431023
    ctx->pc = 0x2b2188u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b218c: 0xafa20178
    ctx->pc = 0x2b218cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x2b2190: 0x3c020000
    ctx->pc = 0x2b2190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2194: 0x24421288
    ctx->pc = 0x2b2194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4744));
    // 0x2b2198: 0x431023
    ctx->pc = 0x2b2198u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b219c: 0xafa2017c
    ctx->pc = 0x2b219cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x2b21a0: 0x3c020000
    ctx->pc = 0x2b21a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b21a4: 0x24421298
    ctx->pc = 0x2b21a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4760));
    // 0x2b21a8: 0x431023
    ctx->pc = 0x2b21a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b21ac: 0xafa20180
    ctx->pc = 0x2b21acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x2b21b0: 0x3c020000
    ctx->pc = 0x2b21b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b21b4: 0x244212e8
    ctx->pc = 0x2b21b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4840));
    // 0x2b21b8: 0x431023
    ctx->pc = 0x2b21b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b21bc: 0xafa20184
    ctx->pc = 0x2b21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x2b21c0: 0x3c020000
    ctx->pc = 0x2b21c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b21c4: 0x24421308
    ctx->pc = 0x2b21c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4872));
    // 0x2b21c8: 0x431023
    ctx->pc = 0x2b21c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b21cc: 0xafa20188
    ctx->pc = 0x2b21ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x2b21d0: 0x3c020000
    ctx->pc = 0x2b21d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b21d4: 0x24421318
    ctx->pc = 0x2b21d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4888));
    // 0x2b21d8: 0x431023
    ctx->pc = 0x2b21d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b21dc: 0xafa2018c
    ctx->pc = 0x2b21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x2b21e0: 0x3c020000
    ctx->pc = 0x2b21e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b21e4: 0x24421360
    ctx->pc = 0x2b21e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4960));
    // 0x2b21e8: 0x431023
    ctx->pc = 0x2b21e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b21ec: 0xafa20190
    ctx->pc = 0x2b21ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x2b21f0: 0x3c020000
    ctx->pc = 0x2b21f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b21f4: 0x24421380
    ctx->pc = 0x2b21f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4992));
    // 0x2b21f8: 0x431023
    ctx->pc = 0x2b21f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b21fc: 0xafa20194
    ctx->pc = 0x2b21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x2b2200: 0x3c020000
    ctx->pc = 0x2b2200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2204: 0x244213a8
    ctx->pc = 0x2b2204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5032));
    // 0x2b2208: 0x431023
    ctx->pc = 0x2b2208u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b220c: 0xafa20198
    ctx->pc = 0x2b220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x2b2210: 0x3c020000
    ctx->pc = 0x2b2210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2214: 0x244213c8
    ctx->pc = 0x2b2214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5064));
    // 0x2b2218: 0x431023
    ctx->pc = 0x2b2218u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b221c: 0xafa2019c
    ctx->pc = 0x2b221cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x2b2220: 0x3c020000
    ctx->pc = 0x2b2220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2224: 0x244213c8
    ctx->pc = 0x2b2224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5064));
    // 0x2b2228: 0x431023
    ctx->pc = 0x2b2228u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b222c: 0xafa201a0
    ctx->pc = 0x2b222cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x2b2230: 0x3c020000
    ctx->pc = 0x2b2230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2234: 0x24421410
    ctx->pc = 0x2b2234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5136));
    // 0x2b2238: 0x431023
    ctx->pc = 0x2b2238u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b223c: 0xafa201a4
    ctx->pc = 0x2b223cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x2b2240: 0x3c020000
    ctx->pc = 0x2b2240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2244: 0x24421440
    ctx->pc = 0x2b2244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5184));
    // 0x2b2248: 0x431023
    ctx->pc = 0x2b2248u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b224c: 0xafa201a8
    ctx->pc = 0x2b224cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2b2250: 0x3c020000
    ctx->pc = 0x2b2250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2254: 0x24421460
    ctx->pc = 0x2b2254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5216));
    // 0x2b2258: 0x431023
    ctx->pc = 0x2b2258u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b225c: 0xafa201ac
    ctx->pc = 0x2b225cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x2b2260: 0x3c020000
    ctx->pc = 0x2b2260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2264: 0x244214d0
    ctx->pc = 0x2b2264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2b2268: 0x431023
    ctx->pc = 0x2b2268u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b226c: 0xafa201b0
    ctx->pc = 0x2b226cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x2b2270: 0x3c020000
    ctx->pc = 0x2b2270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2274: 0x244214f0
    ctx->pc = 0x2b2274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5360));
    // 0x2b2278: 0x431023
    ctx->pc = 0x2b2278u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b227c: 0xafa201b4
    ctx->pc = 0x2b227cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x2b2280: 0x3c020000
    ctx->pc = 0x2b2280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2284: 0x24421540
    ctx->pc = 0x2b2284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5440));
    // 0x2b2288: 0x431023
    ctx->pc = 0x2b2288u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b228c: 0xafa201b8
    ctx->pc = 0x2b228cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x2b2290: 0x3c020000
    ctx->pc = 0x2b2290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2294: 0x24421560
    ctx->pc = 0x2b2294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5472));
    // 0x2b2298: 0x431023
    ctx->pc = 0x2b2298u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b229c: 0xafa201bc
    ctx->pc = 0x2b229cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x2b22a0: 0x3c020000
    ctx->pc = 0x2b22a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b22a4: 0x24421580
    ctx->pc = 0x2b22a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5504));
    // 0x2b22a8: 0x431023
    ctx->pc = 0x2b22a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b22ac: 0xafa201c0
    ctx->pc = 0x2b22acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
    // 0x2b22b0: 0x3c020000
    ctx->pc = 0x2b22b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b22b4: 0x244215a0
    ctx->pc = 0x2b22b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5536));
    // 0x2b22b8: 0x431023
    ctx->pc = 0x2b22b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b22bc: 0xafa201c4
    ctx->pc = 0x2b22bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    // 0x2b22c0: 0x3c020000
    ctx->pc = 0x2b22c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b22c4: 0x244215c8
    ctx->pc = 0x2b22c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5576));
    // 0x2b22c8: 0x431023
    ctx->pc = 0x2b22c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b22cc: 0xafa201c8
    ctx->pc = 0x2b22ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
    // 0x2b22d0: 0x3c020000
    ctx->pc = 0x2b22d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b22d4: 0x244215e8
    ctx->pc = 0x2b22d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5608));
    // 0x2b22d8: 0x431023
    ctx->pc = 0x2b22d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b22dc: 0xafa201cc
    ctx->pc = 0x2b22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x2b22e0: 0x3c020000
    ctx->pc = 0x2b22e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b22e4: 0x24421630
    ctx->pc = 0x2b22e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5680));
    // 0x2b22e8: 0x431023
    ctx->pc = 0x2b22e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b22ec: 0xafa201d0
    ctx->pc = 0x2b22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x2b22f0: 0x3c020000
    ctx->pc = 0x2b22f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b22f4: 0x24421650
    ctx->pc = 0x2b22f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5712));
    // 0x2b22f8: 0x431023
    ctx->pc = 0x2b22f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b22fc: 0xafa201d4
    ctx->pc = 0x2b22fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x2b2300: 0x3c020000
    ctx->pc = 0x2b2300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2304: 0x24421658
    ctx->pc = 0x2b2304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5720));
    // 0x2b2308: 0x431023
    ctx->pc = 0x2b2308u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b230c: 0xafa201d8
    ctx->pc = 0x2b230cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x2b2310: 0x3c020000
    ctx->pc = 0x2b2310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2314: 0x24421668
    ctx->pc = 0x2b2314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5736));
    // 0x2b2318: 0x431023
    ctx->pc = 0x2b2318u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b231c: 0xafa201dc
    ctx->pc = 0x2b231cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x2b2320: 0x3c020000
    ctx->pc = 0x2b2320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2324: 0x24421690
    ctx->pc = 0x2b2324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5776));
    // 0x2b2328: 0x3c030000
    ctx->pc = 0x2b2328u;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2b232c: 0x24630000
    ctx->pc = 0x2b232cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2b2330: 0x431023
    ctx->pc = 0x2b2330u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2334: 0xafa201e0
    ctx->pc = 0x2b2334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x2b2338: 0x3c020000
    ctx->pc = 0x2b2338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b233c: 0x244216b0
    ctx->pc = 0x2b233cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5808));
    // 0x2b2340: 0x431023
    ctx->pc = 0x2b2340u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2344: 0xafa201e4
    ctx->pc = 0x2b2344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
    // 0x2b2348: 0x3c020000
    ctx->pc = 0x2b2348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b234c: 0x244216b8
    ctx->pc = 0x2b234cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5816));
    // 0x2b2350: 0x431023
    ctx->pc = 0x2b2350u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2354: 0xafa201e8
    ctx->pc = 0x2b2354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
    // 0x2b2358: 0x3c020000
    ctx->pc = 0x2b2358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b235c: 0x244216d8
    ctx->pc = 0x2b235cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5848));
    // 0x2b2360: 0x431023
    ctx->pc = 0x2b2360u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2364: 0xafa201ec
    ctx->pc = 0x2b2364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x2b2368: 0x3c020000
    ctx->pc = 0x2b2368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b236c: 0x244216f8
    ctx->pc = 0x2b236cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5880));
    // 0x2b2370: 0x431023
    ctx->pc = 0x2b2370u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2374: 0xafa201f0
    ctx->pc = 0x2b2374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x2b2378: 0x3c020000
    ctx->pc = 0x2b2378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b237c: 0x24421718
    ctx->pc = 0x2b237cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5912));
    // 0x2b2380: 0x431023
    ctx->pc = 0x2b2380u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2384: 0xafa201f4
    ctx->pc = 0x2b2384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x2b2388: 0x3c020000
    ctx->pc = 0x2b2388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b238c: 0x24421730
    ctx->pc = 0x2b238cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5936));
    // 0x2b2390: 0x431023
    ctx->pc = 0x2b2390u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2394: 0xafa201f8
    ctx->pc = 0x2b2394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x2b2398: 0x3c020000
    ctx->pc = 0x2b2398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b239c: 0x24421740
    ctx->pc = 0x2b239cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5952));
    // 0x2b23a0: 0x431023
    ctx->pc = 0x2b23a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b23a4: 0xafa201fc
    ctx->pc = 0x2b23a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
    // 0x2b23a8: 0x3c020000
    ctx->pc = 0x2b23a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b23ac: 0x24421760
    ctx->pc = 0x2b23acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5984));
    // 0x2b23b0: 0x431023
    ctx->pc = 0x2b23b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b23b4: 0xafa20200
    ctx->pc = 0x2b23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x2b23b8: 0x3c020000
    ctx->pc = 0x2b23b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b23bc: 0x24421778
    ctx->pc = 0x2b23bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6008));
    // 0x2b23c0: 0x431023
    ctx->pc = 0x2b23c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b23c4: 0xafa20204
    ctx->pc = 0x2b23c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x2b23c8: 0x3c020000
    ctx->pc = 0x2b23c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b23cc: 0x24421798
    ctx->pc = 0x2b23ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6040));
    // 0x2b23d0: 0x431023
    ctx->pc = 0x2b23d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b23d4: 0xafa20208
    ctx->pc = 0x2b23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x2b23d8: 0x3c020000
    ctx->pc = 0x2b23d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b23dc: 0x244217b8
    ctx->pc = 0x2b23dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6072));
    // 0x2b23e0: 0x431023
    ctx->pc = 0x2b23e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b23e4: 0xafa2020c
    ctx->pc = 0x2b23e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x2b23e8: 0x3c020000
    ctx->pc = 0x2b23e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b23ec: 0x244217d8
    ctx->pc = 0x2b23ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6104));
    // 0x2b23f0: 0x431023
    ctx->pc = 0x2b23f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b23f4: 0xafa20210
    ctx->pc = 0x2b23f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x2b23f8: 0x3c020000
    ctx->pc = 0x2b23f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b23fc: 0x244217e8
    ctx->pc = 0x2b23fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6120));
    // 0x2b2400: 0x431023
    ctx->pc = 0x2b2400u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2404: 0xafa20214
    ctx->pc = 0x2b2404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x2b2408: 0x3c020000
    ctx->pc = 0x2b2408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b240c: 0x24421800
    ctx->pc = 0x2b240cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6144));
    // 0x2b2410: 0x431023
    ctx->pc = 0x2b2410u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2414: 0xafa20218
    ctx->pc = 0x2b2414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x2b2418: 0x3c020000
    ctx->pc = 0x2b2418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b241c: 0x24421820
    ctx->pc = 0x2b241cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6176));
    // 0x2b2420: 0x431023
    ctx->pc = 0x2b2420u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2424: 0xafa2021c
    ctx->pc = 0x2b2424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    // 0x2b2428: 0x3c020000
    ctx->pc = 0x2b2428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b242c: 0x24421848
    ctx->pc = 0x2b242cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6216));
    // 0x2b2430: 0x431023
    ctx->pc = 0x2b2430u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2434: 0xafa20220
    ctx->pc = 0x2b2434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x2b2438: 0x3c020000
    ctx->pc = 0x2b2438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b243c: 0x24421868
    ctx->pc = 0x2b243cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6248));
    // 0x2b2440: 0x431023
    ctx->pc = 0x2b2440u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2444: 0xafa20224
    ctx->pc = 0x2b2444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x2b2448: 0x3c020000
    ctx->pc = 0x2b2448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b244c: 0x24421890
    ctx->pc = 0x2b244cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6288));
    // 0x2b2450: 0x431023
    ctx->pc = 0x2b2450u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2454: 0xafa20228
    ctx->pc = 0x2b2454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x2b2458: 0x3c020000
    ctx->pc = 0x2b2458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b245c: 0x244218b8
    ctx->pc = 0x2b245cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6328));
    // 0x2b2460: 0x431023
    ctx->pc = 0x2b2460u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2464: 0xafa2022c
    ctx->pc = 0x2b2464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x2b2468: 0x3c020000
    ctx->pc = 0x2b2468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b246c: 0x244218d8
    ctx->pc = 0x2b246cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6360));
    // 0x2b2470: 0x431023
    ctx->pc = 0x2b2470u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2474: 0xafa20230
    ctx->pc = 0x2b2474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x2b2478: 0x3c020000
    ctx->pc = 0x2b2478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b247c: 0x24421970
    ctx->pc = 0x2b247cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6512));
    // 0x2b2480: 0x431023
    ctx->pc = 0x2b2480u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2484: 0xafa20234
    ctx->pc = 0x2b2484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x2b2488: 0x3c020000
    ctx->pc = 0x2b2488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b248c: 0x24421980
    ctx->pc = 0x2b248cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6528));
    // 0x2b2490: 0x431023
    ctx->pc = 0x2b2490u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2494: 0xafa20238
    ctx->pc = 0x2b2494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x2b2498: 0x3c020000
    ctx->pc = 0x2b2498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b249c: 0x244219a0
    ctx->pc = 0x2b249cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6560));
    // 0x2b24a0: 0x431023
    ctx->pc = 0x2b24a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b24a4: 0xafa2023c
    ctx->pc = 0x2b24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x2b24a8: 0x3c020000
    ctx->pc = 0x2b24a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b24ac: 0x24421a48
    ctx->pc = 0x2b24acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6728));
    // 0x2b24b0: 0x431023
    ctx->pc = 0x2b24b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b24b4: 0xafa20240
    ctx->pc = 0x2b24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x2b24b8: 0x3c020000
    ctx->pc = 0x2b24b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b24bc: 0x24421a58
    ctx->pc = 0x2b24bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6744));
    // 0x2b24c0: 0x431023
    ctx->pc = 0x2b24c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b24c4: 0xafa20244
    ctx->pc = 0x2b24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x2b24c8: 0x3c020000
    ctx->pc = 0x2b24c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b24cc: 0x24421a88
    ctx->pc = 0x2b24ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6792));
    // 0x2b24d0: 0x431023
    ctx->pc = 0x2b24d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b24d4: 0xafa20248
    ctx->pc = 0x2b24d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x2b24d8: 0x3c020000
    ctx->pc = 0x2b24d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b24dc: 0x24421aa8
    ctx->pc = 0x2b24dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6824));
    // 0x2b24e0: 0x431023
    ctx->pc = 0x2b24e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b24e4: 0xafa2024c
    ctx->pc = 0x2b24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x2b24e8: 0x3c020000
    ctx->pc = 0x2b24e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b24ec: 0x24421ac8
    ctx->pc = 0x2b24ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6856));
    // 0x2b24f0: 0x431023
    ctx->pc = 0x2b24f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b24f4: 0xafa20250
    ctx->pc = 0x2b24f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x2b24f8: 0x3c020000
    ctx->pc = 0x2b24f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b24fc: 0x24421ae0
    ctx->pc = 0x2b24fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6880));
    // 0x2b2500: 0x431023
    ctx->pc = 0x2b2500u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2504: 0xafa20254
    ctx->pc = 0x2b2504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    // 0x2b2508: 0x3c020000
    ctx->pc = 0x2b2508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b250c: 0x24421ae0
    ctx->pc = 0x2b250cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6880));
    // 0x2b2510: 0x431023
    ctx->pc = 0x2b2510u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2514: 0xafa20258
    ctx->pc = 0x2b2514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x2b2518: 0x3c020000
    ctx->pc = 0x2b2518u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b251c: 0x24421b00
    ctx->pc = 0x2b251cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6912));
    // 0x2b2520: 0x431023
    ctx->pc = 0x2b2520u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2524: 0xafa2025c
    ctx->pc = 0x2b2524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
    // 0x2b2528: 0x3c020000
    ctx->pc = 0x2b2528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b252c: 0x24421b60
    ctx->pc = 0x2b252cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7008));
    // 0x2b2530: 0x431023
    ctx->pc = 0x2b2530u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2534: 0xafa20260
    ctx->pc = 0x2b2534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x2b2538: 0x3c020000
    ctx->pc = 0x2b2538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b253c: 0x24421b80
    ctx->pc = 0x2b253cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7040));
    // 0x2b2540: 0x431023
    ctx->pc = 0x2b2540u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2544: 0xafa20264
    ctx->pc = 0x2b2544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x2b2548: 0x3c020000
    ctx->pc = 0x2b2548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b254c: 0x24421ba0
    ctx->pc = 0x2b254cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7072));
    // 0x2b2550: 0x431023
    ctx->pc = 0x2b2550u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2554: 0xafa20268
    ctx->pc = 0x2b2554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    // 0x2b2558: 0x3c020000
    ctx->pc = 0x2b2558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b255c: 0x24421be8
    ctx->pc = 0x2b255cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7144));
    // 0x2b2560: 0x431023
    ctx->pc = 0x2b2560u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2564: 0xafa2026c
    ctx->pc = 0x2b2564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
    // 0x2b2568: 0x3c020000
    ctx->pc = 0x2b2568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b256c: 0x24421c00
    ctx->pc = 0x2b256cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7168));
    // 0x2b2570: 0x431023
    ctx->pc = 0x2b2570u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2574: 0xafa20270
    ctx->pc = 0x2b2574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x2b2578: 0x3c020000
    ctx->pc = 0x2b2578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b257c: 0x24421c20
    ctx->pc = 0x2b257cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7200));
    // 0x2b2580: 0x431023
    ctx->pc = 0x2b2580u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2584: 0xafa20274
    ctx->pc = 0x2b2584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x2b2588: 0x3c020000
    ctx->pc = 0x2b2588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b258c: 0x24421c28
    ctx->pc = 0x2b258cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7208));
    // 0x2b2590: 0x431023
    ctx->pc = 0x2b2590u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2594: 0xafa20278
    ctx->pc = 0x2b2594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
    // 0x2b2598: 0x3c020000
    ctx->pc = 0x2b2598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b259c: 0x24421d00
    ctx->pc = 0x2b259cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7424));
    // 0x2b25a0: 0x431023
    ctx->pc = 0x2b25a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b25a4: 0xafa2027c
    ctx->pc = 0x2b25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
    // 0x2b25a8: 0x3c020000
    ctx->pc = 0x2b25a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b25ac: 0x24421d20
    ctx->pc = 0x2b25acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7456));
    // 0x2b25b0: 0x431023
    ctx->pc = 0x2b25b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b25b4: 0xafa20280
    ctx->pc = 0x2b25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x2b25b8: 0x3c020000
    ctx->pc = 0x2b25b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b25bc: 0x24421db8
    ctx->pc = 0x2b25bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7608));
    // 0x2b25c0: 0x431023
    ctx->pc = 0x2b25c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b25c4: 0xafa20284
    ctx->pc = 0x2b25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x2b25c8: 0x3c020000
    ctx->pc = 0x2b25c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b25cc: 0x24421dd0
    ctx->pc = 0x2b25ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7632));
    // 0x2b25d0: 0x431023
    ctx->pc = 0x2b25d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b25d4: 0xafa20288
    ctx->pc = 0x2b25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
    // 0x2b25d8: 0x3c020000
    ctx->pc = 0x2b25d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b25dc: 0x24421df0
    ctx->pc = 0x2b25dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7664));
    // 0x2b25e0: 0x431023
    ctx->pc = 0x2b25e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b25e4: 0xafa2028c
    ctx->pc = 0x2b25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x2b25e8: 0x3c020000
    ctx->pc = 0x2b25e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b25ec: 0x24421e00
    ctx->pc = 0x2b25ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7680));
    // 0x2b25f0: 0x431023
    ctx->pc = 0x2b25f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b25f4: 0xafa20290
    ctx->pc = 0x2b25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x2b25f8: 0x3c020000
    ctx->pc = 0x2b25f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b25fc: 0x24421e28
    ctx->pc = 0x2b25fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7720));
    // 0x2b2600: 0x431023
    ctx->pc = 0x2b2600u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2604: 0xafa20294
    ctx->pc = 0x2b2604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x2b2608: 0x3c020000
    ctx->pc = 0x2b2608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b260c: 0x24421e50
    ctx->pc = 0x2b260cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7760));
    // 0x2b2610: 0x431023
    ctx->pc = 0x2b2610u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2614: 0xafa20298
    ctx->pc = 0x2b2614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x2b2618: 0x3c020000
    ctx->pc = 0x2b2618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b261c: 0x24421e60
    ctx->pc = 0x2b261cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7776));
    // 0x2b2620: 0x431023
    ctx->pc = 0x2b2620u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2624: 0xafa2029c
    ctx->pc = 0x2b2624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    // 0x2b2628: 0x3c020000
    ctx->pc = 0x2b2628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b262c: 0x24421eb0
    ctx->pc = 0x2b262cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7856));
    // 0x2b2630: 0x431023
    ctx->pc = 0x2b2630u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2634: 0xafa202a0
    ctx->pc = 0x2b2634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
    // 0x2b2638: 0x3c020000
    ctx->pc = 0x2b2638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b263c: 0x24421ed0
    ctx->pc = 0x2b263cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7888));
    // 0x2b2640: 0x431023
    ctx->pc = 0x2b2640u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2644: 0xafa202a4
    ctx->pc = 0x2b2644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
    // 0x2b2648: 0x3c020000
    ctx->pc = 0x2b2648u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b264c: 0x24421ee0
    ctx->pc = 0x2b264cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7904));
    // 0x2b2650: 0x431023
    ctx->pc = 0x2b2650u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2654: 0xafa202a8
    ctx->pc = 0x2b2654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    // 0x2b2658: 0x3c020000
    ctx->pc = 0x2b2658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b265c: 0x24421f28
    ctx->pc = 0x2b265cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7976));
    // 0x2b2660: 0x431023
    ctx->pc = 0x2b2660u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2664: 0xafa202ac
    ctx->pc = 0x2b2664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 2));
    // 0x2b2668: 0x3c020000
    ctx->pc = 0x2b2668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b266c: 0x24421f48
    ctx->pc = 0x2b266cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8008));
    // 0x2b2670: 0x431023
    ctx->pc = 0x2b2670u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2674: 0xafa202b0
    ctx->pc = 0x2b2674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x2b2678: 0x3c020000
    ctx->pc = 0x2b2678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b267c: 0x24421f70
    ctx->pc = 0x2b267cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8048));
    // 0x2b2680: 0x431023
    ctx->pc = 0x2b2680u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2684: 0xafa202b4
    ctx->pc = 0x2b2684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 2));
    // 0x2b2688: 0x3c020000
    ctx->pc = 0x2b2688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b268c: 0x24421f90
    ctx->pc = 0x2b268cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8080));
    // 0x2b2690: 0x431023
    ctx->pc = 0x2b2690u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2694: 0xafa202b8
    ctx->pc = 0x2b2694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
    // 0x2b2698: 0x3c020000
    ctx->pc = 0x2b2698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b269c: 0x24421fe8
    ctx->pc = 0x2b269cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8168));
    // 0x2b26a0: 0x431023
    ctx->pc = 0x2b26a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b26a4: 0xafa202bc
    ctx->pc = 0x2b26a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
    // 0x2b26a8: 0x3c020000
    ctx->pc = 0x2b26a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b26ac: 0x24422010
    ctx->pc = 0x2b26acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8208));
    // 0x2b26b0: 0x431023
    ctx->pc = 0x2b26b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b26b4: 0xafa202c0
    ctx->pc = 0x2b26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
    // 0x2b26b8: 0x3c020000
    ctx->pc = 0x2b26b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b26bc: 0x24422080
    ctx->pc = 0x2b26bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8320));
    // 0x2b26c0: 0x431023
    ctx->pc = 0x2b26c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b26c4: 0xafa202c4
    ctx->pc = 0x2b26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
    // 0x2b26c8: 0x3c020000
    ctx->pc = 0x2b26c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b26cc: 0x244220a0
    ctx->pc = 0x2b26ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8352));
    // 0x2b26d0: 0x431023
    ctx->pc = 0x2b26d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b26d4: 0xafa202c8
    ctx->pc = 0x2b26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
    // 0x2b26d8: 0x3c020000
    ctx->pc = 0x2b26d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b26dc: 0x244220f0
    ctx->pc = 0x2b26dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8432));
    // 0x2b26e0: 0x431023
    ctx->pc = 0x2b26e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b26e4: 0xafa202cc
    ctx->pc = 0x2b26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
    // 0x2b26e8: 0x3c020000
    ctx->pc = 0x2b26e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b26ec: 0x24422110
    ctx->pc = 0x2b26ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8464));
    // 0x2b26f0: 0x431023
    ctx->pc = 0x2b26f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b26f4: 0xafa202d0
    ctx->pc = 0x2b26f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x2b26f8: 0x3c020000
    ctx->pc = 0x2b26f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b26fc: 0x24422130
    ctx->pc = 0x2b26fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8496));
    // 0x2b2700: 0x431023
    ctx->pc = 0x2b2700u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2704: 0xafa202d4
    ctx->pc = 0x2b2704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x2b2708: 0x3c020000
    ctx->pc = 0x2b2708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b270c: 0x24422150
    ctx->pc = 0x2b270cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8528));
    // 0x2b2710: 0x431023
    ctx->pc = 0x2b2710u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2714: 0xafa202d8
    ctx->pc = 0x2b2714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x2b2718: 0x3c020000
    ctx->pc = 0x2b2718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b271c: 0x24422178
    ctx->pc = 0x2b271cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8568));
    // 0x2b2720: 0x431023
    ctx->pc = 0x2b2720u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2724: 0xafa202dc
    ctx->pc = 0x2b2724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 2));
    // 0x2b2728: 0x3c020000
    ctx->pc = 0x2b2728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b272c: 0x24422198
    ctx->pc = 0x2b272cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8600));
    // 0x2b2730: 0x431023
    ctx->pc = 0x2b2730u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2734: 0xafa202e0
    ctx->pc = 0x2b2734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x2b2738: 0x3c020000
    ctx->pc = 0x2b2738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b273c: 0x244221e0
    ctx->pc = 0x2b273cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8672));
    // 0x2b2740: 0x431023
    ctx->pc = 0x2b2740u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2744: 0xafa202e4
    ctx->pc = 0x2b2744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
    // 0x2b2748: 0x3c020000
    ctx->pc = 0x2b2748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b274c: 0x24422200
    ctx->pc = 0x2b274cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8704));
    // 0x2b2750: 0x431023
    ctx->pc = 0x2b2750u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2754: 0xafa202e8
    ctx->pc = 0x2b2754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
    // 0x2b2758: 0x3c020000
    ctx->pc = 0x2b2758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b275c: 0x24422208
    ctx->pc = 0x2b275cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8712));
    // 0x2b2760: 0x431023
    ctx->pc = 0x2b2760u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2764: 0xafa202ec
    ctx->pc = 0x2b2764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
    // 0x2b2768: 0x3c020000
    ctx->pc = 0x2b2768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b276c: 0x24422218
    ctx->pc = 0x2b276cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8728));
    // 0x2b2770: 0x431023
    ctx->pc = 0x2b2770u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2774: 0xafa202f0
    ctx->pc = 0x2b2774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
    // 0x2b2778: 0x3c020000
    ctx->pc = 0x2b2778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b277c: 0x24422240
    ctx->pc = 0x2b277cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8768));
    // 0x2b2780: 0x431023
    ctx->pc = 0x2b2780u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2784: 0xafa202f4
    ctx->pc = 0x2b2784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
    // 0x2b2788: 0x3c020000
    ctx->pc = 0x2b2788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b278c: 0x24422260
    ctx->pc = 0x2b278cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8800));
    // 0x2b2790: 0x431023
    ctx->pc = 0x2b2790u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2794: 0xafa202f8
    ctx->pc = 0x2b2794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
    // 0x2b2798: 0x3c020000
    ctx->pc = 0x2b2798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b279c: 0x24422268
    ctx->pc = 0x2b279cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8808));
    // 0x2b27a0: 0x431023
    ctx->pc = 0x2b27a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b27a4: 0xafa202fc
    ctx->pc = 0x2b27a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
    // 0x2b27a8: 0x3c020000
    ctx->pc = 0x2b27a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b27ac: 0x24422288
    ctx->pc = 0x2b27acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8840));
    // 0x2b27b0: 0x431023
    ctx->pc = 0x2b27b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b27b4: 0xafa20300
    ctx->pc = 0x2b27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
    // 0x2b27b8: 0x3c020000
    ctx->pc = 0x2b27b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b27bc: 0x244222a8
    ctx->pc = 0x2b27bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8872));
    // 0x2b27c0: 0x431023
    ctx->pc = 0x2b27c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b27c4: 0xafa20304
    ctx->pc = 0x2b27c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 2));
    // 0x2b27c8: 0x3c020000
    ctx->pc = 0x2b27c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b27cc: 0x244222c8
    ctx->pc = 0x2b27ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8904));
    // 0x2b27d0: 0x431023
    ctx->pc = 0x2b27d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b27d4: 0xafa20308
    ctx->pc = 0x2b27d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 2));
    // 0x2b27d8: 0x3c020000
    ctx->pc = 0x2b27d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b27dc: 0x24422300
    ctx->pc = 0x2b27dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8960));
    // 0x2b27e0: 0x431023
    ctx->pc = 0x2b27e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b27e4: 0xafa2030c
    ctx->pc = 0x2b27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
    // 0x2b27e8: 0x3c020000
    ctx->pc = 0x2b27e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b27ec: 0x24422320
    ctx->pc = 0x2b27ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8992));
    // 0x2b27f0: 0x431023
    ctx->pc = 0x2b27f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b27f4: 0xafa20310
    ctx->pc = 0x2b27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 2));
    // 0x2b27f8: 0x3c020000
    ctx->pc = 0x2b27f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b27fc: 0x24422340
    ctx->pc = 0x2b27fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9024));
    // 0x2b2800: 0x431023
    ctx->pc = 0x2b2800u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2804: 0xafa20314
    ctx->pc = 0x2b2804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 2));
    // 0x2b2808: 0x3c020000
    ctx->pc = 0x2b2808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b280c: 0x24422360
    ctx->pc = 0x2b280cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9056));
    // 0x2b2810: 0x431023
    ctx->pc = 0x2b2810u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2814: 0xafa20318
    ctx->pc = 0x2b2814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 2));
    // 0x2b2818: 0x3c020000
    ctx->pc = 0x2b2818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b281c: 0x24422380
    ctx->pc = 0x2b281cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9088));
    // 0x2b2820: 0x431023
    ctx->pc = 0x2b2820u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2824: 0xafa2031c
    ctx->pc = 0x2b2824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
    // 0x2b2828: 0x3c020000
    ctx->pc = 0x2b2828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b282c: 0x244223a0
    ctx->pc = 0x2b282cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9120));
    // 0x2b2830: 0x431023
    ctx->pc = 0x2b2830u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2834: 0xafa20320
    ctx->pc = 0x2b2834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
    // 0x2b2838: 0x3c020000
    ctx->pc = 0x2b2838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b283c: 0x244223b8
    ctx->pc = 0x2b283cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9144));
    // 0x2b2840: 0x431023
    ctx->pc = 0x2b2840u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2844: 0xafa20324
    ctx->pc = 0x2b2844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 2));
    // 0x2b2848: 0x3c020000
    ctx->pc = 0x2b2848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b284c: 0x244223b8
    ctx->pc = 0x2b284cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9144));
    // 0x2b2850: 0x431023
    ctx->pc = 0x2b2850u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2854: 0xafa20328
    ctx->pc = 0x2b2854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 2));
    // 0x2b2858: 0x3c020000
    ctx->pc = 0x2b2858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b285c: 0x244223c0
    ctx->pc = 0x2b285cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9152));
    // 0x2b2860: 0x431023
    ctx->pc = 0x2b2860u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2864: 0xafa2032c
    ctx->pc = 0x2b2864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 2));
    // 0x2b2868: 0x3c020000
    ctx->pc = 0x2b2868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b286c: 0x244223e0
    ctx->pc = 0x2b286cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9184));
    // 0x2b2870: 0x431023
    ctx->pc = 0x2b2870u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2874: 0xafa20330
    ctx->pc = 0x2b2874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 2));
    // 0x2b2878: 0x3c020000
    ctx->pc = 0x2b2878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b287c: 0x24422478
    ctx->pc = 0x2b287cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2b2880: 0x431023
    ctx->pc = 0x2b2880u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2884: 0xafa20334
    ctx->pc = 0x2b2884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 2));
    // 0x2b2888: 0x3c020000
    ctx->pc = 0x2b2888u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b288c: 0x244224b8
    ctx->pc = 0x2b288cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9400));
    // 0x2b2890: 0x431023
    ctx->pc = 0x2b2890u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2894: 0xafa20338
    ctx->pc = 0x2b2894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 2));
    // 0x2b2898: 0x3c020000
    ctx->pc = 0x2b2898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b289c: 0x244224e8
    ctx->pc = 0x2b289cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9448));
    // 0x2b28a0: 0x431023
    ctx->pc = 0x2b28a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b28a4: 0xafa2033c
    ctx->pc = 0x2b28a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 2));
    // 0x2b28a8: 0x3c020000
    ctx->pc = 0x2b28a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b28ac: 0x24422538
    ctx->pc = 0x2b28acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9528));
    // 0x2b28b0: 0x431023
    ctx->pc = 0x2b28b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b28b4: 0xafa20340
    ctx->pc = 0x2b28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
    // 0x2b28b8: 0x3c020000
    ctx->pc = 0x2b28b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b28bc: 0x24422540
    ctx->pc = 0x2b28bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9536));
    // 0x2b28c0: 0x431023
    ctx->pc = 0x2b28c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b28c4: 0xafa20344
    ctx->pc = 0x2b28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
    // 0x2b28c8: 0x3c020000
    ctx->pc = 0x2b28c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b28cc: 0x24422560
    ctx->pc = 0x2b28ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9568));
    // 0x2b28d0: 0x431023
    ctx->pc = 0x2b28d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b28d4: 0xafa20348
    ctx->pc = 0x2b28d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 2));
    // 0x2b28d8: 0x3c020000
    ctx->pc = 0x2b28d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b28dc: 0x24422580
    ctx->pc = 0x2b28dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2b28e0: 0x431023
    ctx->pc = 0x2b28e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b28e4: 0xafa2034c
    ctx->pc = 0x2b28e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 2));
    // 0x2b28e8: 0x3c020000
    ctx->pc = 0x2b28e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b28ec: 0x24422590
    ctx->pc = 0x2b28ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9616));
    // 0x2b28f0: 0x431023
    ctx->pc = 0x2b28f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b28f4: 0xafa20350
    ctx->pc = 0x2b28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
    // 0x2b28f8: 0x3c020000
    ctx->pc = 0x2b28f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b28fc: 0x244225b0
    ctx->pc = 0x2b28fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9648));
    // 0x2b2900: 0x431023
    ctx->pc = 0x2b2900u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2904: 0xafa20354
    ctx->pc = 0x2b2904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 852), GPR_U32(ctx, 2));
    // 0x2b2908: 0x3c020000
    ctx->pc = 0x2b2908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b290c: 0x24422608
    ctx->pc = 0x2b290cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9736));
    // 0x2b2910: 0x431023
    ctx->pc = 0x2b2910u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2914: 0xafa20358
    ctx->pc = 0x2b2914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 2));
    // 0x2b2918: 0x3c020000
    ctx->pc = 0x2b2918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b291c: 0x24422628
    ctx->pc = 0x2b291cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9768));
    // 0x2b2920: 0x431023
    ctx->pc = 0x2b2920u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2924: 0xafa2035c
    ctx->pc = 0x2b2924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 860), GPR_U32(ctx, 2));
    // 0x2b2928: 0x3c020000
    ctx->pc = 0x2b2928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b292c: 0x24422638
    ctx->pc = 0x2b292cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9784));
    // 0x2b2930: 0x431023
    ctx->pc = 0x2b2930u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2934: 0xafa20360
    ctx->pc = 0x2b2934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 2));
    // 0x2b2938: 0x3c020000
    ctx->pc = 0x2b2938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b293c: 0x24422678
    ctx->pc = 0x2b293cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9848));
    // 0x2b2940: 0x431023
    ctx->pc = 0x2b2940u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2944: 0xafa20364
    ctx->pc = 0x2b2944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 2));
    // 0x2b2948: 0x3c020000
    ctx->pc = 0x2b2948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b294c: 0x24422680
    ctx->pc = 0x2b294cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9856));
    // 0x2b2950: 0x431023
    ctx->pc = 0x2b2950u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2954: 0xafa20368
    ctx->pc = 0x2b2954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 2));
    // 0x2b2958: 0x3c020000
    ctx->pc = 0x2b2958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b295c: 0x24422790
    ctx->pc = 0x2b295cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10128));
    // 0x2b2960: 0x431023
    ctx->pc = 0x2b2960u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2964: 0xafa2036c
    ctx->pc = 0x2b2964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 2));
    // 0x2b2968: 0x3c020000
    ctx->pc = 0x2b2968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b296c: 0x244227b0
    ctx->pc = 0x2b296cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10160));
    // 0x2b2970: 0x431023
    ctx->pc = 0x2b2970u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2974: 0xafa20370
    ctx->pc = 0x2b2974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 2));
    // 0x2b2978: 0x3c020000
    ctx->pc = 0x2b2978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b297c: 0x244227c0
    ctx->pc = 0x2b297cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10176));
    // 0x2b2980: 0x431023
    ctx->pc = 0x2b2980u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2984: 0xafa20374
    ctx->pc = 0x2b2984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 2));
    // 0x2b2988: 0x3c020000
    ctx->pc = 0x2b2988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b298c: 0x244227e0
    ctx->pc = 0x2b298cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10208));
    // 0x2b2990: 0x431023
    ctx->pc = 0x2b2990u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2994: 0xafa20378
    ctx->pc = 0x2b2994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 888), GPR_U32(ctx, 2));
    // 0x2b2998: 0x3c020000
    ctx->pc = 0x2b2998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b299c: 0x24422820
    ctx->pc = 0x2b299cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10272));
    // 0x2b29a0: 0x431023
    ctx->pc = 0x2b29a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b29a4: 0xafa2037c
    ctx->pc = 0x2b29a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 2));
    // 0x2b29a8: 0x3c020000
    ctx->pc = 0x2b29a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b29ac: 0x24422860
    ctx->pc = 0x2b29acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10336));
    // 0x2b29b0: 0x431023
    ctx->pc = 0x2b29b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b29b4: 0xafa20380
    ctx->pc = 0x2b29b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
    // 0x2b29b8: 0x3c020000
    ctx->pc = 0x2b29b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b29bc: 0x24422880
    ctx->pc = 0x2b29bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10368));
    // 0x2b29c0: 0x431023
    ctx->pc = 0x2b29c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b29c4: 0xafa20384
    ctx->pc = 0x2b29c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 2));
    // 0x2b29c8: 0x3c020000
    ctx->pc = 0x2b29c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b29cc: 0x24422898
    ctx->pc = 0x2b29ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10392));
    // 0x2b29d0: 0x431023
    ctx->pc = 0x2b29d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b29d4: 0xafa20388
    ctx->pc = 0x2b29d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 904), GPR_U32(ctx, 2));
    // 0x2b29d8: 0x3c020000
    ctx->pc = 0x2b29d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b29dc: 0x244228b8
    ctx->pc = 0x2b29dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10424));
    // 0x2b29e0: 0x431023
    ctx->pc = 0x2b29e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b29e4: 0xafa2038c
    ctx->pc = 0x2b29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 908), GPR_U32(ctx, 2));
    // 0x2b29e8: 0x3c020000
    ctx->pc = 0x2b29e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b29ec: 0x244228c0
    ctx->pc = 0x2b29ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10432));
    // 0x2b29f0: 0x431023
    ctx->pc = 0x2b29f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b29f4: 0xafa20390
    ctx->pc = 0x2b29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
    // 0x2b29f8: 0x3c020000
    ctx->pc = 0x2b29f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b29fc: 0x244228e0
    ctx->pc = 0x2b29fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10464));
    // 0x2b2a00: 0x431023
    ctx->pc = 0x2b2a00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a04: 0xafa20394
    ctx->pc = 0x2b2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 916), GPR_U32(ctx, 2));
    // 0x2b2a08: 0x3c020000
    ctx->pc = 0x2b2a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a0c: 0x24422910
    ctx->pc = 0x2b2a0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10512));
    // 0x2b2a10: 0x431023
    ctx->pc = 0x2b2a10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a14: 0xafa20398
    ctx->pc = 0x2b2a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 920), GPR_U32(ctx, 2));
    // 0x2b2a18: 0x3c020000
    ctx->pc = 0x2b2a18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a1c: 0x24422930
    ctx->pc = 0x2b2a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10544));
    // 0x2b2a20: 0x431023
    ctx->pc = 0x2b2a20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a24: 0xafa2039c
    ctx->pc = 0x2b2a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 924), GPR_U32(ctx, 2));
    // 0x2b2a28: 0x3c020000
    ctx->pc = 0x2b2a28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a2c: 0x24422940
    ctx->pc = 0x2b2a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10560));
    // 0x2b2a30: 0x431023
    ctx->pc = 0x2b2a30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a34: 0xafa203a0
    ctx->pc = 0x2b2a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
    // 0x2b2a38: 0x3c020000
    ctx->pc = 0x2b2a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a3c: 0x24422960
    ctx->pc = 0x2b2a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10592));
    // 0x2b2a40: 0x431023
    ctx->pc = 0x2b2a40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a44: 0xafa203a4
    ctx->pc = 0x2b2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 932), GPR_U32(ctx, 2));
    // 0x2b2a48: 0x3c020000
    ctx->pc = 0x2b2a48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a4c: 0x24422988
    ctx->pc = 0x2b2a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10632));
    // 0x2b2a50: 0x431023
    ctx->pc = 0x2b2a50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a54: 0xafa203a8
    ctx->pc = 0x2b2a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 2));
    // 0x2b2a58: 0x3c020000
    ctx->pc = 0x2b2a58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a5c: 0x244229a8
    ctx->pc = 0x2b2a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10664));
    // 0x2b2a60: 0x431023
    ctx->pc = 0x2b2a60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a64: 0xafa203ac
    ctx->pc = 0x2b2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
    // 0x2b2a68: 0x3c020000
    ctx->pc = 0x2b2a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a6c: 0x244229d8
    ctx->pc = 0x2b2a6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10712));
    // 0x2b2a70: 0x431023
    ctx->pc = 0x2b2a70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a74: 0xafa203b0
    ctx->pc = 0x2b2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 2));
    // 0x2b2a78: 0x3c020000
    ctx->pc = 0x2b2a78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a7c: 0x244229f8
    ctx->pc = 0x2b2a7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10744));
    // 0x2b2a80: 0x431023
    ctx->pc = 0x2b2a80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a84: 0xafa203b4
    ctx->pc = 0x2b2a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 948), GPR_U32(ctx, 2));
    // 0x2b2a88: 0x3c020000
    ctx->pc = 0x2b2a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a8c: 0x24422a08
    ctx->pc = 0x2b2a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10760));
    // 0x2b2a90: 0x431023
    ctx->pc = 0x2b2a90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2a94: 0xafa203b8
    ctx->pc = 0x2b2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 2));
    // 0x2b2a98: 0x3c020000
    ctx->pc = 0x2b2a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2a9c: 0x24422a28
    ctx->pc = 0x2b2a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10792));
    // 0x2b2aa0: 0x431023
    ctx->pc = 0x2b2aa0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2aa4: 0xafa203bc
    ctx->pc = 0x2b2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 2));
    // 0x2b2aa8: 0x3c020000
    ctx->pc = 0x2b2aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2aac: 0x24422a60
    ctx->pc = 0x2b2aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10848));
    // 0x2b2ab0: 0x431023
    ctx->pc = 0x2b2ab0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ab4: 0xafa203c0
    ctx->pc = 0x2b2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 2));
    // 0x2b2ab8: 0x3c020000
    ctx->pc = 0x2b2ab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2abc: 0x24422a80
    ctx->pc = 0x2b2abcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10880));
    // 0x2b2ac0: 0x431023
    ctx->pc = 0x2b2ac0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ac4: 0xafa203c4
    ctx->pc = 0x2b2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 2));
    // 0x2b2ac8: 0x3c020000
    ctx->pc = 0x2b2ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2acc: 0x24422ad8
    ctx->pc = 0x2b2accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10968));
    // 0x2b2ad0: 0x431023
    ctx->pc = 0x2b2ad0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ad4: 0xafa203c8
    ctx->pc = 0x2b2ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 2));
    // 0x2b2ad8: 0x3c020000
    ctx->pc = 0x2b2ad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2adc: 0x24422af8
    ctx->pc = 0x2b2adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11000));
    // 0x2b2ae0: 0x431023
    ctx->pc = 0x2b2ae0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ae4: 0xafa203cc
    ctx->pc = 0x2b2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 2));
    // 0x2b2ae8: 0x3c020000
    ctx->pc = 0x2b2ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2aec: 0x24422b60
    ctx->pc = 0x2b2aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11104));
    // 0x2b2af0: 0x431023
    ctx->pc = 0x2b2af0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2af4: 0xafa203d0
    ctx->pc = 0x2b2af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 2));
    // 0x2b2af8: 0x3c020000
    ctx->pc = 0x2b2af8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2afc: 0x24422b80
    ctx->pc = 0x2b2afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11136));
    // 0x2b2b00: 0x431023
    ctx->pc = 0x2b2b00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b04: 0xafa203d4
    ctx->pc = 0x2b2b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 2));
    // 0x2b2b08: 0x3c020000
    ctx->pc = 0x2b2b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b0c: 0x24422b88
    ctx->pc = 0x2b2b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11144));
    // 0x2b2b10: 0x431023
    ctx->pc = 0x2b2b10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b14: 0xafa203d8
    ctx->pc = 0x2b2b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 984), GPR_U32(ctx, 2));
    // 0x2b2b18: 0x3c020000
    ctx->pc = 0x2b2b18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b1c: 0x24422ba8
    ctx->pc = 0x2b2b1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11176));
    // 0x2b2b20: 0x431023
    ctx->pc = 0x2b2b20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b24: 0xafa203dc
    ctx->pc = 0x2b2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 2));
    // 0x2b2b28: 0x3c020000
    ctx->pc = 0x2b2b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b2c: 0x24422c28
    ctx->pc = 0x2b2b2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11304));
    // 0x2b2b30: 0x431023
    ctx->pc = 0x2b2b30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b34: 0xafa203e0
    ctx->pc = 0x2b2b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 2));
    // 0x2b2b38: 0x3c020000
    ctx->pc = 0x2b2b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b3c: 0x24422c48
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11336));
    // 0x2b2b40: 0x431023
    ctx->pc = 0x2b2b40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b44: 0xafa203e4
    ctx->pc = 0x2b2b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 2));
    // 0x2b2b48: 0x3c020000
    ctx->pc = 0x2b2b48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b4c: 0x24422c50
    ctx->pc = 0x2b2b4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11344));
    // 0x2b2b50: 0x431023
    ctx->pc = 0x2b2b50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b54: 0xafa203e8
    ctx->pc = 0x2b2b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 2));
    // 0x2b2b58: 0x3c020000
    ctx->pc = 0x2b2b58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b5c: 0x24422c70
    ctx->pc = 0x2b2b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11376));
    // 0x2b2b60: 0x431023
    ctx->pc = 0x2b2b60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b64: 0xafa203ec
    ctx->pc = 0x2b2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 2));
    // 0x2b2b68: 0x3c020000
    ctx->pc = 0x2b2b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b6c: 0x24422c80
    ctx->pc = 0x2b2b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11392));
    // 0x2b2b70: 0x431023
    ctx->pc = 0x2b2b70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b74: 0xafa203f0
    ctx->pc = 0x2b2b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 2));
    // 0x2b2b78: 0x3c020000
    ctx->pc = 0x2b2b78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b7c: 0x24422ca0
    ctx->pc = 0x2b2b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11424));
    // 0x2b2b80: 0x431023
    ctx->pc = 0x2b2b80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b84: 0xafa203f4
    ctx->pc = 0x2b2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1012), GPR_U32(ctx, 2));
    // 0x2b2b88: 0x3c020000
    ctx->pc = 0x2b2b88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b8c: 0x24422cc8
    ctx->pc = 0x2b2b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11464));
    // 0x2b2b90: 0x431023
    ctx->pc = 0x2b2b90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2b94: 0xafa203f8
    ctx->pc = 0x2b2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 2));
    // 0x2b2b98: 0x3c020000
    ctx->pc = 0x2b2b98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2b9c: 0x24422ce8
    ctx->pc = 0x2b2b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11496));
    // 0x2b2ba0: 0x431023
    ctx->pc = 0x2b2ba0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ba4: 0xafa203fc
    ctx->pc = 0x2b2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1020), GPR_U32(ctx, 2));
    // 0x2b2ba8: 0x3c020000
    ctx->pc = 0x2b2ba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2bac: 0x24422cf8
    ctx->pc = 0x2b2bacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11512));
    // 0x2b2bb0: 0x431023
    ctx->pc = 0x2b2bb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2bb4: 0xafa20400
    ctx->pc = 0x2b2bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
    // 0x2b2bb8: 0x3c020000
    ctx->pc = 0x2b2bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2bbc: 0x24422d18
    ctx->pc = 0x2b2bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11544));
    // 0x2b2bc0: 0x431023
    ctx->pc = 0x2b2bc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2bc4: 0xafa20404
    ctx->pc = 0x2b2bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
    // 0x2b2bc8: 0x3c020000
    ctx->pc = 0x2b2bc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2bcc: 0x24422d38
    ctx->pc = 0x2b2bccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11576));
    // 0x2b2bd0: 0x431023
    ctx->pc = 0x2b2bd0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2bd4: 0xafa20408
    ctx->pc = 0x2b2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 2));
    // 0x2b2bd8: 0x3c020000
    ctx->pc = 0x2b2bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2bdc: 0x24422d58
    ctx->pc = 0x2b2bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11608));
    // 0x2b2be0: 0x431023
    ctx->pc = 0x2b2be0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2be4: 0xafa2040c
    ctx->pc = 0x2b2be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 2));
    // 0x2b2be8: 0x3c020000
    ctx->pc = 0x2b2be8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2bec: 0x24422d68
    ctx->pc = 0x2b2becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11624));
    // 0x2b2bf0: 0x431023
    ctx->pc = 0x2b2bf0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2bf4: 0xafa20410
    ctx->pc = 0x2b2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 2));
    // 0x2b2bf8: 0x3c020000
    ctx->pc = 0x2b2bf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2bfc: 0x24422d88
    ctx->pc = 0x2b2bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11656));
    // 0x2b2c00: 0x431023
    ctx->pc = 0x2b2c00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c04: 0xafa20414
    ctx->pc = 0x2b2c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 2));
    // 0x2b2c08: 0x3c020000
    ctx->pc = 0x2b2c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c0c: 0x24422ea8
    ctx->pc = 0x2b2c0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11944));
    // 0x2b2c10: 0x431023
    ctx->pc = 0x2b2c10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c14: 0xafa20418
    ctx->pc = 0x2b2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1048), GPR_U32(ctx, 2));
    // 0x2b2c18: 0x3c020000
    ctx->pc = 0x2b2c18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c1c: 0x24422ec8
    ctx->pc = 0x2b2c1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11976));
    // 0x2b2c20: 0x431023
    ctx->pc = 0x2b2c20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c24: 0xafa2041c
    ctx->pc = 0x2b2c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 2));
    // 0x2b2c28: 0x3c020000
    ctx->pc = 0x2b2c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c2c: 0x24422ef8
    ctx->pc = 0x2b2c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12024));
    // 0x2b2c30: 0x431023
    ctx->pc = 0x2b2c30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c34: 0xafa20420
    ctx->pc = 0x2b2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
    // 0x2b2c38: 0x3c020000
    ctx->pc = 0x2b2c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c3c: 0x24422f18
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12056));
    // 0x2b2c40: 0x431023
    ctx->pc = 0x2b2c40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c44: 0xafa20424
    ctx->pc = 0x2b2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 2));
    // 0x2b2c48: 0x3c020000
    ctx->pc = 0x2b2c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c4c: 0x24422fa0
    ctx->pc = 0x2b2c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12192));
    // 0x2b2c50: 0x431023
    ctx->pc = 0x2b2c50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c54: 0xafa20428
    ctx->pc = 0x2b2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 2));
    // 0x2b2c58: 0x3c020000
    ctx->pc = 0x2b2c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c5c: 0x24422fc0
    ctx->pc = 0x2b2c5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12224));
    // 0x2b2c60: 0x431023
    ctx->pc = 0x2b2c60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c64: 0xafa2042c
    ctx->pc = 0x2b2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 2));
    // 0x2b2c68: 0x3c020000
    ctx->pc = 0x2b2c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c6c: 0x24422fd0
    ctx->pc = 0x2b2c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12240));
    // 0x2b2c70: 0x431023
    ctx->pc = 0x2b2c70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c74: 0xafa20430
    ctx->pc = 0x2b2c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
    // 0x2b2c78: 0x3c020000
    ctx->pc = 0x2b2c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c7c: 0x24422ff0
    ctx->pc = 0x2b2c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12272));
    // 0x2b2c80: 0x431023
    ctx->pc = 0x2b2c80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c84: 0xafa20434
    ctx->pc = 0x2b2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 2));
    // 0x2b2c88: 0x3c020000
    ctx->pc = 0x2b2c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c8c: 0x24423030
    ctx->pc = 0x2b2c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12336));
    // 0x2b2c90: 0x431023
    ctx->pc = 0x2b2c90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2c94: 0xafa20438
    ctx->pc = 0x2b2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 2));
    // 0x2b2c98: 0x3c020000
    ctx->pc = 0x2b2c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2c9c: 0x24423050
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12368));
    // 0x2b2ca0: 0x431023
    ctx->pc = 0x2b2ca0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ca4: 0xafa2043c
    ctx->pc = 0x2b2ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1084), GPR_U32(ctx, 2));
    // 0x2b2ca8: 0x3c020000
    ctx->pc = 0x2b2ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2cac: 0x24423068
    ctx->pc = 0x2b2cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12392));
    // 0x2b2cb0: 0x431023
    ctx->pc = 0x2b2cb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2cb4: 0xafa20440
    ctx->pc = 0x2b2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
    // 0x2b2cb8: 0x3c020000
    ctx->pc = 0x2b2cb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2cbc: 0x24423088
    ctx->pc = 0x2b2cbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12424));
    // 0x2b2cc0: 0x431023
    ctx->pc = 0x2b2cc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2cc4: 0xafa20444
    ctx->pc = 0x2b2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 2));
    // 0x2b2cc8: 0x3c020000
    ctx->pc = 0x2b2cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2ccc: 0x24423098
    ctx->pc = 0x2b2cccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12440));
    // 0x2b2cd0: 0x431023
    ctx->pc = 0x2b2cd0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2cd4: 0xafa20448
    ctx->pc = 0x2b2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 2));
    // 0x2b2cd8: 0x3c020000
    ctx->pc = 0x2b2cd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2cdc: 0x244230b0
    ctx->pc = 0x2b2cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12464));
    // 0x2b2ce0: 0x431023
    ctx->pc = 0x2b2ce0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ce4: 0xafa2044c
    ctx->pc = 0x2b2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 2));
    // 0x2b2ce8: 0x3c020000
    ctx->pc = 0x2b2ce8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2cec: 0x244230d0
    ctx->pc = 0x2b2cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12496));
    // 0x2b2cf0: 0x431023
    ctx->pc = 0x2b2cf0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2cf4: 0xafa20450
    ctx->pc = 0x2b2cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
    // 0x2b2cf8: 0x3c020000
    ctx->pc = 0x2b2cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2cfc: 0x244230f0
    ctx->pc = 0x2b2cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12528));
    // 0x2b2d00: 0x431023
    ctx->pc = 0x2b2d00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d04: 0xafa20454
    ctx->pc = 0x2b2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 2));
    // 0x2b2d08: 0x3c020000
    ctx->pc = 0x2b2d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d0c: 0x24423110
    ctx->pc = 0x2b2d0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12560));
    // 0x2b2d10: 0x431023
    ctx->pc = 0x2b2d10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d14: 0xafa20458
    ctx->pc = 0x2b2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1112), GPR_U32(ctx, 2));
    // 0x2b2d18: 0x3c020000
    ctx->pc = 0x2b2d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d1c: 0x24423160
    ctx->pc = 0x2b2d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12640));
    // 0x2b2d20: 0x431023
    ctx->pc = 0x2b2d20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d24: 0xafa2045c
    ctx->pc = 0x2b2d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 2));
    // 0x2b2d28: 0x3c020000
    ctx->pc = 0x2b2d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d2c: 0x24423180
    ctx->pc = 0x2b2d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12672));
    // 0x2b2d30: 0x431023
    ctx->pc = 0x2b2d30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d34: 0xafa20460
    ctx->pc = 0x2b2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
    // 0x2b2d38: 0x3c020000
    ctx->pc = 0x2b2d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d3c: 0x244231a8
    ctx->pc = 0x2b2d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12712));
    // 0x2b2d40: 0x431023
    ctx->pc = 0x2b2d40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d44: 0xafa20464
    ctx->pc = 0x2b2d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 2));
    // 0x2b2d48: 0x3c020000
    ctx->pc = 0x2b2d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d4c: 0x244231c8
    ctx->pc = 0x2b2d4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12744));
    // 0x2b2d50: 0x431023
    ctx->pc = 0x2b2d50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d54: 0xafa20468
    ctx->pc = 0x2b2d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 2));
    // 0x2b2d58: 0x3c020000
    ctx->pc = 0x2b2d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d5c: 0x24423288
    ctx->pc = 0x2b2d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12936));
    // 0x2b2d60: 0x431023
    ctx->pc = 0x2b2d60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d64: 0xafa2046c
    ctx->pc = 0x2b2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 2));
    // 0x2b2d68: 0x3c020000
    ctx->pc = 0x2b2d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d6c: 0x24423298
    ctx->pc = 0x2b2d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12952));
    // 0x2b2d70: 0x431023
    ctx->pc = 0x2b2d70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d74: 0xafa20470
    ctx->pc = 0x2b2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
    // 0x2b2d78: 0x3c020000
    ctx->pc = 0x2b2d78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d7c: 0x244232b8
    ctx->pc = 0x2b2d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12984));
    // 0x2b2d80: 0x431023
    ctx->pc = 0x2b2d80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d84: 0xafa20474
    ctx->pc = 0x2b2d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 2));
    // 0x2b2d88: 0x3c020000
    ctx->pc = 0x2b2d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d8c: 0x244232e8
    ctx->pc = 0x2b2d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13032));
    // 0x2b2d90: 0x431023
    ctx->pc = 0x2b2d90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2d94: 0xafa20478
    ctx->pc = 0x2b2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 2));
    // 0x2b2d98: 0x3c020000
    ctx->pc = 0x2b2d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2d9c: 0x24423308
    ctx->pc = 0x2b2d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13064));
    // 0x2b2da0: 0x3c030000
    ctx->pc = 0x2b2da0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)0 << 16));
    // 0x2b2da4: 0x24630000
    ctx->pc = 0x2b2da4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 0));
    // 0x2b2da8: 0x431023
    ctx->pc = 0x2b2da8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2dac: 0xafa2047c
    ctx->pc = 0x2b2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1148), GPR_U32(ctx, 2));
    // 0x2b2db0: 0x3c020000
    ctx->pc = 0x2b2db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2db4: 0x24423328
    ctx->pc = 0x2b2db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13096));
    // 0x2b2db8: 0x431023
    ctx->pc = 0x2b2db8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2dbc: 0xafa20480
    ctx->pc = 0x2b2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
    // 0x2b2dc0: 0x3c020000
    ctx->pc = 0x2b2dc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2dc4: 0x24423348
    ctx->pc = 0x2b2dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13128));
    // 0x2b2dc8: 0x431023
    ctx->pc = 0x2b2dc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2dcc: 0xafa20484
    ctx->pc = 0x2b2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 2));
    // 0x2b2dd0: 0x3c020000
    ctx->pc = 0x2b2dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2dd4: 0x24423398
    ctx->pc = 0x2b2dd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13208));
    // 0x2b2dd8: 0x431023
    ctx->pc = 0x2b2dd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ddc: 0xafa20488
    ctx->pc = 0x2b2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 2));
    // 0x2b2de0: 0x3c020000
    ctx->pc = 0x2b2de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2de4: 0x244233b8
    ctx->pc = 0x2b2de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13240));
    // 0x2b2de8: 0x431023
    ctx->pc = 0x2b2de8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2dec: 0xafa2048c
    ctx->pc = 0x2b2decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1164), GPR_U32(ctx, 2));
    // 0x2b2df0: 0x3c020000
    ctx->pc = 0x2b2df0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2df4: 0x24423400
    ctx->pc = 0x2b2df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13312));
    // 0x2b2df8: 0x431023
    ctx->pc = 0x2b2df8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2dfc: 0xafa20490
    ctx->pc = 0x2b2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
    // 0x2b2e00: 0x3c020000
    ctx->pc = 0x2b2e00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e04: 0x24423420
    ctx->pc = 0x2b2e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13344));
    // 0x2b2e08: 0x431023
    ctx->pc = 0x2b2e08u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e0c: 0xafa20494
    ctx->pc = 0x2b2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 2));
    // 0x2b2e10: 0x3c020000
    ctx->pc = 0x2b2e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e14: 0x244234e0
    ctx->pc = 0x2b2e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13536));
    // 0x2b2e18: 0x431023
    ctx->pc = 0x2b2e18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e1c: 0xafa20498
    ctx->pc = 0x2b2e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 2));
    // 0x2b2e20: 0x3c020000
    ctx->pc = 0x2b2e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e24: 0x244234f0
    ctx->pc = 0x2b2e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2b2e28: 0x431023
    ctx->pc = 0x2b2e28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e2c: 0xafa2049c
    ctx->pc = 0x2b2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 2));
    // 0x2b2e30: 0x3c020000
    ctx->pc = 0x2b2e30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e34: 0x24423510
    ctx->pc = 0x2b2e34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13584));
    // 0x2b2e38: 0x431023
    ctx->pc = 0x2b2e38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e3c: 0xafa204a0
    ctx->pc = 0x2b2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
    // 0x2b2e40: 0x3c020000
    ctx->pc = 0x2b2e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e44: 0x24423548
    ctx->pc = 0x2b2e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13640));
    // 0x2b2e48: 0x431023
    ctx->pc = 0x2b2e48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e4c: 0xafa204a4
    ctx->pc = 0x2b2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 2));
    // 0x2b2e50: 0x3c020000
    ctx->pc = 0x2b2e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e54: 0x24423568
    ctx->pc = 0x2b2e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13672));
    // 0x2b2e58: 0x431023
    ctx->pc = 0x2b2e58u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e5c: 0xafa204a8
    ctx->pc = 0x2b2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 2));
    // 0x2b2e60: 0x3c020000
    ctx->pc = 0x2b2e60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e64: 0x24423598
    ctx->pc = 0x2b2e64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13720));
    // 0x2b2e68: 0x431023
    ctx->pc = 0x2b2e68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e6c: 0xafa204ac
    ctx->pc = 0x2b2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 2));
    // 0x2b2e70: 0x3c020000
    ctx->pc = 0x2b2e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e74: 0x244235b8
    ctx->pc = 0x2b2e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13752));
    // 0x2b2e78: 0x431023
    ctx->pc = 0x2b2e78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e7c: 0xafa204b0
    ctx->pc = 0x2b2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
    // 0x2b2e80: 0x3c020000
    ctx->pc = 0x2b2e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e84: 0x244235d8
    ctx->pc = 0x2b2e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13784));
    // 0x2b2e88: 0x431023
    ctx->pc = 0x2b2e88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e8c: 0xafa204b4
    ctx->pc = 0x2b2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 2));
    // 0x2b2e90: 0x3c020000
    ctx->pc = 0x2b2e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2e94: 0x24423610
    ctx->pc = 0x2b2e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13840));
    // 0x2b2e98: 0x431023
    ctx->pc = 0x2b2e98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e9c: 0xafa204b8
    ctx->pc = 0x2b2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 2));
    // 0x2b2ea0: 0x3c020000
    ctx->pc = 0x2b2ea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2ea4: 0x24423630
    ctx->pc = 0x2b2ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13872));
    // 0x2b2ea8: 0x431023
    ctx->pc = 0x2b2ea8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2eac: 0xafa204bc
    ctx->pc = 0x2b2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1212), GPR_U32(ctx, 2));
    // 0x2b2eb0: 0x3c020000
    ctx->pc = 0x2b2eb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2eb4: 0x244236e8
    ctx->pc = 0x2b2eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b2eb8: 0x431023
    ctx->pc = 0x2b2eb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ebc: 0xafa204c0
    ctx->pc = 0x2b2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
    // 0x2b2ec0: 0x3c020000
    ctx->pc = 0x2b2ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2ec4: 0x24423708
    ctx->pc = 0x2b2ec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14088));
    // 0x2b2ec8: 0x431023
    ctx->pc = 0x2b2ec8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2ecc: 0xafa204c4
    ctx->pc = 0x2b2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 2));
    // 0x2b2ed0: 0x3c020000
    ctx->pc = 0x2b2ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2ed4: 0x24423718
    ctx->pc = 0x2b2ed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14104));
    // 0x2b2ed8: 0x431023
    ctx->pc = 0x2b2ed8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2edc: 0xafa204c8
    ctx->pc = 0x2b2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1224), GPR_U32(ctx, 2));
    // 0x2b2ee0: 0x3c020000
    ctx->pc = 0x2b2ee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2ee4: 0x24423738
    ctx->pc = 0x2b2ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14136));
    // 0x2b2ee8: 0x431023
    ctx->pc = 0x2b2ee8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2eec: 0xafa204cc
    ctx->pc = 0x2b2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1228), GPR_U32(ctx, 2));
    // 0x2b2ef0: 0x3c020000
    ctx->pc = 0x2b2ef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b2ef4: 0x24423748
    ctx->pc = 0x2b2ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14152));
    // 0x2b2ef8: 0x431023
    ctx->pc = 0x2b2ef8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2efc: 0xafa204d0
    ctx->pc = 0x2b2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
    // 0x2b2f00: 0x3c020037
    ctx->pc = 0x2b2f00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b2f04: 0x8c441f58
    ctx->pc = 0x2b2f04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8024)));
    // 0x2b2f08: 0x8c830000
    ctx->pc = 0x2b2f08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b2f0c: 0x2402ffff
    ctx->pc = 0x2b2f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2f10: 0x10620010
    ctx->pc = 0x2B2F10u;
    {
        const bool branch_taken_0x2b2f10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B2F14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b2f10) {
            ctx->pc = 0x2B2F54u;
            goto label_2b2f54;
        }
    }
    ctx->pc = 0x2B2F18u;
    // 0x2b2f18: 0x8c820008
    ctx->pc = 0x2b2f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b2f1c: 0x0
    ctx->pc = 0x2b2f1cu;
    // NOP
label_2b2f20:
    // 0x2b2f20: 0x21080
    ctx->pc = 0x2b2f20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2f24: 0x3a21021
    ctx->pc = 0x2b2f24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2f28: 0x8c420000
    ctx->pc = 0x2b2f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2f2c: 0xac820008
    ctx->pc = 0x2b2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b2f30: 0x8c82000c
    ctx->pc = 0x2b2f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b2f34: 0x21080
    ctx->pc = 0x2b2f34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2f38: 0x3a21021
    ctx->pc = 0x2b2f38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2f3c: 0x8c420000
    ctx->pc = 0x2b2f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2f40: 0xac82000c
    ctx->pc = 0x2b2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2b2f44: 0x24840010
    ctx->pc = 0x2b2f44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b2f48: 0x8c820000
    ctx->pc = 0x2b2f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b2f4c: 0x5443fff4
    ctx->pc = 0x2B2F4Cu;
    {
        const bool branch_taken_0x2b2f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b2f4c) {
            ctx->pc = 0x2B2F50u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x2B2F20u;
            goto label_2b2f20;
        }
    }
    ctx->pc = 0x2B2F54u;
label_2b2f54:
    // 0x2b2f54: 0x3c020037
    ctx->pc = 0x2b2f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b2f58: 0x8c441f5c
    ctx->pc = 0x2b2f58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8028)));
    // 0x2b2f5c: 0x8c830000
    ctx->pc = 0x2b2f5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b2f60: 0x2402ffff
    ctx->pc = 0x2b2f60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2f64: 0x10620011
    ctx->pc = 0x2B2F64u;
    {
        const bool branch_taken_0x2b2f64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b2f64) {
            ctx->pc = 0x2B2FACu;
            goto label_2b2fac;
        }
    }
    ctx->pc = 0x2B2F6Cu;
    // 0x2b2f6c: 0x2403ffff
    ctx->pc = 0x2b2f6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2f70: 0x8c820008
    ctx->pc = 0x2b2f70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b2f74: 0x0
    ctx->pc = 0x2b2f74u;
    // NOP
label_2b2f78:
    // 0x2b2f78: 0x21080
    ctx->pc = 0x2b2f78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2f7c: 0x3a21021
    ctx->pc = 0x2b2f7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2f80: 0x8c420000
    ctx->pc = 0x2b2f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2f84: 0xac820008
    ctx->pc = 0x2b2f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b2f88: 0x8c82000c
    ctx->pc = 0x2b2f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b2f8c: 0x21080
    ctx->pc = 0x2b2f8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2f90: 0x3a21021
    ctx->pc = 0x2b2f90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2b2f94: 0x8c420000
    ctx->pc = 0x2b2f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2f98: 0xac82000c
    ctx->pc = 0x2b2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2b2f9c: 0x24840010
    ctx->pc = 0x2b2f9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b2fa0: 0x8c820000
    ctx->pc = 0x2b2fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b2fa4: 0x5443fff4
    ctx->pc = 0x2B2FA4u;
    {
        const bool branch_taken_0x2b2fa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b2fa4) {
            ctx->pc = 0x2B2FA8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x2B2F78u;
            goto label_2b2f78;
        }
    }
    ctx->pc = 0x2B2FACu;
label_2b2fac:
    // 0x2b2fac: 0x3e00008
    ctx->pc = 0x2B2FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2FB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1248));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B2F20u: goto label_2b2f20;
            case 0x2B2F54u: goto label_2b2f54;
            case 0x2B2F78u: goto label_2b2f78;
            case 0x2B2FACu: goto label_2b2fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B2FB4u;
}
