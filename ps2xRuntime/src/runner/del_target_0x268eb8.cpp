#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: del_target
// Address: 0x268eb8 - 0x268f7c
void del_target_0x268eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268eb8u;

    // 0x268eb8: 0x27bdfff0
    ctx->pc = 0x268eb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x268ebc: 0xffbf0000
    ctx->pc = 0x268ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268ec0: 0x3c090034
    ctx->pc = 0x268ec0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)52 << 16));
    // 0x268ec4: 0x8d28f8fc
    ctx->pc = 0x268ec4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 4294965500)));
    // 0x268ec8: 0x11000029
    ctx->pc = 0x268EC8u;
    {
        const bool branch_taken_0x268ec8 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x268ECCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268ec8) {
            ctx->pc = 0x268F70u;
            goto label_268f70;
        }
    }
    ctx->pc = 0x268ED0u;
    // 0x268ed0: 0x302d
    ctx->pc = 0x268ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ed4: 0x3c050034
    ctx->pc = 0x268ed4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x268ed8: 0x8ca2f530
    ctx->pc = 0x268ed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294964528)));
    // 0x268edc: 0x1040000c
    ctx->pc = 0x268EDCu;
    {
        const bool branch_taken_0x268edc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268EE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294964528));
        if (branch_taken_0x268edc) {
            ctx->pc = 0x268F10u;
            goto label_268f10;
        }
    }
    ctx->pc = 0x268EE4u;
    // 0x268ee4: 0x8c620004
    ctx->pc = 0x268ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x268ee8: 0x5482000a
    ctx->pc = 0x268EE8u;
    {
        const bool branch_taken_0x268ee8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x268ee8) {
            ctx->pc = 0x268EECu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x268F14u;
            goto label_268f14;
        }
    }
    ctx->pc = 0x268EF0u;
    // 0x268ef0: 0xaca0f530
    ctx->pc = 0x268ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294964528), GPR_U32(ctx, 0));
    // 0x268ef4: 0xac600004
    ctx->pc = 0x268ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x268ef8: 0xac600010
    ctx->pc = 0x268ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x268efc: 0xac600014
    ctx->pc = 0x268efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x268f00: 0xac600018
    ctx->pc = 0x268f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x268f04: 0x2502ffff
    ctx->pc = 0x268f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x268f08: 0x10000014
    ctx->pc = 0x268F08u;
    {
        const bool branch_taken_0x268f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x268F0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294965500), GPR_U32(ctx, 2));
        if (branch_taken_0x268f08) {
            ctx->pc = 0x268F5Cu;
            goto label_268f5c;
        }
    }
    ctx->pc = 0x268F10u;
label_268f10:
    // 0x268f10: 0x24c60001
    ctx->pc = 0x268f10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_268f14:
    // 0x268f14: 0x28c2000f
    ctx->pc = 0x268f14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 15));
    // 0x268f18: 0x10400011
    ctx->pc = 0x268F18u;
    {
        const bool branch_taken_0x268f18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268F1Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x268f18) {
            ctx->pc = 0x268F60u;
            goto label_268f60;
        }
    }
    ctx->pc = 0x268F20u;
    // 0x268f20: 0x8c620000
    ctx->pc = 0x268f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268f24: 0x5040fffb
    ctx->pc = 0x268F24u;
    {
        const bool branch_taken_0x268f24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x268f24) {
            ctx->pc = 0x268F28u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x268F14u;
            goto label_268f14;
        }
    }
    ctx->pc = 0x268F2Cu;
    // 0x268f2c: 0x8c620004
    ctx->pc = 0x268f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x268f30: 0x5482fff8
    ctx->pc = 0x268F30u;
    {
        const bool branch_taken_0x268f30 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x268f30) {
            ctx->pc = 0x268F34u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x268F14u;
            goto label_268f14;
        }
    }
    ctx->pc = 0x268F38u;
    // 0x268f38: 0xac600000
    ctx->pc = 0x268f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x268f3c: 0xac600004
    ctx->pc = 0x268f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x268f40: 0xac600010
    ctx->pc = 0x268f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x268f44: 0xac600014
    ctx->pc = 0x268f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x268f48: 0xac600018
    ctx->pc = 0x268f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x268f4c: 0x3c030034
    ctx->pc = 0x268f4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x268f50: 0x8c62f8fc
    ctx->pc = 0x268f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965500)));
    // 0x268f54: 0x2442ffff
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x268f58: 0xac62f8fc
    ctx->pc = 0x268f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965500), GPR_U32(ctx, 2));
label_268f5c:
    // 0x268f5c: 0x24070001
    ctx->pc = 0x268f5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_268f60:
    // 0x268f60: 0x10e00003
    ctx->pc = 0x268F60u;
    {
        const bool branch_taken_0x268f60 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x268F64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268f60) {
            ctx->pc = 0x268F70u;
            goto label_268f70;
        }
    }
    ctx->pc = 0x268F68u;
    // 0x268f68: 0xc09a2fe
    ctx->pc = 0x268F68u;
    SET_GPR_U32(ctx, 31, 0x268F70u);
    ctx->pc = 0x268F6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        recalc_lookat_0x268bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F70u; }
    }
    if (ctx->pc != 0x268F70u) { return; }
    ctx->pc = 0x268F70u;
label_268f70:
    // 0x268f70: 0xdfbf0000
    ctx->pc = 0x268f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268f74: 0x3e00008
    ctx->pc = 0x268F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268F10u: goto label_268f10;
            case 0x268F14u: goto label_268f14;
            case 0x268F5Cu: goto label_268f5c;
            case 0x268F60u: goto label_268f60;
            case 0x268F70u: goto label_268f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268F7Cu;
}
