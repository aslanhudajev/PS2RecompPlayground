#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBCreateNode
// Address: 0x2cf9f8 - 0x2cfa78
void MBCreateNode_0x2cf9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf9f8u;

    // 0x2cf9f8: 0x27bdffe0
    ctx->pc = 0x2cf9f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf9fc: 0xffbf0010
    ctx->pc = 0x2cf9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cfa00: 0xffb00000
    ctx->pc = 0x2cfa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfa04: 0x3c03003a
    ctx->pc = 0x2cfa04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cfa08: 0x8c6214b0
    ctx->pc = 0x2cfa08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 5296)));
    // 0x2cfa0c: 0x10400004
    ctx->pc = 0x2CFA0Cu;
    {
        const bool branch_taken_0x2cfa0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFA10u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa0c) {
            ctx->pc = 0x2CFA20u;
            goto label_2cfa20;
        }
    }
    ctx->pc = 0x2CFA14u;
    // 0x2cfa14: 0x8e02007c
    ctx->pc = 0x2cfa14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2cfa18: 0x10000012
    ctx->pc = 0x2CFA18u;
    {
        const bool branch_taken_0x2cfa18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFA1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 5296), GPR_U32(ctx, 2));
        if (branch_taken_0x2cfa18) {
            ctx->pc = 0x2CFA64u;
            goto label_2cfa64;
        }
    }
    ctx->pc = 0x2CFA20u;
label_2cfa20:
    // 0x2cfa20: 0xc0b4f52
    ctx->pc = 0x2CFA20u;
    SET_GPR_U32(ctx, 31, 0x2CFA28u);
    ctx->pc = 0x2CFA24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA28u; }
    }
    if (ctx->pc != 0x2CFA28u) { return; }
    ctx->pc = 0x2CFA28u;
    // 0x2cfa28: 0x40802d
    ctx->pc = 0x2cfa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa2c: 0x3c03003a
    ctx->pc = 0x2cfa2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cfa30: 0x94620c90
    ctx->pc = 0x2cfa30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3216)));
    // 0x2cfa34: 0xa6020050
    ctx->pc = 0x2cfa34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfa38: 0x8c620c90
    ctx->pc = 0x2cfa38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3216)));
    // 0x2cfa3c: 0x24420001
    ctx->pc = 0x2cfa3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cfa40: 0xac620c90
    ctx->pc = 0x2cfa40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3216), GPR_U32(ctx, 2));
    // 0x2cfa44: 0x28423000
    ctx->pc = 0x2cfa44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 12288));
    // 0x2cfa48: 0x14400007
    ctx->pc = 0x2CFA48u;
    {
        const bool branch_taken_0x2cfa48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CFA4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa48) {
            ctx->pc = 0x2CFA68u;
            goto label_2cfa68;
        }
    }
    ctx->pc = 0x2CFA50u;
    // 0x2cfa50: 0x3c04003b
    ctx->pc = 0x2cfa50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2cfa54: 0x24847728
    ctx->pc = 0x2cfa54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30504));
    // 0x2cfa58: 0x3c050080
    ctx->pc = 0x2cfa58u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x2cfa5c: 0xc0b49a6
    ctx->pc = 0x2CFA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CFA64u);
    ctx->pc = 0x2CFA60u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16384));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFA64u; }
    }
    if (ctx->pc != 0x2CFA64u) { return; }
    ctx->pc = 0x2CFA64u;
label_2cfa64:
    // 0x2cfa64: 0x200102d
    ctx->pc = 0x2cfa64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa68:
    // 0x2cfa68: 0xdfbf0010
    ctx->pc = 0x2cfa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfa6c: 0xdfb00000
    ctx->pc = 0x2cfa6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfa70: 0x3e00008
    ctx->pc = 0x2CFA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFA74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CFA20u: goto label_2cfa20;
            case 0x2CFA64u: goto label_2cfa64;
            case 0x2CFA68u: goto label_2cfa68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CFA78u;
}
