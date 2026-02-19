#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AllocHiMem
// Address: 0x2d3c68 - 0x2d3d44
void AllocHiMem_0x2d3c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3c68u;

    // 0x2d3c68: 0x27bdffe0
    ctx->pc = 0x2d3c68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3c6c: 0xffbf0010
    ctx->pc = 0x2d3c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3c70: 0xffb00000
    ctx->pc = 0x2d3c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3c74: 0x3c02003a
    ctx->pc = 0x2d3c74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3c78: 0x8c422358
    ctx->pc = 0x2d3c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9048)));
    // 0x2d3c7c: 0x10400008
    ctx->pc = 0x2D3C7Cu;
    {
        const bool branch_taken_0x2d3c7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3C80u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c7c) {
            ctx->pc = 0x2D3CA0u;
            goto label_2d3ca0;
        }
    }
    ctx->pc = 0x2D3C84u;
    // 0x2d3c84: 0x3c020037
    ctx->pc = 0x2d3c84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d3c88: 0x3c030080
    ctx->pc = 0x2d3c88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x2d3c8c: 0x34638000
    ctx->pc = 0x2d3c8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32768));
    // 0x2d3c90: 0xac438008
    ctx->pc = 0x2d3c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d3c94: 0x3c04003b
    ctx->pc = 0x2d3c94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3c98: 0xc0b4976
    ctx->pc = 0x2D3C98u;
    SET_GPR_U32(ctx, 31, 0x2D3CA0u);
    ctx->pc = 0x2D3C9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31296));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3CA0u; }
    }
    if (ctx->pc != 0x2D3CA0u) { return; }
    ctx->pc = 0x2D3CA0u;
label_2d3ca0:
    // 0x2d3ca0: 0x3203000f
    ctx->pc = 0x2d3ca0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 15));
    // 0x2d3ca4: 0x10600002
    ctx->pc = 0x2D3CA4u;
    {
        const bool branch_taken_0x2d3ca4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3CA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x2d3ca4) {
            ctx->pc = 0x2D3CB0u;
            goto label_2d3cb0;
        }
    }
    ctx->pc = 0x2D3CACu;
    // 0x2d3cac: 0x438023
    ctx->pc = 0x2d3cacu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d3cb0:
    // 0x2d3cb0: 0x3c02003a
    ctx->pc = 0x2d3cb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3cb4: 0x8c42230c
    ctx->pc = 0x2d3cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x2d3cb8: 0x2023021
    ctx->pc = 0x2d3cb8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d3cbc: 0x3c02003a
    ctx->pc = 0x2d3cbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3cc0: 0x8c472310
    ctx->pc = 0x2d3cc0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8976)));
    // 0x2d3cc4: 0xe6102a
    ctx->pc = 0x2d3cc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x2d3cc8: 0x10400009
    ctx->pc = 0x2D3CC8u;
    {
        const bool branch_taken_0x2d3cc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3CCCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2d3cc8) {
            ctx->pc = 0x2D3CF0u;
            goto label_2d3cf0;
        }
    }
    ctx->pc = 0x2D3CD0u;
    // 0x2d3cd0: 0x3c030090
    ctx->pc = 0x2d3cd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)144 << 16));
    // 0x2d3cd4: 0x34639000
    ctx->pc = 0x2d3cd4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 36864));
    // 0x2d3cd8: 0xac438008
    ctx->pc = 0x2d3cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d3cdc: 0x3c04003b
    ctx->pc = 0x2d3cdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3ce0: 0x24847a68
    ctx->pc = 0x2d3ce0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31336));
    // 0x2d3ce4: 0x200282d
    ctx->pc = 0x2d3ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ce8: 0xc0b4976
    ctx->pc = 0x2D3CE8u;
    SET_GPR_U32(ctx, 31, 0x2D3CF0u);
    ctx->pc = 0x2D3CECu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3CF0u; }
    }
    if (ctx->pc != 0x2D3CF0u) { return; }
    ctx->pc = 0x2D3CF0u;
label_2d3cf0:
    // 0x2d3cf0: 0x3c02003a
    ctx->pc = 0x2d3cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3cf4: 0x8c432354
    ctx->pc = 0x2d3cf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 9044)));
    // 0x2d3cf8: 0x3c05003a
    ctx->pc = 0x2d3cf8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2d3cfc: 0x8ca42310
    ctx->pc = 0x2d3cfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8976)));
    // 0x2d3d00: 0x641821
    ctx->pc = 0x2d3d00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3d04: 0x701823
    ctx->pc = 0x2d3d04u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d3d08: 0x3c02ffff
    ctx->pc = 0x2d3d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2d3d0c: 0x3442ff80
    ctx->pc = 0x2d3d0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65408));
    // 0x2d3d10: 0x621024
    ctx->pc = 0x2d3d10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3d14: 0x621823
    ctx->pc = 0x2d3d14u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3d18: 0x2038021
    ctx->pc = 0x2d3d18u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d3d1c: 0x902023
    ctx->pc = 0x2d3d1cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d3d20: 0xaca42310
    ctx->pc = 0x2d3d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8976), GPR_U32(ctx, 4));
    // 0x2d3d24: 0x3c04003a
    ctx->pc = 0x2d3d24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d3d28: 0x8c8321e8
    ctx->pc = 0x2d3d28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8680)));
    // 0x2d3d2c: 0x2031821
    ctx->pc = 0x2d3d2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d3d30: 0xac8321e8
    ctx->pc = 0x2d3d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8680), GPR_U32(ctx, 3));
    // 0x2d3d34: 0xdfbf0010
    ctx->pc = 0x2d3d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3d38: 0xdfb00000
    ctx->pc = 0x2d3d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3d3c: 0x3e00008
    ctx->pc = 0x2D3D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3D40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3CA0u: goto label_2d3ca0;
            case 0x2D3CB0u: goto label_2d3cb0;
            case 0x2D3CF0u: goto label_2d3cf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3D44u;
}
