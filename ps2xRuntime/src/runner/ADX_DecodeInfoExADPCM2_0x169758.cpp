#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeInfoExADPCM2
// Address: 0x169758 - 0x1697d8
void ADX_DecodeInfoExADPCM2_0x169758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeInfoExADPCM2");


    ctx->pc = 0x169758u;

    // 0x169758: 0x28a50012
    ctx->pc = 0x169758u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 18));
    // 0x16975c: 0x10a00003
    ctx->pc = 0x16975Cu;
    {
        const bool branch_taken_0x16975c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x169760u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16975c) {
            ctx->pc = 0x16976Cu;
            goto label_16976c;
        }
    }
    ctx->pc = 0x169764u;
label_169764:
    // 0x169764: 0x3e00008
    ctx->pc = 0x169764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169768u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169764u: goto label_169764;
            case 0x16976Cu: goto label_16976c;
            case 0x169794u: goto label_169794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16976Cu;
label_16976c:
    // 0x16976c: 0x94e20000
    ctx->pc = 0x16976cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x169770: 0x34048000
    ctx->pc = 0x169770u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x169774: 0x21a00
    ctx->pc = 0x169774u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169778: 0x21202
    ctx->pc = 0x169778u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x16977c: 0x431025
    ctx->pc = 0x16977cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169780: 0x3042ffff
    ctx->pc = 0x169780u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x169784: 0x10440003
    ctx->pc = 0x169784u;
    {
        const bool branch_taken_0x169784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x169788u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x169784) {
            ctx->pc = 0x169794u;
            goto label_169794;
        }
    }
    ctx->pc = 0x16978Cu;
    // 0x16978c: 0x3e00008
    ctx->pc = 0x16978Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169790u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169764u: goto label_169764;
            case 0x16976Cu: goto label_16976c;
            case 0x169794u: goto label_169794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169794u;
label_169794:
    // 0x169794: 0x94e20002
    ctx->pc = 0x169794u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x169798: 0x21a00
    ctx->pc = 0x169798u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x16979c: 0x21202
    ctx->pc = 0x16979cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1697a0: 0x651824
    ctx->pc = 0x1697a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1697a4: 0x431025
    ctx->pc = 0x1697a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1697a8: 0x21400
    ctx->pc = 0x1697a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1697ac: 0x21403
    ctx->pc = 0x1697acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1697b0: 0x2842000e
    ctx->pc = 0x1697b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 14));
    // 0x1697b4: 0x1440ffeb
    ctx->pc = 0x1697B4u;
    {
        const bool branch_taken_0x1697b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1697B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1697b4) {
            ctx->pc = 0x169764u;
            goto label_169764;
        }
    }
    ctx->pc = 0x1697BCu;
    // 0x1697bc: 0x94e40010
    ctx->pc = 0x1697bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1697c0: 0x41a00
    ctx->pc = 0x1697c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1697c4: 0x42202
    ctx->pc = 0x1697c4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 8));
    // 0x1697c8: 0x651824
    ctx->pc = 0x1697c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1697cc: 0x832025
    ctx->pc = 0x1697ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1697d0: 0x3e00008
    ctx->pc = 0x1697D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1697D4u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169764u: goto label_169764;
            case 0x16976Cu: goto label_16976c;
            case 0x169794u: goto label_169794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1697D8u;
}
