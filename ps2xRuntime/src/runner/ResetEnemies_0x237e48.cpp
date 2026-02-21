#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetEnemies
// Address: 0x237e48 - 0x237f24
void ResetEnemies_0x237e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237e48u;

    // 0x237e48: 0x27bdfff0
    ctx->pc = 0x237e48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237e4c: 0xffbf0000
    ctx->pc = 0x237e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237e50: 0x3c020033
    ctx->pc = 0x237e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237e54: 0x2443dfd0
    ctx->pc = 0x237e54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x237e58: 0x202d
    ctx->pc = 0x237e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e5c: 0x24050002
    ctx->pc = 0x237e5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_237e60:
    // 0x237e60: 0xac6000c8
    ctx->pc = 0x237e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
    // 0x237e64: 0xac600070
    ctx->pc = 0x237e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x237e68: 0xac650074
    ctx->pc = 0x237e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 5));
    // 0x237e6c: 0xac600230
    ctx->pc = 0x237e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 0));
    // 0x237e70: 0xac600080
    ctx->pc = 0x237e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x237e74: 0xac6001f0
    ctx->pc = 0x237e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 496), GPR_U32(ctx, 0));
    // 0x237e78: 0x24840001
    ctx->pc = 0x237e78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x237e7c: 0x28820019
    ctx->pc = 0x237e7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 25));
    // 0x237e80: 0x1440fff7
    ctx->pc = 0x237E80u;
    {
        const bool branch_taken_0x237e80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237E84u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 944));
        if (branch_taken_0x237e80) {
            ctx->pc = 0x237E60u;
            goto label_237e60;
        }
    }
    ctx->pc = 0x237E88u;
    // 0x237e88: 0x3c020038
    ctx->pc = 0x237e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x237e8c: 0x8c44c9a0
    ctx->pc = 0x237e8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
    // 0x237e90: 0x3c05003a
    ctx->pc = 0x237e90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x237e94: 0x24a52550
    ctx->pc = 0x237e94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x237e98: 0xc0b3ec0
    ctx->pc = 0x237E98u;
    SET_GPR_U32(ctx, 31, 0x237EA0u);
    ctx->pc = 0x237E9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EA0u; }
    }
    if (ctx->pc != 0x237EA0u) { return; }
    ctx->pc = 0x237EA0u;
    // 0x237ea0: 0x3c030033
    ctx->pc = 0x237ea0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x237ea4: 0xac62463c
    ctx->pc = 0x237ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17980), GPR_U32(ctx, 2));
    // 0x237ea8: 0x3c030033
    ctx->pc = 0x237ea8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x237eac: 0x3c020034
    ctx->pc = 0x237eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x237eb0: 0x8c42e7c8
    ctx->pc = 0x237eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x237eb4: 0x8442008e
    ctx->pc = 0x237eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 142)));
    // 0x237eb8: 0xac623c00
    ctx->pc = 0x237eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15360), GPR_U32(ctx, 2));
    // 0x237ebc: 0x3c020033
    ctx->pc = 0x237ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237ec0: 0xac403c04
    ctx->pc = 0x237ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15364), GPR_U32(ctx, 0));
    // 0x237ec4: 0x3c020033
    ctx->pc = 0x237ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237ec8: 0x2403ffff
    ctx->pc = 0x237ec8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237ecc: 0xac434638
    ctx->pc = 0x237eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17976), GPR_U32(ctx, 3));
    // 0x237ed0: 0x3c020033
    ctx->pc = 0x237ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237ed4: 0xac434630
    ctx->pc = 0x237ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17968), GPR_U32(ctx, 3));
    // 0x237ed8: 0x3c020033
    ctx->pc = 0x237ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237edc: 0xac404634
    ctx->pc = 0x237edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17972), GPR_U32(ctx, 0));
    // 0x237ee0: 0x202d
    ctx->pc = 0x237ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ee4: 0x3c020033
    ctx->pc = 0x237ee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237ee8: 0x24463e30
    ctx->pc = 0x237ee8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 15920));
    // 0x237eec: 0x3c020033
    ctx->pc = 0x237eecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237ef0: 0x24454230
    ctx->pc = 0x237ef0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16944));
    // 0x237ef4: 0x0
    ctx->pc = 0x237ef4u;
    // NOP
label_237ef8:
    // 0x237ef8: 0x41080
    ctx->pc = 0x237ef8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x237efc: 0x461821
    ctx->pc = 0x237efcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x237f00: 0x451021
    ctx->pc = 0x237f00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x237f04: 0xac400000
    ctx->pc = 0x237f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x237f08: 0x24840001
    ctx->pc = 0x237f08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x237f0c: 0x28820100
    ctx->pc = 0x237f0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 256));
    // 0x237f10: 0x1440fff9
    ctx->pc = 0x237F10u;
    {
        const bool branch_taken_0x237f10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237F14u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x237f10) {
            ctx->pc = 0x237EF8u;
            goto label_237ef8;
        }
    }
    ctx->pc = 0x237F18u;
    // 0x237f18: 0xdfbf0000
    ctx->pc = 0x237f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237f1c: 0x3e00008
    ctx->pc = 0x237F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237E60u: goto label_237e60;
            case 0x237EF8u: goto label_237ef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237F24u;
}
