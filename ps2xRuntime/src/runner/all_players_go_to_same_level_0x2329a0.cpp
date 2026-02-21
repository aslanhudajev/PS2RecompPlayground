#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: all_players_go_to_same_level
// Address: 0x2329a0 - 0x232a74
void all_players_go_to_same_level_0x2329a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2329a0u;

    // 0x2329a0: 0x27bdffa0
    ctx->pc = 0x2329a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2329a4: 0xffbf0050
    ctx->pc = 0x2329a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2329a8: 0xffb40040
    ctx->pc = 0x2329a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2329ac: 0xffb30030
    ctx->pc = 0x2329acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2329b0: 0xffb20020
    ctx->pc = 0x2329b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2329b4: 0xffb10010
    ctx->pc = 0x2329b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2329b8: 0xffb00000
    ctx->pc = 0x2329b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2329bc: 0x3c020032
    ctx->pc = 0x2329bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2329c0: 0x24501bc0
    ctx->pc = 0x2329c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2329c4: 0x3c020032
    ctx->pc = 0x2329c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2329c8: 0x8c420800
    ctx->pc = 0x2329c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x2329cc: 0x2842000e
    ctx->pc = 0x2329ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 14));
    // 0x2329d0: 0x10400007
    ctx->pc = 0x2329D0u;
    {
        const bool branch_taken_0x2329d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2329D4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2329d0) {
            ctx->pc = 0x2329F0u;
            goto label_2329f0;
        }
    }
    ctx->pc = 0x2329D8u;
    // 0x2329d8: 0x3c020032
    ctx->pc = 0x2329d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2329dc: 0x8c4207bc
    ctx->pc = 0x2329dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x2329e0: 0x14400004
    ctx->pc = 0x2329E0u;
    {
        const bool branch_taken_0x2329e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2329E4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2329e0) {
            ctx->pc = 0x2329F4u;
            goto label_2329f4;
        }
    }
    ctx->pc = 0x2329E8u;
    // 0x2329e8: 0x1000001a
    ctx->pc = 0x2329E8u;
    {
        const bool branch_taken_0x2329e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2329ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2329e8) {
            ctx->pc = 0x232A54u;
            goto label_232a54;
        }
    }
    ctx->pc = 0x2329F0u;
label_2329f0:
    // 0x2329f0: 0x902d
    ctx->pc = 0x2329f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2329f4:
    // 0x2329f4: 0x24140001
    ctx->pc = 0x2329f4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2329f8: 0x24130004
    ctx->pc = 0x2329f8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2329fc: 0x0
    ctx->pc = 0x2329fcu;
    // NOP
label_232a00:
    // 0x232a00: 0x8e0200fc
    ctx->pc = 0x232a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x232a04: 0x50540013
    ctx->pc = 0x232A04u;
    {
        const bool branch_taken_0x232a04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        if (branch_taken_0x232a04) {
            ctx->pc = 0x232A08u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x232A54u;
            goto label_232a54;
        }
    }
    ctx->pc = 0x232A0Cu;
    // 0x232a0c: 0x5453000d
    ctx->pc = 0x232A0Cu;
    {
        const bool branch_taken_0x232a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x232a0c) {
            ctx->pc = 0x232A10u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x232A44u;
            goto label_232a44;
        }
    }
    ctx->pc = 0x232A14u;
    // 0x232a14: 0x12200007
    ctx->pc = 0x232A14u;
    {
        const bool branch_taken_0x232a14 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x232a14) {
            ctx->pc = 0x232A34u;
            goto label_232a34;
        }
    }
    ctx->pc = 0x232A1Cu;
    // 0x232a1c: 0xc096d74
    ctx->pc = 0x232A1Cu;
    SET_GPR_U32(ctx, 31, 0x232A24u);
    ctx->pc = 0x232A20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25B5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_collis_exit_0x25b5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232A24u; }
    }
    if (ctx->pc != 0x232A24u) { return; }
    ctx->pc = 0x232A24u;
    // 0x232a24: 0x12220006
    ctx->pc = 0x232A24u;
    {
        const bool branch_taken_0x232a24 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x232A28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232a24) {
            ctx->pc = 0x232A40u;
            goto label_232a40;
        }
    }
    ctx->pc = 0x232A2Cu;
    // 0x232a2c: 0x1000000a
    ctx->pc = 0x232A2Cu;
    {
        const bool branch_taken_0x232a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232A30u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x232a2c) {
            ctx->pc = 0x232A58u;
            goto label_232a58;
        }
    }
    ctx->pc = 0x232A34u;
label_232a34:
    // 0x232a34: 0xc096d74
    ctx->pc = 0x232A34u;
    SET_GPR_U32(ctx, 31, 0x232A3Cu);
    ctx->pc = 0x232A38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25B5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_collis_exit_0x25b5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232A3Cu; }
    }
    if (ctx->pc != 0x232A3Cu) { return; }
    ctx->pc = 0x232A3Cu;
    // 0x232a3c: 0x40882d
    ctx->pc = 0x232a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232a40:
    // 0x232a40: 0x26520001
    ctx->pc = 0x232a40u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_232a44:
    // 0x232a44: 0x2a420004
    ctx->pc = 0x232a44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x232a48: 0x1440ffed
    ctx->pc = 0x232A48u;
    {
        const bool branch_taken_0x232a48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232A4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x232a48) {
            ctx->pc = 0x232A00u;
            goto label_232a00;
        }
    }
    ctx->pc = 0x232A50u;
    // 0x232a50: 0x220102d
    ctx->pc = 0x232a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232a54:
    // 0x232a54: 0xdfbf0050
    ctx->pc = 0x232a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_232a58:
    // 0x232a58: 0xdfb40040
    ctx->pc = 0x232a58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232a5c: 0xdfb30030
    ctx->pc = 0x232a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232a60: 0xdfb20020
    ctx->pc = 0x232a60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232a64: 0xdfb10010
    ctx->pc = 0x232a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232a68: 0xdfb00000
    ctx->pc = 0x232a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232a6c: 0x3e00008
    ctx->pc = 0x232A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232A70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2329F0u: goto label_2329f0;
            case 0x2329F4u: goto label_2329f4;
            case 0x232A00u: goto label_232a00;
            case 0x232A34u: goto label_232a34;
            case 0x232A40u: goto label_232a40;
            case 0x232A44u: goto label_232a44;
            case 0x232A54u: goto label_232a54;
            case 0x232A58u: goto label_232a58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232A74u;
}
