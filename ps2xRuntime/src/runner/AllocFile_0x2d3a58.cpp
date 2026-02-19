#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AllocFile
// Address: 0x2d3a58 - 0x2d3b28
void AllocFile_0x2d3a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3a58u;

    // 0x2d3a58: 0x27bdff90
    ctx->pc = 0x2d3a58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d3a5c: 0xffbf0060
    ctx->pc = 0x2d3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d3a60: 0xffb50050
    ctx->pc = 0x2d3a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d3a64: 0xffb40040
    ctx->pc = 0x2d3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d3a68: 0xffb30030
    ctx->pc = 0x2d3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d3a6c: 0xffb20020
    ctx->pc = 0x2d3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d3a70: 0xffb10010
    ctx->pc = 0x2d3a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d3a74: 0xffb00000
    ctx->pc = 0x2d3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3a78: 0x80982d
    ctx->pc = 0x2d3a78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a7c: 0xc0b4f86
    ctx->pc = 0x2D3A7Cu;
    SET_GPR_U32(ctx, 31, 0x2D3A84u);
    ctx->pc = 0x2D3A80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMemBase_0x2d3e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A84u; }
    }
    if (ctx->pc != 0x2D3A84u) { return; }
    ctx->pc = 0x2D3A84u;
    // 0x2d3a84: 0xc0b4fa0
    ctx->pc = 0x2D3A84u;
    SET_GPR_U32(ctx, 31, 0x2D3A8Cu);
    ctx->pc = 0x2D3A88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A8Cu; }
    }
    if (ctx->pc != 0x2D3A8Cu) { return; }
    ctx->pc = 0x2D3A8Cu;
    // 0x2d3a8c: 0x260202d
    ctx->pc = 0x2d3a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a90: 0x280282d
    ctx->pc = 0x2d3a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a94: 0x40302d
    ctx->pc = 0x2d3a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a98: 0xc0b4e7c
    ctx->pc = 0x2D3A98u;
    SET_GPR_U32(ctx, 31, 0x2D3AA0u);
    ctx->pc = 0x2D3A9Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D39F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadFile_0x2d39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3AA0u; }
    }
    if (ctx->pc != 0x2D3AA0u) { return; }
    ctx->pc = 0x2D3AA0u;
    // 0x2d3aa0: 0x40902d
    ctx->pc = 0x2d3aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3aa4: 0x6410008
    ctx->pc = 0x2D3AA4u;
    {
        const bool branch_taken_0x2d3aa4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2D3AA8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x2d3aa4) {
            ctx->pc = 0x2D3AC8u;
            goto label_2d3ac8;
        }
    }
    ctx->pc = 0x2D3AACu;
    // 0x2d3aac: 0x3c020037
    ctx->pc = 0x2d3aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d3ab0: 0x240300ff
    ctx->pc = 0x2d3ab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d3ab4: 0xac438008
    ctx->pc = 0x2d3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d3ab8: 0x3c04003b
    ctx->pc = 0x2d3ab8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3abc: 0xc0b4976
    ctx->pc = 0x2D3ABCu;
    SET_GPR_U32(ctx, 31, 0x2D3AC4u);
    ctx->pc = 0x2D3AC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31168));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3AC4u; }
    }
    if (ctx->pc != 0x2D3AC4u) { return; }
    ctx->pc = 0x2D3AC4u;
    // 0x2d3ac4: 0x3c10003a
    ctx->pc = 0x2d3ac4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2d3ac8:
    // 0x2d3ac8: 0x8e11230c
    ctx->pc = 0x2d3ac8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 8972)));
    // 0x2d3acc: 0xc0b4f52
    ctx->pc = 0x2D3ACCu;
    SET_GPR_U32(ctx, 31, 0x2D3AD4u);
    ctx->pc = 0x2D3AD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3AD4u; }
    }
    if (ctx->pc != 0x2D3AD4u) { return; }
    ctx->pc = 0x2D3AD4u;
    // 0x2d3ad4: 0x8e08230c
    ctx->pc = 0x2d3ad4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 8972)));
    // 0x2d3ad8: 0x3c04003b
    ctx->pc = 0x2d3ad8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3adc: 0x248479d8
    ctx->pc = 0x2d3adcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31192));
    // 0x2d3ae0: 0x260282d
    ctx->pc = 0x2d3ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ae4: 0x280302d
    ctx->pc = 0x2d3ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ae8: 0x113a83
    ctx->pc = 0x2d3ae8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 10));
    // 0x2d3aec: 0x84283
    ctx->pc = 0x2d3aecu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 10));
    // 0x2d3af0: 0xc0b4a34
    ctx->pc = 0x2D3AF0u;
    SET_GPR_U32(ctx, 31, 0x2D3AF8u);
    ctx->pc = 0x2D3AF4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 18), 10));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3AF8u; }
    }
    if (ctx->pc != 0x2D3AF8u) { return; }
    ctx->pc = 0x2D3AF8u;
    // 0x2d3af8: 0x3c02003a
    ctx->pc = 0x2d3af8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3afc: 0xac522380
    ctx->pc = 0x2d3afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9088), GPR_U32(ctx, 18));
    // 0x2d3b00: 0x2a0102d
    ctx->pc = 0x2d3b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b04: 0xdfbf0060
    ctx->pc = 0x2d3b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3b08: 0xdfb50050
    ctx->pc = 0x2d3b08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3b0c: 0xdfb40040
    ctx->pc = 0x2d3b0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3b10: 0xdfb30030
    ctx->pc = 0x2d3b10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3b14: 0xdfb20020
    ctx->pc = 0x2d3b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3b18: 0xdfb10010
    ctx->pc = 0x2d3b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3b1c: 0xdfb00000
    ctx->pc = 0x2d3b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3b20: 0x3e00008
    ctx->pc = 0x2D3B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3AC8u: goto label_2d3ac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3B28u;
}
