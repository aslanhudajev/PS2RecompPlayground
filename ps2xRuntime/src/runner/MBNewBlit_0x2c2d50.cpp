#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: MBNewBlit
// Address: 0x2c2d50 - 0x2c2e7c
void MBNewBlit_0x2c2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _call = 0;
    ++_call;

    printf("[MBNewBlit #%d] ENTRY a0(layer)=0x%x a1(tex)=0x%x ra=0x%x\n",
           _call, GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U32(ctx, 31));

    ctx->pc = 0x2c2d50u;

    // 0x2c2d50: 0x27bdff80
    ctx->pc = 0x2c2d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c2d54: 0xffbf0070
    ctx->pc = 0x2c2d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c2d58: 0xffb60060
    ctx->pc = 0x2c2d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c2d5c: 0xffb50050
    ctx->pc = 0x2c2d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c2d60: 0xffb40040
    ctx->pc = 0x2c2d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c2d64: 0xffb30030
    ctx->pc = 0x2c2d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c2d68: 0xffb20020
    ctx->pc = 0x2c2d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c2d6c: 0xffb10010
    ctx->pc = 0x2c2d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c2d70: 0xffb00000
    ctx->pc = 0x2c2d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2d74: 0x80882d
    ctx->pc = 0x2c2d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d78: 0xa0902d
    ctx->pc = 0x2c2d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d7c: 0xc0982d
    ctx->pc = 0x2c2d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d80: 0xe0a02d
    ctx->pc = 0x2c2d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d84: 0x100a82d
    ctx->pc = 0x2c2d84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d88: 0x16200003
    ctx->pc = 0x2C2D88u;
    {
        const bool branch_taken_0x2c2d88 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2D8Cu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d88) {
            ctx->pc = 0x2C2D98u;
            goto label_2c2d98;
        }
    }
    ctx->pc = 0x2C2D90u;
    // 0x2c2d90: 0x3c020037
    ctx->pc = 0x2c2d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2d94: 0x8c513194
    ctx->pc = 0x2c2d94u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 12692)));
label_2c2d98:
    // 0x2c2d98: 0xc0b0b04
    ctx->pc = 0x2C2D98u;
    SET_GPR_U32(ctx, 31, 0x2C2DA0u);
    ctx->pc = 0x2C2C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCreateBlit_0x2c2c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DA0u; }
    }
    if (ctx->pc != 0x2C2DA0u) { return; }
    ctx->pc = 0x2C2DA0u;
    // 0x2c2da0: 0x40802d  s0 = v0 (new blit pointer from MBCreateBlit)
    ctx->pc = 0x2c2da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    printf("[MBNewBlit #%d] MBCreateBlit returned new_blit=0x%x\n", _call, GPR_U32(ctx, 16));
    // 0x2c2da4: 0x1200002b
    ctx->pc = 0x2C2DA4u;
    {
        const bool branch_taken_0x2c2da4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2DA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2da4) {
            ctx->pc = 0x2C2E54u;
            goto label_2c2e54;
        }
    }
    ctx->pc = 0x2C2DACu;
    // 0x2c2dac: 0x8e220070
    ctx->pc = 0x2c2dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2c2db0: 0x1040000f
    ctx->pc = 0x2C2DB0u;
    {
        const bool branch_taken_0x2c2db0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2DB4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2db0) {
            ctx->pc = 0x2C2DF0u;
            goto label_2c2df0;
        }
    }
    ctx->pc = 0x2C2DB8u;
    // 0x2c2db8: 0x8c620030
    ctx->pc = 0x2c2db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2c2dbc: 0x5040000a
    ctx->pc = 0x2C2DBCu;
    {
        const bool branch_taken_0x2c2dbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c2dbc) {
            ctx->pc = 0x2C2DC0u;
            printf("[MBNewBlit #%d] @2c2dc0 WRITE *(0x%x+48) = 0x%x  (head->next = new_blit)\n",
                   _call, GPR_U32(ctx, 3), GPR_U32(ctx, 16));
            WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
            ctx->pc = 0x2C2DE8u;
            goto label_2c2de8;
        }
    }
    ctx->pc = 0x2C2DC4u;
    // 0x2c2dc4: 0x0
    ctx->pc = 0x2c2dc4u;
    // NOP
