#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dptoul
// Address: 0x2f9488 - 0x2f9528
void dptoul_0x2f9488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9488u;

    // 0x2f9488: 0x27bdffc0
    ctx->pc = 0x2f9488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f948c: 0xffa40020
    ctx->pc = 0x2f948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2f9490: 0x3a0282d
    ctx->pc = 0x2f9490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9494: 0xffbf0030
    ctx->pc = 0x2f9494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f9498: 0xc0be288
    ctx->pc = 0x2F9498u;
    SET_GPR_U32(ctx, 31, 0x2F94A0u);
    ctx->pc = 0x2F949Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F94A0u; }
    }
    if (ctx->pc != 0x2F94A0u) { return; }
    ctx->pc = 0x2F94A0u;
    // 0x2f94a0: 0x8fa30000
    ctx->pc = 0x2f94a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f94a4: 0x38620002
    ctx->pc = 0x2f94a4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x2f94a8: 0x10400003
    ctx->pc = 0x2F94A8u;
    {
        const bool branch_taken_0x2f94a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F94ACu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2f94a8) {
            ctx->pc = 0x2F94B8u;
            goto label_2f94b8;
        }
    }
    ctx->pc = 0x2F94B0u;
    // 0x2f94b0: 0x10400003
    ctx->pc = 0x2F94B0u;
    {
        const bool branch_taken_0x2f94b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F94B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x2f94b0) {
            ctx->pc = 0x2F94C0u;
            goto label_2f94c0;
        }
    }
    ctx->pc = 0x2F94B8u;
label_2f94b8:
    // 0x2f94b8: 0x10000018
    ctx->pc = 0x2F94B8u;
    {
        const bool branch_taken_0x2f94b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F94BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f94b8) {
            ctx->pc = 0x2F951Cu;
            goto label_2f951c;
        }
    }
    ctx->pc = 0x2F94C0u;
label_2f94c0:
    // 0x2f94c0: 0x14400016
    ctx->pc = 0x2F94C0u;
    {
        const bool branch_taken_0x2f94c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F94C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f94c0) {
            ctx->pc = 0x2F951Cu;
            goto label_2f951c;
        }
    }
    ctx->pc = 0x2F94C8u;
    // 0x2f94c8: 0x38620004
    ctx->pc = 0x2f94c8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
    // 0x2f94cc: 0x10400005
    ctx->pc = 0x2F94CCu;
    {
        const bool branch_taken_0x2f94cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F94D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x2f94cc) {
            ctx->pc = 0x2F94E4u;
            goto label_2f94e4;
        }
    }
    ctx->pc = 0x2F94D4u;
    // 0x2f94d4: 0x480fff8
    ctx->pc = 0x2F94D4u;
    {
        const bool branch_taken_0x2f94d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F94D8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
        if (branch_taken_0x2f94d4) {
            ctx->pc = 0x2F94B8u;
            goto label_2f94b8;
        }
    }
    ctx->pc = 0x2F94DCu;
    // 0x2f94dc: 0x54400004
    ctx->pc = 0x2F94DCu;
    {
        const bool branch_taken_0x2f94dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f94dc) {
            ctx->pc = 0x2F94E0u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 61));
            ctx->pc = 0x2F94F0u;
            goto label_2f94f0;
        }
    }
    ctx->pc = 0x2F94E4u;
label_2f94e4:
    // 0x2f94e4: 0x3c02ffff
    ctx->pc = 0x2f94e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2f94e8: 0x1000000c
    ctx->pc = 0x2F94E8u;
    {
        const bool branch_taken_0x2f94e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F94ECu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x2f94e8) {
            ctx->pc = 0x2F951Cu;
            goto label_2f951c;
        }
    }
    ctx->pc = 0x2F94F0u;
label_2f94f0:
    // 0x2f94f0: 0x14400005
    ctx->pc = 0x2F94F0u;
    {
        const bool branch_taken_0x2f94f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F94F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x2f94f0) {
            ctx->pc = 0x2F9508u;
            goto label_2f9508;
        }
    }
    ctx->pc = 0x2F94F8u;
    // 0x2f94f8: 0xdfa20010
    ctx->pc = 0x2f94f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f94fc: 0x2483ffc4
    ctx->pc = 0x2f94fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x2f9500: 0x10000004
    ctx->pc = 0x2F9500u;
    {
        const bool branch_taken_0x2f9500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9504u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        if (branch_taken_0x2f9500) {
            ctx->pc = 0x2F9514u;
            goto label_2f9514;
        }
    }
    ctx->pc = 0x2F9508u;
label_2f9508:
    // 0x2f9508: 0xdfa20010
    ctx->pc = 0x2f9508u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f950c: 0x641823
    ctx->pc = 0x2f950cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f9510: 0x621016
    ctx->pc = 0x2f9510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_2f9514:
    // 0x2f9514: 0x2103c
    ctx->pc = 0x2f9514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9518: 0x2103f
    ctx->pc = 0x2f9518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f951c:
    // 0x2f951c: 0xdfbf0030
    ctx->pc = 0x2f951cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9520: 0x3e00008
    ctx->pc = 0x2F9520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9524u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F94B8u: goto label_2f94b8;
            case 0x2F94C0u: goto label_2f94c0;
            case 0x2F94E4u: goto label_2f94e4;
            case 0x2F94F0u: goto label_2f94f0;
            case 0x2F9508u: goto label_2f9508;
            case 0x2F9514u: goto label_2f9514;
            case 0x2F951Cu: goto label_2f951c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9528u;
}
