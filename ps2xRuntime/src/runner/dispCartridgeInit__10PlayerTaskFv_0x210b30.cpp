#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispCartridgeInit__10PlayerTaskFv
// Address: 0x210b30 - 0x210b80
void dispCartridgeInit__10PlayerTaskFv_0x210b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispCartridgeInit__10PlayerTaskFv");


    ctx->pc = 0x210b30u;

    // 0x210b30: 0xac8024e0
    ctx->pc = 0x210b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 9440), GPR_U32(ctx, 0));
    // 0x210b34: 0x248524e4
    ctx->pc = 0x210b34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 9444));
    // 0x210b38: 0x70002628
    ctx->pc = 0x210b38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_210b3c:
    // 0x210b3c: 0xaca00000
    ctx->pc = 0x210b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x210b40: 0xaca00004
    ctx->pc = 0x210b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x210b44: 0xaca00008
    ctx->pc = 0x210b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x210b48: 0xaca0000c
    ctx->pc = 0x210b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x210b4c: 0xaca00010
    ctx->pc = 0x210b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x210b50: 0xaca00014
    ctx->pc = 0x210b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x210b54: 0xaca00018
    ctx->pc = 0x210b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x210b58: 0xaca00024
    ctx->pc = 0x210b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x210b5c: 0xaca00028
    ctx->pc = 0x210b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x210b60: 0xaca0001c
    ctx->pc = 0x210b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x210b64: 0x24840001
    ctx->pc = 0x210b64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x210b68: 0xaca00020
    ctx->pc = 0x210b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x210b6c: 0x28830012
    ctx->pc = 0x210b6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 18));
    // 0x210b70: 0x1460fff2
    ctx->pc = 0x210B70u;
    {
        const bool branch_taken_0x210b70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x210B74u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 44));
        if (branch_taken_0x210b70) {
            ctx->pc = 0x210B3Cu;
            goto label_210b3c;
        }
    }
    ctx->pc = 0x210B78u;
    // 0x210b78: 0x3e00008
    ctx->pc = 0x210B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210B3Cu: goto label_210b3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210B80u;
}
