#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GauntLoadWorld
// Address: 0x263d00 - 0x263dc0
void GauntLoadWorld_0x263d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x263d00u;

    // 0x263d00: 0x27bdffa0
    ctx->pc = 0x263d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x263d04: 0xffbf0050
    ctx->pc = 0x263d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x263d08: 0xffb20040
    ctx->pc = 0x263d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x263d0c: 0xffb10030
    ctx->pc = 0x263d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x263d10: 0xffb00020
    ctx->pc = 0x263d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x263d14: 0x80902d
    ctx->pc = 0x263d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d18: 0xa0802d
    ctx->pc = 0x263d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d1c: 0xc0986b4
    ctx->pc = 0x263D1Cu;
    SET_GPR_U32(ctx, 31, 0x263D24u);
    ctx->pc = 0x263D20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D24u; }
    }
    if (ctx->pc != 0x263D24u) { return; }
    ctx->pc = 0x263D24u;
    // 0x263d24: 0x6010009
    ctx->pc = 0x263D24u;
    {
        const bool branch_taken_0x263d24 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x263D28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x263d24) {
            ctx->pc = 0x263D4Cu;
            goto label_263d4c;
        }
    }
    ctx->pc = 0x263D2Cu;
    // 0x263d2c: 0xc098f70
    ctx->pc = 0x263D2Cu;
    SET_GPR_U32(ctx, 31, 0x263D34u);
    ctx->pc = 0x263D30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x263DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldStart_0x263dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D34u; }
    }
    if (ctx->pc != 0x263D34u) { return; }
    ctx->pc = 0x263D34u;
    // 0x263d34: 0x202d
    ctx->pc = 0x263d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263d38:
    // 0x263d38: 0xc09908c
    ctx->pc = 0x263D38u;
    SET_GPR_U32(ctx, 31, 0x263D40u);
    ctx->pc = 0x263D3Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D40u; }
    }
    if (ctx->pc != 0x263D40u) { return; }
    ctx->pc = 0x263D40u;
    // 0x263d40: 0x1040fffd
    ctx->pc = 0x263D40u;
    {
        const bool branch_taken_0x263d40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x263D44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x263d40) {
            ctx->pc = 0x263D38u;
            goto label_263d38;
        }
    }
    ctx->pc = 0x263D48u;
    // 0x263d48: 0x3c020032
    ctx->pc = 0x263d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_263d4c:
    // 0x263d4c: 0x8c44faa0
    ctx->pc = 0x263d4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965920)));
    // 0x263d50: 0x1080000a
    ctx->pc = 0x263D50u;
    {
        const bool branch_taken_0x263d50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x263D54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x263d50) {
            ctx->pc = 0x263D7Cu;
            goto label_263d7c;
        }
    }
    ctx->pc = 0x263D58u;
    // 0x263d58: 0x8c820000
    ctx->pc = 0x263d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263d5c: 0x2228821
    ctx->pc = 0x263d5cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263d60: 0x8c830050
    ctx->pc = 0x263d60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x263d64: 0x31040
    ctx->pc = 0x263d64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x263d68: 0x431021
    ctx->pc = 0x263d68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263d6c: 0x2228821
    ctx->pc = 0x263d6cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263d70: 0x8c820058
    ctx->pc = 0x263d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x263d74: 0x2228821
    ctx->pc = 0x263d74u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263d78: 0x3c020032
    ctx->pc = 0x263d78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_263d7c:
    // 0x263d7c: 0x8c43faa4
    ctx->pc = 0x263d7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965924)));
    // 0x263d80: 0x10600009
    ctx->pc = 0x263D80u;
    {
        const bool branch_taken_0x263d80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x263D84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x263d80) {
            ctx->pc = 0x263DA8u;
            goto label_263da8;
        }
    }
    ctx->pc = 0x263D88u;
    // 0x263d88: 0x8c620000
    ctx->pc = 0x263d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263d8c: 0x2228821
    ctx->pc = 0x263d8cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263d90: 0x8c620050
    ctx->pc = 0x263d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x263d94: 0x21040
    ctx->pc = 0x263d94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x263d98: 0x2228821
    ctx->pc = 0x263d98u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263d9c: 0x8c620058
    ctx->pc = 0x263d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x263da0: 0x2228821
    ctx->pc = 0x263da0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263da4: 0x220102d
    ctx->pc = 0x263da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263da8:
    // 0x263da8: 0xdfbf0050
    ctx->pc = 0x263da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263dac: 0xdfb20040
    ctx->pc = 0x263dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263db0: 0xdfb10030
    ctx->pc = 0x263db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263db4: 0xdfb00020
    ctx->pc = 0x263db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263db8: 0x3e00008
    ctx->pc = 0x263DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263DBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263D38u: goto label_263d38;
            case 0x263D4Cu: goto label_263d4c;
            case 0x263D7Cu: goto label_263d7c;
            case 0x263DA8u: goto label_263da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263DC0u;
}
