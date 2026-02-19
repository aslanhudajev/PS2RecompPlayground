#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AllocMem
// Address: 0x2d3d48 - 0x2d3e14
void AllocMem_0x2d3d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3d48u;

    // 0x2d3d48: 0x27bdffd0
    ctx->pc = 0x2d3d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d3d4c: 0xffbf0020
    ctx->pc = 0x2d3d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d3d50: 0xffb10010
    ctx->pc = 0x2d3d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d3d54: 0xffb00000
    ctx->pc = 0x2d3d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3d58: 0x3c02003a
    ctx->pc = 0x2d3d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3d5c: 0x8c422358
    ctx->pc = 0x2d3d5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9048)));
    // 0x2d3d60: 0x10400008
    ctx->pc = 0x2D3D60u;
    {
        const bool branch_taken_0x2d3d60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3D64u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d60) {
            ctx->pc = 0x2D3D84u;
            goto label_2d3d84;
        }
    }
    ctx->pc = 0x2D3D68u;
    // 0x2d3d68: 0x3c020037
    ctx->pc = 0x2d3d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d3d6c: 0x3c0300a0
    ctx->pc = 0x2d3d6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)160 << 16));
    // 0x2d3d70: 0x3463a000
    ctx->pc = 0x2d3d70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 40960));
    // 0x2d3d74: 0xac438008
    ctx->pc = 0x2d3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d3d78: 0x3c04003b
    ctx->pc = 0x2d3d78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3d7c: 0xc0b4976
    ctx->pc = 0x2D3D7Cu;
    SET_GPR_U32(ctx, 31, 0x2D3D84u);
    ctx->pc = 0x2D3D80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31296));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3D84u; }
    }
    if (ctx->pc != 0x2D3D84u) { return; }
    ctx->pc = 0x2D3D84u;
label_2d3d84:
    // 0x2d3d84: 0x3203000f
    ctx->pc = 0x2d3d84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 15));
    // 0x2d3d88: 0x10600002
    ctx->pc = 0x2D3D88u;
    {
        const bool branch_taken_0x2d3d88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3D8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x2d3d88) {
            ctx->pc = 0x2D3D94u;
            goto label_2d3d94;
        }
    }
    ctx->pc = 0x2D3D90u;
    // 0x2d3d90: 0x438023
    ctx->pc = 0x2d3d90u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d3d94:
    // 0x2d3d94: 0x3c06003a
    ctx->pc = 0x2d3d94u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2d3d98: 0x3c05003a
    ctx->pc = 0x2d3d98u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2d3d9c: 0x8ca4230c
    ctx->pc = 0x2d3d9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8972)));
    // 0x2d3da0: 0x24830003
    ctx->pc = 0x2d3da0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3));
    // 0x2d3da4: 0x2402ffff
    ctx->pc = 0x2d3da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3da8: 0x44102a
    ctx->pc = 0x2d3da8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2d3dac: 0x82180b
    ctx->pc = 0x2d3dacu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x2d3db0: 0x31883
    ctx->pc = 0x2d3db0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d3db4: 0x31880
    ctx->pc = 0x2d3db4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3db8: 0x8cc22354
    ctx->pc = 0x2d3db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 9044)));
    // 0x2d3dbc: 0x628821
    ctx->pc = 0x2d3dbcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3dc0: 0x2043021
    ctx->pc = 0x2d3dc0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d3dc4: 0xaca6230c
    ctx->pc = 0x2d3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8972), GPR_U32(ctx, 6));
    // 0x2d3dc8: 0x3c02003a
    ctx->pc = 0x2d3dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3dcc: 0x8c472310
    ctx->pc = 0x2d3dccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8976)));
    // 0x2d3dd0: 0xe6102a
    ctx->pc = 0x2d3dd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x2d3dd4: 0x10400009
    ctx->pc = 0x2D3DD4u;
    {
        const bool branch_taken_0x2d3dd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3DD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2d3dd4) {
            ctx->pc = 0x2D3DFCu;
            goto label_2d3dfc;
        }
    }
    ctx->pc = 0x2D3DDCu;
    // 0x2d3ddc: 0x3c0300c0
    ctx->pc = 0x2d3ddcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)192 << 16));
    // 0x2d3de0: 0x3463c000
    ctx->pc = 0x2d3de0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49152));
    // 0x2d3de4: 0xac438008
    ctx->pc = 0x2d3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d3de8: 0x3c04003b
    ctx->pc = 0x2d3de8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3dec: 0x24847aa0
    ctx->pc = 0x2d3decu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31392));
    // 0x2d3df0: 0x200282d
    ctx->pc = 0x2d3df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3df4: 0xc0b4976
    ctx->pc = 0x2D3DF4u;
    SET_GPR_U32(ctx, 31, 0x2D3DFCu);
    ctx->pc = 0x2D3DF8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3DFCu; }
    }
    if (ctx->pc != 0x2D3DFCu) { return; }
    ctx->pc = 0x2D3DFCu;
label_2d3dfc:
    // 0x2d3dfc: 0x220102d
    ctx->pc = 0x2d3dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e00: 0xdfbf0020
    ctx->pc = 0x2d3e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3e04: 0xdfb10010
    ctx->pc = 0x2d3e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3e08: 0xdfb00000
    ctx->pc = 0x2d3e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3e0c: 0x3e00008
    ctx->pc = 0x2D3E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3E10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3D84u: goto label_2d3d84;
            case 0x2D3D94u: goto label_2d3d94;
            case 0x2D3DFCu: goto label_2d3dfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3E14u;
}
