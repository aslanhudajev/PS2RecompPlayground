#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _getPtsDtsFlags
// Address: 0x2f3c70 - 0x2f3e04
void _getPtsDtsFlags_0x2f3c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3c70u;

    // 0x2f3c70: 0x27bdff50
    ctx->pc = 0x2f3c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f3c74: 0x3c02003a
    ctx->pc = 0x2f3c74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3c78: 0xffbe0090
    ctx->pc = 0x2f3c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2f3c7c: 0xffb50060
    ctx->pc = 0x2f3c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f3c80: 0xc0f02d
    ctx->pc = 0x2f3c80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c84: 0xffb40050
    ctx->pc = 0x2f3c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f3c88: 0xa0a82d
    ctx->pc = 0x2f3c88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c8c: 0xffbf00a0
    ctx->pc = 0x2f3c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f3c90: 0xffb70080
    ctx->pc = 0x2f3c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f3c94: 0xffb60070
    ctx->pc = 0x2f3c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f3c98: 0xffb20030
    ctx->pc = 0x2f3c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f3c9c: 0xffb10020
    ctx->pc = 0x2f3c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f3ca0: 0xffb00010
    ctx->pc = 0x2f3ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f3ca4: 0x8c433024
    ctx->pc = 0x2f3ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x2f3ca8: 0xafa70000
    ctx->pc = 0x2f3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2f3cac: 0xffb30040
    ctx->pc = 0x2f3cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f3cb0: 0x8c730040
    ctx->pc = 0x2f3cb0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2f3cb4: 0x8e620070
    ctx->pc = 0x2f3cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2f3cb8: 0x10400025
    ctx->pc = 0x2F3CB8u;
    {
        const bool branch_taken_0x2f3cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3CBCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3cb8) {
            ctx->pc = 0x2F3D50u;
            goto label_2f3d50;
        }
    }
    ctx->pc = 0x2F3CC0u;
    // 0x2f3cc0: 0xde820018
    ctx->pc = 0x2f3cc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2f3cc4: 0x4430024
    ctx->pc = 0x2F3CC4u;
    {
        const bool branch_taken_0x2f3cc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f3cc4) {
            ctx->pc = 0x2F3CC8u;
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->pc = 0x2F3D58u;
            goto label_2f3d58;
        }
    }
    ctx->pc = 0x2F3CCCu;
    // 0x2f3ccc: 0x8e770080
    ctx->pc = 0x2f3cccu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2f3cd0: 0x6e20021
    ctx->pc = 0x2F3CD0u;
    {
        const bool branch_taken_0x2f3cd0 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x2f3cd0) {
            ctx->pc = 0x2F3CD4u;
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->pc = 0x2F3D58u;
            goto label_2f3d58;
        }
    }
    ctx->pc = 0x2F3CD8u;
    // 0x2f3cd8: 0xde700088
    ctx->pc = 0x2f3cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2f3cdc: 0xde650078
    ctx->pc = 0x2f3cdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2f3ce0: 0x10803c
    ctx->pc = 0x2f3ce0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2f3ce4: 0x10803f
    ctx->pc = 0x2f3ce4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2f3ce8: 0x32120001
    ctx->pc = 0x2f3ce8u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 16), 1));
    // 0x2f3cec: 0x30a50001
    ctx->pc = 0x2f3cecu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    // 0x2f3cf0: 0xc0bdf62
    ctx->pc = 0x2F3CF0u;
    SET_GPR_U32(ctx, 31, 0x2F3CF8u);
    ctx->pc = 0x2F3CF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F7D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x2f7d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CF8u; }
    }
    if (ctx->pc != 0x2F3CF8u) { return; }
    ctx->pc = 0x2F3CF8u;
    // 0x2f3cf8: 0x8e760090
    ctx->pc = 0x2f3cf8u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x2f3cfc: 0x40202d
    ctx->pc = 0x2f3cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d00: 0xc0bdf62
    ctx->pc = 0x2F3D00u;
    SET_GPR_U32(ctx, 31, 0x2F3D08u);
    ctx->pc = 0x2F3D04u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x2F7D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x2f7d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D08u; }
    }
    if (ctx->pc != 0x2F3D08u) { return; }
    ctx->pc = 0x2F3D08u;
    // 0x2f3d08: 0xde640078
    ctx->pc = 0x2f3d08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2f3d0c: 0x2883c
    ctx->pc = 0x2f3d0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f3d10: 0x11883f
    ctx->pc = 0x2f3d10u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2f3d14: 0xc0bdf62
    ctx->pc = 0x2F3D14u;
    SET_GPR_U32(ctx, 31, 0x2F3D1Cu);
    ctx->pc = 0x2F3D18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F7D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x2f7d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D1Cu; }
    }
    if (ctx->pc != 0x2F3D1Cu) { return; }
    ctx->pc = 0x2F3D1Cu;
    // 0x2f3d1c: 0x217f8
    ctx->pc = 0x2f3d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x2f3d20: 0x2103f
    ctx->pc = 0x2f3d20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f3d24: 0x240202d
    ctx->pc = 0x2f3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d28: 0x511021
    ctx->pc = 0x2f3d28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f3d2c: 0x2e21021
    ctx->pc = 0x2f3d2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2f3d30: 0xfea20000
    ctx->pc = 0x2f3d30u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x2f3d34: 0xde650078
    ctx->pc = 0x2f3d34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2f3d38: 0xc0bdf62
    ctx->pc = 0x2F3D38u;
    SET_GPR_U32(ctx, 31, 0x2F3D40u);
    ctx->pc = 0x2F3D3Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2F7D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x2f7d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D40u; }
    }
    if (ctx->pc != 0x2F3D40u) { return; }
    ctx->pc = 0x2F3D40u;
    // 0x2f3d40: 0x10400005
    ctx->pc = 0x2F3D40u;
    {
        const bool branch_taken_0x2f3d40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3D44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x2f3d40) {
            ctx->pc = 0x2F3D58u;
            goto label_2f3d58;
        }
    }
    ctx->pc = 0x2F3D48u;
    // 0x2f3d48: 0x10000003
    ctx->pc = 0x2F3D48u;
    {
        const bool branch_taken_0x2f3d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3D4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        if (branch_taken_0x2f3d48) {
            ctx->pc = 0x2F3D58u;
            goto label_2f3d58;
        }
    }
    ctx->pc = 0x2F3D50u;
