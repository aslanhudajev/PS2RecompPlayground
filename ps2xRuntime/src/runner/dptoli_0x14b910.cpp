#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dptoli
// Address: 0x14b910 - 0x14b9a4
void dptoli_0x14b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dptoli");


    ctx->pc = 0x14b910u;

    // 0x14b910: 0x27bdffc0
    ctx->pc = 0x14b910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b914: 0xffa40020
    ctx->pc = 0x14b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x14b918: 0x3a0282d
    ctx->pc = 0x14b918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b91c: 0xffbf0030
    ctx->pc = 0x14b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14b920: 0xc052bd0
    ctx->pc = 0x14B920u;
    SET_GPR_U32(ctx, 31, 0x14B928u);
    ctx->pc = 0x14B924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B928u; }
        else if (ctx->pc != 0x14B928u) { ctx->pc = 0x14B928u; }
    }
    if (ctx->pc != 0x14B928u) { return; }
    ctx->pc = 0x14B928u;
    // 0x14b928: 0x8fa30000
    ctx->pc = 0x14b928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b92c: 0x38620002
    ctx->pc = 0x14b92cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x14b930: 0x10400003
    ctx->pc = 0x14B930u;
    {
        const bool branch_taken_0x14b930 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B934u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x14b930) {
            ctx->pc = 0x14B940u;
            goto label_14b940;
        }
    }
    ctx->pc = 0x14B938u;
    // 0x14b938: 0x10400003
    ctx->pc = 0x14B938u;
    {
        const bool branch_taken_0x14b938 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B93Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x14b938) {
            ctx->pc = 0x14B948u;
            goto label_14b948;
        }
    }
    ctx->pc = 0x14B940u;
label_14b940:
    // 0x14b940: 0x10000015
    ctx->pc = 0x14B940u;
    {
        const bool branch_taken_0x14b940 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B944u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b940) {
            ctx->pc = 0x14B998u;
            goto label_14b998;
        }
    }
    ctx->pc = 0x14B948u;
label_14b948:
    // 0x14b948: 0x10400005
    ctx->pc = 0x14B948u;
    {
        const bool branch_taken_0x14b948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B94Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x14b948) {
            ctx->pc = 0x14B960u;
            goto label_14b960;
        }
    }
    ctx->pc = 0x14B950u;
    // 0x14b950: 0x480fffb
    ctx->pc = 0x14B950u;
    {
        const bool branch_taken_0x14b950 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x14B954u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
        if (branch_taken_0x14b950) {
            ctx->pc = 0x14B940u;
            goto label_14b940;
        }
    }
    ctx->pc = 0x14B958u;
    // 0x14b958: 0x14400007
    ctx->pc = 0x14B958u;
    {
        const bool branch_taken_0x14b958 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B95Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x14b958) {
            ctx->pc = 0x14B978u;
            goto label_14b978;
        }
    }
    ctx->pc = 0x14B960u;
label_14b960:
    // 0x14b960: 0x8fa30004
    ctx->pc = 0x14b960u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b964: 0x3c027fff
    ctx->pc = 0x14b964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x14b968: 0x3442ffff
    ctx->pc = 0x14b968u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x14b96c: 0x3c048000
    ctx->pc = 0x14b96cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x14b970: 0x10000009
    ctx->pc = 0x14B970u;
    {
        const bool branch_taken_0x14b970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B974u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x14b970) {
            ctx->pc = 0x14B998u;
            goto label_14b998;
        }
    }
    ctx->pc = 0x14B978u;
label_14b978:
    // 0x14b978: 0xdfa20010
    ctx->pc = 0x14b978u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b97c: 0x641823
    ctx->pc = 0x14b97cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b980: 0x621016
    ctx->pc = 0x14b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x14b984: 0x8fa40004
    ctx->pc = 0x14b984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b988: 0x2103c
    ctx->pc = 0x14b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14b98c: 0x2103f
    ctx->pc = 0x14b98cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x14b990: 0x21823
    ctx->pc = 0x14b990u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b994: 0x64100b
    ctx->pc = 0x14b994u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
label_14b998:
    // 0x14b998: 0xdfbf0030
    ctx->pc = 0x14b998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b99c: 0x3e00008
    ctx->pc = 0x14B99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B9A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B940u: goto label_14b940;
            case 0x14B948u: goto label_14b948;
            case 0x14B960u: goto label_14b960;
            case 0x14B978u: goto label_14b978;
            case 0x14B998u: goto label_14b998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B9A4u;
}
