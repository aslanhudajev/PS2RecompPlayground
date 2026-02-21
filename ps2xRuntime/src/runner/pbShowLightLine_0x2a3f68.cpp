#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbShowLightLine
// Address: 0x2a3f68 - 0x2a402c
void pbShowLightLine_0x2a3f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3f68u;

    // 0x2a3f68: 0x27bdff00
    ctx->pc = 0x2a3f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2a3f6c: 0xffbf00f0
    ctx->pc = 0x2a3f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2a3f70: 0xffb300e0
    ctx->pc = 0x2a3f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x2a3f74: 0xffb200d0
    ctx->pc = 0x2a3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2a3f78: 0xffb100c0
    ctx->pc = 0x2a3f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2a3f7c: 0xffb000b0
    ctx->pc = 0x2a3f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2a3f80: 0xa0982d
    ctx->pc = 0x2a3f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f84: 0xc0802d
    ctx->pc = 0x2a3f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f88: 0x3c020036
    ctx->pc = 0x2a3f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3f8c: 0x8c52dee0
    ctx->pc = 0x2a3f8cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a3f90: 0x8c820070
    ctx->pc = 0x2a3f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2a3f94: 0x3a0202d
    ctx->pc = 0x2a3f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f98: 0x8c45001c
    ctx->pc = 0x2a3f98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2a3f9c: 0x2406ffff
    ctx->pc = 0x2a3f9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3fa0: 0x2407ffff
    ctx->pc = 0x2a3fa0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3fa4: 0x402d
    ctx->pc = 0x2a3fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fa8: 0xc0aebee
    ctx->pc = 0x2A3FA8u;
    SET_GPR_U32(ctx, 31, 0x2A3FB0u);
    ctx->pc = 0x2A3FACu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BAFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuGetVertData_0x2bafb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FB0u; }
    }
    if (ctx->pc != 0x2A3FB0u) { return; }
    ctx->pc = 0x2A3FB0u;
    // 0x2a3fb0: 0x14400018
    ctx->pc = 0x2A3FB0u;
    {
        const bool branch_taken_0x2a3fb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A3FB4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x2a3fb0) {
            ctx->pc = 0x2A4014u;
            goto label_2a4014;
        }
    }
    ctx->pc = 0x2A3FB8u;
    // 0x2a3fb8: 0x27b10090
    ctx->pc = 0x2a3fb8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a3fbc: 0x8e460004
    ctx->pc = 0x2a3fbcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a3fc0: 0x220202d
    ctx->pc = 0x2a3fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fc4: 0x200282d
    ctx->pc = 0x2a3fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fc8: 0xc0b626d
    ctx->pc = 0x2A3FC8u;
    SET_GPR_U32(ctx, 31, 0x2A3FD0u);
    ctx->pc = 0x2A3FCCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FD0u; }
    }
    if (ctx->pc != 0x2A3FD0u) { return; }
    ctx->pc = 0x2A3FD0u;
    // 0x2a3fd0: 0x27b000a0
    ctx->pc = 0x2a3fd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a3fd4: 0x200202d
    ctx->pc = 0x2a3fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fd8: 0x3a0282d
    ctx->pc = 0x2a3fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fdc: 0xc0b626d
    ctx->pc = 0x2A3FDCu;
    SET_GPR_U32(ctx, 31, 0x2A3FE4u);
    ctx->pc = 0x2A3FE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FE4u; }
    }
    if (ctx->pc != 0x2A3FE4u) { return; }
    ctx->pc = 0x2A3FE4u;
    // 0x2a3fe4: 0x8e460004
    ctx->pc = 0x2a3fe4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a3fe8: 0x200202d
    ctx->pc = 0x2a3fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fec: 0x200282d
    ctx->pc = 0x2a3fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ff0: 0xc0b626d
    ctx->pc = 0x2A3FF0u;
    SET_GPR_U32(ctx, 31, 0x2A3FF8u);
    ctx->pc = 0x2A3FF4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FF8u; }
    }
    if (ctx->pc != 0x2A3FF8u) { return; }
    ctx->pc = 0x2A3FF8u;
    // 0x2a3ff8: 0x220202d
    ctx->pc = 0x2a3ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ffc: 0x200282d
    ctx->pc = 0x2a3ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4000: 0x3c0600ff
    ctx->pc = 0x2a4000u;
    SET_GPR_U32(ctx, 6, ((uint32_t)255 << 16));
    // 0x2a4004: 0x34c6ff00
    ctx->pc = 0x2a4004u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65280));
    // 0x2a4008: 0xc0a8ec4
    ctx->pc = 0x2A4008u;
    SET_GPR_U32(ctx, 31, 0x2A4010u);
    ctx->pc = 0x2A400Cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 65535));
    ctx->pc = 0x2A3B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLineDraw_0x2a3b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4010u; }
    }
    if (ctx->pc != 0x2A4010u) { return; }
    ctx->pc = 0x2A4010u;
    // 0x2a4010: 0xdfbf00f0
    ctx->pc = 0x2a4010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2a4014:
    // 0x2a4014: 0xdfb300e0
    ctx->pc = 0x2a4014u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a4018: 0xdfb200d0
    ctx->pc = 0x2a4018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a401c: 0xdfb100c0
    ctx->pc = 0x2a401cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a4020: 0xdfb000b0
    ctx->pc = 0x2a4020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a4024: 0x3e00008
    ctx->pc = 0x2A4024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4028u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4014u: goto label_2a4014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A402Cu;
}
