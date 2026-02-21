#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSoundExists
// Address: 0x221e30 - 0x221ee0
void AudioSoundExists_0x221e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221e30u;

    // 0x221e30: 0x282d
    ctx->pc = 0x221e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e34: 0x3c020032
    ctx->pc = 0x221e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221e38: 0x2449fe38
    ctx->pc = 0x221e38u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294966840));
    // 0x221e3c: 0x24080014
    ctx->pc = 0x221e3cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221e40: 0x3c020032
    ctx->pc = 0x221e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221e44: 0x2447fe3c
    ctx->pc = 0x221e44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294966844));
    // 0x221e48: 0x3c020032
    ctx->pc = 0x221e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221e4c: 0x2446fe48
    ctx->pc = 0x221e4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294966856));
    // 0x221e50: 0xa81818
    ctx->pc = 0x221e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221e54: 0x0
    ctx->pc = 0x221e54u;
    // NOP
label_221e58:
    // 0x221e58: 0x691021
    ctx->pc = 0x221e58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x221e5c: 0x8c420000
    ctx->pc = 0x221e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221e60: 0x14440008
    ctx->pc = 0x221E60u;
    {
        const bool branch_taken_0x221e60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x221E64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x221e60) {
            ctx->pc = 0x221E84u;
            goto label_221e84;
        }
    }
    ctx->pc = 0x221E68u;
    // 0x221e68: 0x671021
    ctx->pc = 0x221e68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x221e6c: 0x8c420000
    ctx->pc = 0x221e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221e70: 0x50400005
    ctx->pc = 0x221E70u;
    {
        const bool branch_taken_0x221e70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x221e70) {
            ctx->pc = 0x221E74u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 12));
            ctx->pc = 0x221E88u;
            goto label_221e88;
        }
    }
    ctx->pc = 0x221E78u;
    // 0x221e78: 0x661021
    ctx->pc = 0x221e78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x221e7c: 0x3e00008
    ctx->pc = 0x221E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221E80u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221E58u: goto label_221e58;
            case 0x221E84u: goto label_221e84;
            case 0x221E88u: goto label_221e88;
            case 0x221EA8u: goto label_221ea8;
            case 0x221ECCu: goto label_221ecc;
            case 0x221ED0u: goto label_221ed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221E84u;
label_221e84:
    // 0x221e84: 0x28a2000c
    ctx->pc = 0x221e84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 12));
label_221e88:
    // 0x221e88: 0x1440fff3
    ctx->pc = 0x221E88u;
    {
        const bool branch_taken_0x221e88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221E8Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221e88) {
            ctx->pc = 0x221E58u;
            goto label_221e58;
        }
    }
    ctx->pc = 0x221E90u;
    // 0x221e90: 0x282d
    ctx->pc = 0x221e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e94: 0x3c020032
    ctx->pc = 0x221e94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221e98: 0x2447ff28
    ctx->pc = 0x221e98u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x221e9c: 0x24060038
    ctx->pc = 0x221e9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 56));
    // 0x221ea0: 0xa61018
    ctx->pc = 0x221ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221ea4: 0x0
    ctx->pc = 0x221ea4u;
    // NOP
label_221ea8:
    // 0x221ea8: 0x471821
    ctx->pc = 0x221ea8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x221eac: 0x8c620000
    ctx->pc = 0x221eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221eb0: 0x14440006
    ctx->pc = 0x221EB0u;
    {
        const bool branch_taken_0x221eb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x221EB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x221eb0) {
            ctx->pc = 0x221ECCu;
            goto label_221ecc;
        }
    }
    ctx->pc = 0x221EB8u;
    // 0x221eb8: 0x8c620004
    ctx->pc = 0x221eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x221ebc: 0x10400004
    ctx->pc = 0x221EBCu;
    {
        const bool branch_taken_0x221ebc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221EC0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
        if (branch_taken_0x221ebc) {
            ctx->pc = 0x221ED0u;
            goto label_221ed0;
        }
    }
    ctx->pc = 0x221EC4u;
    // 0x221ec4: 0x3e00008
    ctx->pc = 0x221EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221EC8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221E58u: goto label_221e58;
            case 0x221E84u: goto label_221e84;
            case 0x221E88u: goto label_221e88;
            case 0x221EA8u: goto label_221ea8;
            case 0x221ECCu: goto label_221ecc;
            case 0x221ED0u: goto label_221ed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221ECCu;
label_221ecc:
    // 0x221ecc: 0x28a20020
    ctx->pc = 0x221eccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
label_221ed0:
    // 0x221ed0: 0x1440fff5
    ctx->pc = 0x221ED0u;
    {
        const bool branch_taken_0x221ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221ED4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221ed0) {
            ctx->pc = 0x221EA8u;
            goto label_221ea8;
        }
    }
    ctx->pc = 0x221ED8u;
    // 0x221ed8: 0x3e00008
    ctx->pc = 0x221ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221EDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221E58u: goto label_221e58;
            case 0x221E84u: goto label_221e84;
            case 0x221E88u: goto label_221e88;
            case 0x221EA8u: goto label_221ea8;
            case 0x221ECCu: goto label_221ecc;
            case 0x221ED0u: goto label_221ed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221EE0u;
}
