#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSendObjTexturesSub
// Address: 0x2bd9c8 - 0x2bda74
void pbSendObjTexturesSub_0x2bd9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bd9c8u;

    // 0x2bd9c8: 0x27bdffb0
    ctx->pc = 0x2bd9c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bd9cc: 0xffbf0040
    ctx->pc = 0x2bd9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bd9d0: 0xffb30030
    ctx->pc = 0x2bd9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bd9d4: 0xffb20020
    ctx->pc = 0x2bd9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bd9d8: 0xffb10010
    ctx->pc = 0x2bd9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bd9dc: 0xffb00000
    ctx->pc = 0x2bd9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bd9e0: 0x80302d
    ctx->pc = 0x2bd9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9e4: 0x3c020036
    ctx->pc = 0x2bd9e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bd9e8: 0x8c42dee0
    ctx->pc = 0x2bd9e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bd9ec: 0x8c420038
    ctx->pc = 0x2bd9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2bd9f0: 0x61900
    ctx->pc = 0x2bd9f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x2bd9f4: 0x431021
    ctx->pc = 0x2bd9f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bd9f8: 0x8c420010
    ctx->pc = 0x2bd9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bd9fc: 0x14400016
    ctx->pc = 0x2BD9FCu;
    {
        const bool branch_taken_0x2bd9fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BDA00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bd9fc) {
            ctx->pc = 0x2BDA58u;
            goto label_2bda58;
        }
    }
    ctx->pc = 0x2BDA04u;
    // 0x2bda04: 0x8ca2000c
    ctx->pc = 0x2bda04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bda08: 0x54400005
    ctx->pc = 0x2BDA08u;
    {
        const bool branch_taken_0x2bda08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bda08) {
            ctx->pc = 0x2BDA0Cu;
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
            ctx->pc = 0x2BDA20u;
            goto label_2bda20;
        }
    }
    ctx->pc = 0x2BDA10u;
    // 0x2bda10: 0x10000011
    ctx->pc = 0x2BDA10u;
    {
        const bool branch_taken_0x2bda10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDA14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bda10) {
            ctx->pc = 0x2BDA58u;
            goto label_2bda58;
        }
    }
    ctx->pc = 0x2BDA18u;
label_2bda18:
    // 0x2bda18: 0x1000000f
    ctx->pc = 0x2BDA18u;
    {
        const bool branch_taken_0x2bda18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDA1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bda18) {
            ctx->pc = 0x2BDA58u;
            goto label_2bda58;
        }
    }
    ctx->pc = 0x2BDA20u;
label_2bda20:
    // 0x2bda20: 0x8cb10018
    ctx->pc = 0x2bda20u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2bda24: 0x8cb0000c
    ctx->pc = 0x2bda24u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bda28: 0x69400
    ctx->pc = 0x2bda28u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 6), 16));
    // 0x2bda2c: 0x2413ffff
    ctx->pc = 0x2bda2cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bda30:
    // 0x2bda30: 0x264102a
    ctx->pc = 0x2bda30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 4)));
    // 0x2bda34: 0x2200a
    ctx->pc = 0x2bda34u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
    // 0x2bda38: 0xc0ab6e2
    ctx->pc = 0x2BDA38u;
    SET_GPR_U32(ctx, 31, 0x2BDA40u);
    ctx->pc = 0x2BDA3Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA40u; }
    }
    if (ctx->pc != 0x2BDA40u) { return; }
    ctx->pc = 0x2BDA40u;
    // 0x2bda40: 0x1040fff5
    ctx->pc = 0x2BDA40u;
    {
        const bool branch_taken_0x2bda40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDA44u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x2bda40) {
            ctx->pc = 0x2BDA18u;
            goto label_2bda18;
        }
    }
    ctx->pc = 0x2BDA48u;
    // 0x2bda48: 0x96240002
    ctx->pc = 0x2bda48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2bda4c: 0x1600fff8
    ctx->pc = 0x2BDA4Cu;
    {
        const bool branch_taken_0x2bda4c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BDA50u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x2bda4c) {
            ctx->pc = 0x2BDA30u;
            goto label_2bda30;
        }
    }
    ctx->pc = 0x2BDA54u;
    // 0x2bda54: 0x24020001
    ctx->pc = 0x2bda54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2bda58:
    // 0x2bda58: 0xdfbf0040
    ctx->pc = 0x2bda58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bda5c: 0xdfb30030
    ctx->pc = 0x2bda5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bda60: 0xdfb20020
    ctx->pc = 0x2bda60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bda64: 0xdfb10010
    ctx->pc = 0x2bda64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bda68: 0xdfb00000
    ctx->pc = 0x2bda68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bda6c: 0x3e00008
    ctx->pc = 0x2BDA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDA70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BDA18u: goto label_2bda18;
            case 0x2BDA20u: goto label_2bda20;
            case 0x2BDA30u: goto label_2bda30;
            case 0x2BDA58u: goto label_2bda58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BDA74u;
}
