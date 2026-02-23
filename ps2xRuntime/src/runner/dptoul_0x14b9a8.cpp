#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dptoul
// Address: 0x14b9a8 - 0x14ba48
void dptoul_0x14b9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dptoul");


    ctx->pc = 0x14b9a8u;

    // 0x14b9a8: 0x27bdffc0
    ctx->pc = 0x14b9a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b9ac: 0xffa40020
    ctx->pc = 0x14b9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x14b9b0: 0x3a0282d
    ctx->pc = 0x14b9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9b4: 0xffbf0030
    ctx->pc = 0x14b9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14b9b8: 0xc052bd0
    ctx->pc = 0x14B9B8u;
    SET_GPR_U32(ctx, 31, 0x14B9C0u);
    ctx->pc = 0x14B9BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9C0u; }
        else if (ctx->pc != 0x14B9C0u) { ctx->pc = 0x14B9C0u; }
    }
    if (ctx->pc != 0x14B9C0u) { return; }
    ctx->pc = 0x14B9C0u;
    // 0x14b9c0: 0x8fa30000
    ctx->pc = 0x14b9c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b9c4: 0x38620002
    ctx->pc = 0x14b9c4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x14b9c8: 0x10400003
    ctx->pc = 0x14B9C8u;
    {
        const bool branch_taken_0x14b9c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B9CCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x14b9c8) {
            ctx->pc = 0x14B9D8u;
            goto label_14b9d8;
        }
    }
    ctx->pc = 0x14B9D0u;
    // 0x14b9d0: 0x10400003
    ctx->pc = 0x14B9D0u;
    {
        const bool branch_taken_0x14b9d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B9D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x14b9d0) {
            ctx->pc = 0x14B9E0u;
            goto label_14b9e0;
        }
    }
    ctx->pc = 0x14B9D8u;
label_14b9d8:
    // 0x14b9d8: 0x10000018
    ctx->pc = 0x14B9D8u;
    {
        const bool branch_taken_0x14b9d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B9DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b9d8) {
            ctx->pc = 0x14BA3Cu;
            goto label_14ba3c;
        }
    }
    ctx->pc = 0x14B9E0u;
label_14b9e0:
    // 0x14b9e0: 0x14400016
    ctx->pc = 0x14B9E0u;
    {
        const bool branch_taken_0x14b9e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B9E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b9e0) {
            ctx->pc = 0x14BA3Cu;
            goto label_14ba3c;
        }
    }
    ctx->pc = 0x14B9E8u;
    // 0x14b9e8: 0x38620004
    ctx->pc = 0x14b9e8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
    // 0x14b9ec: 0x10400005
    ctx->pc = 0x14B9ECu;
    {
        const bool branch_taken_0x14b9ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B9F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x14b9ec) {
            ctx->pc = 0x14BA04u;
            goto label_14ba04;
        }
    }
    ctx->pc = 0x14B9F4u;
    // 0x14b9f4: 0x480fff8
    ctx->pc = 0x14B9F4u;
    {
        const bool branch_taken_0x14b9f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x14B9F8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
        if (branch_taken_0x14b9f4) {
            ctx->pc = 0x14B9D8u;
            goto label_14b9d8;
        }
    }
    ctx->pc = 0x14B9FCu;
    // 0x14b9fc: 0x54400004
    ctx->pc = 0x14B9FCu;
    {
        const bool branch_taken_0x14b9fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14b9fc) {
            ctx->pc = 0x14BA00u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 61));
            ctx->pc = 0x14BA10u;
            goto label_14ba10;
        }
    }
    ctx->pc = 0x14BA04u;
label_14ba04:
    // 0x14ba04: 0x3c02ffff
    ctx->pc = 0x14ba04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x14ba08: 0x1000000c
    ctx->pc = 0x14BA08u;
    {
        const bool branch_taken_0x14ba08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BA0Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x14ba08) {
            ctx->pc = 0x14BA3Cu;
            goto label_14ba3c;
        }
    }
    ctx->pc = 0x14BA10u;
label_14ba10:
    // 0x14ba10: 0x14400005
    ctx->pc = 0x14BA10u;
    {
        const bool branch_taken_0x14ba10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14BA14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x14ba10) {
            ctx->pc = 0x14BA28u;
            goto label_14ba28;
        }
    }
    ctx->pc = 0x14BA18u;
    // 0x14ba18: 0xdfa20010
    ctx->pc = 0x14ba18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba1c: 0x2483ffc4
    ctx->pc = 0x14ba1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x14ba20: 0x10000004
    ctx->pc = 0x14BA20u;
    {
        const bool branch_taken_0x14ba20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14BA24u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        if (branch_taken_0x14ba20) {
            ctx->pc = 0x14BA34u;
            goto label_14ba34;
        }
    }
    ctx->pc = 0x14BA28u;
label_14ba28:
    // 0x14ba28: 0xdfa20010
    ctx->pc = 0x14ba28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba2c: 0x641823
    ctx->pc = 0x14ba2cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ba30: 0x621016
    ctx->pc = 0x14ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_14ba34:
    // 0x14ba34: 0x2103c
    ctx->pc = 0x14ba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14ba38: 0x2103f
    ctx->pc = 0x14ba38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_14ba3c:
    // 0x14ba3c: 0xdfbf0030
    ctx->pc = 0x14ba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ba40: 0x3e00008
    ctx->pc = 0x14BA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BA44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B9D8u: goto label_14b9d8;
            case 0x14B9E0u: goto label_14b9e0;
            case 0x14BA04u: goto label_14ba04;
            case 0x14BA10u: goto label_14ba10;
            case 0x14BA28u: goto label_14ba28;
            case 0x14BA34u: goto label_14ba34;
            case 0x14BA3Cu: goto label_14ba3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14BA48u;
}