label_2f3d50:
    // 0x2f3d50: 0xde820018
    ctx->pc = 0x2f3d50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2f3d54: 0xfea20000
    ctx->pc = 0x2f3d54u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_2f3d58:
    // 0x2f3d58: 0x8e6300f8
    ctx->pc = 0x2f3d58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x2f3d5c: 0x24020002
    ctx->pc = 0x2f3d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3d60: 0x54620009
    ctx->pc = 0x2F3D60u;
    {
        const bool branch_taken_0x2f3d60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2f3d60) {
            ctx->pc = 0x2F3D64u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x2F3D88u;
            goto label_2f3d88;
        }
    }
    ctx->pc = 0x2F3D68u;
    // 0x2f3d68: 0xde6200f0
    ctx->pc = 0x2f3d68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x2f3d6c: 0x4420006
    ctx->pc = 0x2F3D6Cu;
    {
        const bool branch_taken_0x2f3d6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f3d6c) {
            ctx->pc = 0x2F3D70u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x2F3D88u;
            goto label_2f3d88;
        }
    }
    ctx->pc = 0x2F3D74u;
    // 0x2f3d74: 0xfea20000
    ctx->pc = 0x2f3d74u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x2f3d78: 0x2402ffff
    ctx->pc = 0x2f3d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3d7c: 0xae6000f8
    ctx->pc = 0x2f3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x2f3d80: 0xfe6200f0
    ctx->pc = 0x2f3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x2f3d84: 0x8e850040
    ctx->pc = 0x2f3d84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2f3d88:
    // 0x2f3d88: 0x8e84003c
    ctx->pc = 0x2f3d88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2f3d8c: 0x8e820034
    ctx->pc = 0x2f3d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2f3d90: 0x52978
    ctx->pc = 0x2f3d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x2f3d94: 0x421b8
    ctx->pc = 0x2f3d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x2f3d98: 0x8e860030
    ctx->pc = 0x2f3d98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2f3d9c: 0x8e87002c
    ctx->pc = 0x2f3d9cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x2f3da0: 0xa42825
    ctx->pc = 0x2f3da0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f3da4: 0x8e830038
    ctx->pc = 0x2f3da4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x2f3da8: 0x21238
    ctx->pc = 0x2f3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2f3dac: 0xde840020
    ctx->pc = 0x2f3dacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2f3db0: 0x471025
    ctx->pc = 0x2f3db0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f3db4: 0x630f8
    ctx->pc = 0x2f3db4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x2f3db8: 0x319f8
    ctx->pc = 0x2f3db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x2f3dbc: 0xffc40000
    ctx->pc = 0x2f3dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x2f3dc0: 0x661825
    ctx->pc = 0x2f3dc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f3dc4: 0x451025
    ctx->pc = 0x2f3dc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f3dc8: 0xdfbf00a0
    ctx->pc = 0x2f3dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f3dcc: 0x431025
    ctx->pc = 0x2f3dccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3dd0: 0xdfbe0090
    ctx->pc = 0x2f3dd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f3dd4: 0x8fa30000
    ctx->pc = 0x2f3dd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3dd8: 0xdfb70080
    ctx->pc = 0x2f3dd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f3ddc: 0xdfb60070
    ctx->pc = 0x2f3ddcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f3de0: 0xdfb50060
    ctx->pc = 0x2f3de0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f3de4: 0xdfb40050
    ctx->pc = 0x2f3de4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f3de8: 0xdfb30040
    ctx->pc = 0x2f3de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3dec: 0xdfb20030
    ctx->pc = 0x2f3decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3df0: 0xdfb10020
    ctx->pc = 0x2f3df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3df4: 0xdfb00010
    ctx->pc = 0x2f3df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3df8: 0xfc620000
    ctx->pc = 0x2f3df8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2f3dfc: 0x3e00008
    ctx->pc = 0x2F3DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3E00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3D50u: goto label_2f3d50;
            case 0x2F3D58u: goto label_2f3d58;
            case 0x2F3D88u: goto label_2f3d88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3E04u;
}