label_2c2dc8:
    // 0x2c2dc8: 0x8c630030
    ctx->pc = 0x2c2dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2c2dcc: 0x8c620030
    ctx->pc = 0x2c2dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2c2dd0: 0x0
    ctx->pc = 0x2c2dd0u;
    // NOP
    // 0x2c2dd4: 0x0
    ctx->pc = 0x2c2dd4u;
    // NOP
    // 0x2c2dd8: 0x0
    ctx->pc = 0x2c2dd8u;
    // NOP
    // 0x2c2ddc: 0x1440fffa
    ctx->pc = 0x2C2DDCu;
    {
        const bool branch_taken_0x2c2ddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c2ddc) {
            ctx->pc = 0x2C2DC8u;
            goto label_2c2dc8;
        }
    }
    ctx->pc = 0x2C2DE4u;
    // 0x2c2de4: 0xac700030  *(last+48) = new_blit  (append at end of list)
    ctx->pc = 0x2c2de4u;
    printf("[MBNewBlit #%d] @2c2de4 WRITE *(0x%x+48) = 0x%x  (tail->next = new_blit)\n",
           _call, GPR_U32(ctx, 3), GPR_U32(ctx, 16));
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
label_2c2de8:
    // 0x2c2de8: 0x10000003
    ctx->pc = 0x2C2DE8u;
    {
        const bool branch_taken_0x2c2de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2DECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        if (branch_taken_0x2c2de8) {
            ctx->pc = 0x2C2DF8u;
            goto label_2c2df8;
        }
    }
    ctx->pc = 0x2C2DF0u;
label_2c2df0:
    // 0x2c2df0: 0xae300070
    ctx->pc = 0x2c2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 16));
    // 0x2c2df4: 0xae00002c
    ctx->pc = 0x2c2df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2c2df8:
    // 0x2c2df8: 0xae110034
    ctx->pc = 0x2c2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x2c2dfc: 0x200202d
    ctx->pc = 0x2c2dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e00: 0x240282d
    ctx->pc = 0x2c2e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e04: 0xc0b0ed6
    ctx->pc = 0x2C2E04u;
    SET_GPR_U32(ctx, 31, 0x2C2E0Cu);
    ctx->pc = 0x2C2E08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E0Cu; }
    }
    if (ctx->pc != 0x2C2E0Cu) { return; }
    ctx->pc = 0x2C2E0Cu;
    // 0x2c2e0c: 0x200202d
    ctx->pc = 0x2c2e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e10: 0x260282d
    ctx->pc = 0x2c2e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e14: 0x3c013f80
    ctx->pc = 0x2c2e14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c2e18: 0x44816000
    ctx->pc = 0x2c2e18u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c2e1c: 0xc0b0df2
    ctx->pc = 0x2C2E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C2E24u);
    ctx->pc = 0x2C2E20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E24u; }
    }
    if (ctx->pc != 0x2C2E24u) { return; }
    ctx->pc = 0x2C2E24u;
    // 0x2c2e24: 0x200202d
    ctx->pc = 0x2c2e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e28: 0x2a0282d
    ctx->pc = 0x2c2e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e2c: 0xc0b0cf6
    ctx->pc = 0x2C2E2Cu;
    SET_GPR_U32(ctx, 31, 0x2C2E34u);
    ctx->pc = 0x2C2E30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E34u; }
    }
    if (ctx->pc != 0x2C2E34u) { return; }
    ctx->pc = 0x2C2E34u;
    // 0x2c2e34: 0x200202d
    ctx->pc = 0x2c2e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e38: 0x44806000
    ctx->pc = 0x2c2e38u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2c2e3c: 0x3c013f80
    ctx->pc = 0x2c2e3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c2e40: 0x44816800
    ctx->pc = 0x2c2e40u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2c2e44: 0x46006386
    ctx->pc = 0x2c2e44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c2e48: 0xc0b0e6a
    ctx->pc = 0x2C2E48u;
    SET_GPR_U32(ctx, 31, 0x2C2E50u);
    ctx->pc = 0x2C2E4Cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E50u; }
    }
    if (ctx->pc != 0x2C2E50u) { return; }
    ctx->pc = 0x2C2E50u;
    // 0x2c2e50: 0x200102d
    ctx->pc = 0x2c2e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2e54:
    // 0x2c2e54: 0xdfbf0070
    ctx->pc = 0x2c2e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c2e58: 0xdfb60060
    ctx->pc = 0x2c2e58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2e5c: 0xdfb50050
    ctx->pc = 0x2c2e5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2e60: 0xdfb40040
    ctx->pc = 0x2c2e60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2e64: 0xdfb30030
    ctx->pc = 0x2c2e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2e68: 0xdfb20020
    ctx->pc = 0x2c2e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2e6c: 0xdfb10010
    ctx->pc = 0x2c2e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2e70: 0xdfb00000
    ctx->pc = 0x2c2e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2e74: 0x3e00008
    ctx->pc = 0x2C2E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2E78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2D98u: goto label_2c2d98;
            case 0x2C2DC8u: goto label_2c2dc8;
            case 0x2C2DE8u: goto label_2c2de8;
            case 0x2C2DF0u: goto label_2c2df0;
            case 0x2C2DF8u: goto label_2c2df8;
            case 0x2C2E54u: goto label_2c2e54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2E7Cu;
}
