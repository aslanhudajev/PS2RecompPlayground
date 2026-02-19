#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFindTID
// Address: 0x221fe0 - 0x222044
void AudioFindTID_0x221fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221fe0u;

    // 0x221fe0: 0x302d
    ctx->pc = 0x221fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fe4: 0x282d
    ctx->pc = 0x221fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fe8: 0x240a0014
    ctx->pc = 0x221fe8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221fec: 0x3c020032
    ctx->pc = 0x221fecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221ff0: 0x2449fe48
    ctx->pc = 0x221ff0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294966856));
    // 0x221ff4: 0x3c020032
    ctx->pc = 0x221ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221ff8: 0x2448fe3c
    ctx->pc = 0x221ff8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294966844));
    // 0x221ffc: 0x24070001
    ctx->pc = 0x221ffcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x222000: 0xaa1818
    ctx->pc = 0x222000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222004: 0x0
    ctx->pc = 0x222004u;
    // NOP
label_222008:
    // 0x222008: 0x691021
    ctx->pc = 0x222008u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x22200c: 0x8c420000
    ctx->pc = 0x22200cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222010: 0x54440007
    ctx->pc = 0x222010u;
    {
        const bool branch_taken_0x222010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x222010) {
            ctx->pc = 0x222014u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x222030u;
            goto label_222030;
        }
    }
    ctx->pc = 0x222018u;
    // 0x222018: 0x681021
    ctx->pc = 0x222018u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22201c: 0x8c420000
    ctx->pc = 0x22201cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222020: 0x10400002
    ctx->pc = 0x222020u;
    {
        const bool branch_taken_0x222020 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222024u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x222020) {
            ctx->pc = 0x22202Cu;
            goto label_22202c;
        }
    }
    ctx->pc = 0x222028u;
    // 0x222028: 0xc23025
    ctx->pc = 0x222028u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_22202c:
    // 0x22202c: 0x24a50001
    ctx->pc = 0x22202cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_222030:
    // 0x222030: 0x28a2000c
    ctx->pc = 0x222030u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 12));
    // 0x222034: 0x1440fff4
    ctx->pc = 0x222034u;
    {
        const bool branch_taken_0x222034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222038u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x222034) {
            ctx->pc = 0x222008u;
            goto label_222008;
        }
    }
    ctx->pc = 0x22203Cu;
    // 0x22203c: 0x3e00008
    ctx->pc = 0x22203Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222040u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222008u: goto label_222008;
            case 0x22202Cu: goto label_22202c;
            case 0x222030u: goto label_222030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222044u;
}
