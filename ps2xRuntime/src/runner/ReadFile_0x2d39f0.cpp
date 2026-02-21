#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReadFile
// Address: 0x2d39f0 - 0x2d3a58
void ReadFile_0x2d39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d39f0u;

    // 0x2d39f0: 0x27bdffd0
    ctx->pc = 0x2d39f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d39f4: 0xffbf0020
    ctx->pc = 0x2d39f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d39f8: 0xffb10010
    ctx->pc = 0x2d39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d39fc: 0xffb00000
    ctx->pc = 0x2d39fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3a00: 0xc0b4e12
    ctx->pc = 0x2D3A00u;
    SET_GPR_U32(ctx, 31, 0x2D3A08u);
    ctx->pc = 0x2D3A04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3848u;
    {
        const uint32_t __entryPc = ctx->pc;
        xReadFileSection_0x2d3848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A08u; }
    }
    if (ctx->pc != 0x2D3A08u) { return; }
    ctx->pc = 0x2D3A08u;
    // 0x2d3a08: 0x1a00000d
    ctx->pc = 0x2D3A08u;
    {
        const bool branch_taken_0x2d3a08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2D3A0Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a08) {
            ctx->pc = 0x2D3A40u;
            goto label_2d3a40;
        }
    }
    ctx->pc = 0x2D3A10u;
    // 0x2d3a10: 0x211102a
    ctx->pc = 0x2d3a10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x2d3a14: 0x1040000a
    ctx->pc = 0x2D3A14u;
    {
        const bool branch_taken_0x2d3a14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3A18u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2d3a14) {
            ctx->pc = 0x2D3A40u;
            goto label_2d3a40;
        }
    }
    ctx->pc = 0x2D3A1Cu;
    // 0x2d3a1c: 0x24020080
    ctx->pc = 0x2d3a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d3a20: 0xac628008
    ctx->pc = 0x2d3a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294934536), GPR_U32(ctx, 2));
    // 0x2d3a24: 0x3c04003b
    ctx->pc = 0x2d3a24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3a28: 0x24847998
    ctx->pc = 0x2d3a28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31128));
    // 0x2d3a2c: 0x3c05003d
    ctx->pc = 0x2d3a2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)61 << 16));
    // 0x2d3a30: 0x24a52e50
    ctx->pc = 0x2d3a30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 11856));
    // 0x2d3a34: 0x220302d
    ctx->pc = 0x2d3a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a38: 0xc0b4976
    ctx->pc = 0x2D3A38u;
    SET_GPR_U32(ctx, 31, 0x2D3A40u);
    ctx->pc = 0x2D3A3Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A40u; }
    }
    if (ctx->pc != 0x2D3A40u) { return; }
    ctx->pc = 0x2D3A40u;
label_2d3a40:
    // 0x2d3a40: 0x220102d
    ctx->pc = 0x2d3a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a44: 0xdfbf0020
    ctx->pc = 0x2d3a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3a48: 0xdfb10010
    ctx->pc = 0x2d3a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3a4c: 0xdfb00000
    ctx->pc = 0x2d3a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3a50: 0x3e00008
    ctx->pc = 0x2D3A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3A54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3A40u: goto label_2d3a40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3A58u;
}
