#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_1000_0
// Address: 0x180028 - 0x1800ac
void IdctColumn_1000_0_0x180028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_1000_0");


    ctx->pc = 0x180028u;

    // 0x180028: 0x84820000
    ctx->pc = 0x180028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18002c: 0x3c030020
    ctx->pc = 0x18002cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
    // 0x180030: 0x24050007
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x180034: 0x3c060020
    ctx->pc = 0x180034u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32 << 16));
    // 0x180038: 0x21400
    ctx->pc = 0x180038u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x18003c: 0x431021
    ctx->pc = 0x18003cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180040: 0x21583
    ctx->pc = 0x180040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x180044: 0xa4820070
    ctx->pc = 0x180044u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x180048: 0xa4820000
    ctx->pc = 0x180048u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18004c: 0xa4820010
    ctx->pc = 0x18004cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x180050: 0xa4820020
    ctx->pc = 0x180050u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x180054: 0xa4820030
    ctx->pc = 0x180054u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x180058: 0xa4820040
    ctx->pc = 0x180058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x18005c: 0xa4820050
    ctx->pc = 0x18005cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x180060: 0xa4820060
    ctx->pc = 0x180060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x180064: 0x0
    ctx->pc = 0x180064u;
    // NOP
label_180068:
    // 0x180068: 0x24840002
    ctx->pc = 0x180068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x18006c: 0x24a5ffff
    ctx->pc = 0x18006cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x180070: 0x84820000
    ctx->pc = 0x180070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180074: 0x21400
    ctx->pc = 0x180074u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x180078: 0x461021
    ctx->pc = 0x180078u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18007c: 0x21583
    ctx->pc = 0x18007cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x180080: 0xa4820070
    ctx->pc = 0x180080u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x180084: 0xa4820000
    ctx->pc = 0x180084u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x180088: 0xa4820010
    ctx->pc = 0x180088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x18008c: 0xa4820020
    ctx->pc = 0x18008cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x180090: 0xa4820030
    ctx->pc = 0x180090u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x180094: 0xa4820040
    ctx->pc = 0x180094u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x180098: 0xa4820050
    ctx->pc = 0x180098u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x18009c: 0x14a0fff2
    ctx->pc = 0x18009Cu;
    {
        const bool branch_taken_0x18009c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1800A0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x18009c) {
            ctx->pc = 0x180068u;
            goto label_180068;
        }
    }
    ctx->pc = 0x1800A4u;
    // 0x1800a4: 0x3e00008
    ctx->pc = 0x1800A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180068u: goto label_180068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1800ACu;
}
