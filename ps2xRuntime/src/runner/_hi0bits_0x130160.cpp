#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _hi0bits
// Address: 0x130160 - 0x1301e4
void _hi0bits_0x130160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130160u;

    // 0x130160: 0x3c02ffff
    ctx->pc = 0x130160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x130164: 0x821024
    ctx->pc = 0x130164u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x130168: 0x14400003
    ctx->pc = 0x130168u;
    {
        const bool branch_taken_0x130168 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13016Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130168) {
            ctx->pc = 0x130178u;
            goto label_130178;
        }
    }
    ctx->pc = 0x130170u;
    // 0x130170: 0x24050010
    ctx->pc = 0x130170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x130174: 0x42400
    ctx->pc = 0x130174u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
label_130178:
    // 0x130178: 0x3c02ff00
    ctx->pc = 0x130178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x13017c: 0x821024
    ctx->pc = 0x13017cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x130180: 0x14400003
    ctx->pc = 0x130180u;
    {
        const bool branch_taken_0x130180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130180) {
            ctx->pc = 0x130190u;
            goto label_130190;
        }
    }
    ctx->pc = 0x130188u;
    // 0x130188: 0x24a50008
    ctx->pc = 0x130188u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x13018c: 0x42200
    ctx->pc = 0x13018cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
label_130190:
    // 0x130190: 0x3c02f000
    ctx->pc = 0x130190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61440 << 16));
    // 0x130194: 0x821024
    ctx->pc = 0x130194u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x130198: 0x14400003
    ctx->pc = 0x130198u;
    {
        const bool branch_taken_0x130198 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130198) {
            ctx->pc = 0x1301A8u;
            goto label_1301a8;
        }
    }
    ctx->pc = 0x1301A0u;
    // 0x1301a0: 0x24a50004
    ctx->pc = 0x1301a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1301a4: 0x42100
    ctx->pc = 0x1301a4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
label_1301a8:
    // 0x1301a8: 0x3c02c000
    ctx->pc = 0x1301a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x1301ac: 0x821024
    ctx->pc = 0x1301acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1301b0: 0x14400003
    ctx->pc = 0x1301B0u;
    {
        const bool branch_taken_0x1301b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1301b0) {
            ctx->pc = 0x1301C0u;
            goto label_1301c0;
        }
    }
    ctx->pc = 0x1301B8u;
    // 0x1301b8: 0x24a50002
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x1301bc: 0x42080
    ctx->pc = 0x1301bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_1301c0:
    // 0x1301c0: 0x4800005
    ctx->pc = 0x1301C0u;
    {
        const bool branch_taken_0x1301c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1301C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
        if (branch_taken_0x1301c0) {
            ctx->pc = 0x1301D8u;
            goto label_1301d8;
        }
    }
    ctx->pc = 0x1301C8u;
    // 0x1301c8: 0x24a50001
    ctx->pc = 0x1301c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1301cc: 0x831824
    ctx->pc = 0x1301ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1301d0: 0x10600002
    ctx->pc = 0x1301D0u;
    {
        const bool branch_taken_0x1301d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1301D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1301d0) {
            ctx->pc = 0x1301DCu;
            goto label_1301dc;
        }
    }
    ctx->pc = 0x1301D8u;
label_1301d8:
    // 0x1301d8: 0xa0102d
    ctx->pc = 0x1301d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1301dc:
    // 0x1301dc: 0x3e00008
    ctx->pc = 0x1301DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130178u: goto label_130178;
            case 0x130190u: goto label_130190;
            case 0x1301A8u: goto label_1301a8;
            case 0x1301C0u: goto label_1301c0;
            case 0x1301D8u: goto label_1301d8;
            case 0x1301DCu: goto label_1301dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1301E4u;
}
